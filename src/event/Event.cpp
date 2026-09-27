// src/event/Event.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E67860..00E912A0, 776 functions

#include "mgrr.h"

// 00E67860  Event::ReadUnit::vf00  size=31  [class]
undefined4 * __thiscall Event::ReadUnit::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E678D0  FUN_00e678d0  size=80  [between]
int * __thiscall FUN_00e678d0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  if (-1 < param_4) {
    param_1[2] = param_4;
    return param_1;
  }
  if (param_2 != 1) {
    if (param_2 != 2) {
      param_1[2] = -1;
      return param_1;
    }
    iVar1 = FUN_00932720();
    param_1[2] = iVar1;
    return param_1;
  }
  iVar1 = FUN_00932710();
  param_1[2] = iVar1;
  return param_1;
}

// 00E67970  FUN_00e67970  size=63  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e67970(void)

{
  undefined4 *puVar1;
  
  _DAT_01dd9ec8 = 0;
  DAT_01dd9ecc = 0;
  _DAT_01dd9ed0 = 0;
  DAT_01dd9ed4 = 0;
  DAT_01dd9ee4 = 0;
  puVar1 = &DAT_01dd9f00;
  do {
    FUN_00eaa010();
    *puVar1 = 3;
    puVar1 = puVar1 + 0x30;
  } while ((int)puVar1 < 0x1dda500);
  return;
}

// 00E67BC0  FUN_00e67bc0  size=116  [between]
undefined4 __fastcall FUN_00e67bc0(byte *param_1)

{
  int iVar1;
  
  if ((*param_1 & 2) == 0) {
    param_1[0x14] = 4;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    return 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 8))();
  iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
  if (iVar1 == 0) {
    param_1[0x14] = 5;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    return 0;
  }
  param_1[0x14] = 2;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return 0;
}

// 00E67CF0  Event::DataHolderBase::vf04  size=15  [class]
undefined4 __thiscall Event::DataHolderBase::vf04(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return 1;
}

// 00E67D00  Event::DataHolderBase::vf0C  size=1  [class]
void Event::DataHolderBase::vf0C(void)

{
  return;
}

// 00E67D20  Event::DataHolderBase::vf10  size=8  [class]
undefined4 Event::DataHolderBase::vf10(void)

{
  return 1;
}

// 00E67D30  Event::DataHolderBase::vf18  size=8  [class]
undefined4 Event::DataHolderBase::vf18(void)

{
  return 1;
}

// 00E67D40  Event::DataHolderBase::vf1C  size=8  [class]
undefined4 Event::DataHolderBase::vf1C(void)

{
  return 1;
}

// 00E67D50  Event::DataHolderBase::vf20  size=8  [class]
undefined4 Event::DataHolderBase::vf20(void)

{
  return 1;
}

// 00E67D60  Event::DataHolderBase::vf24  size=8  [class]
undefined4 Event::DataHolderBase::vf24(void)

{
  return 1;
}

// 00E67DC0  FUN_00e67dc0  size=102  [between]
void FUN_00e67dc0(int param_1,char *param_2)

{
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_108;
  _vsprintf_s(local_108,0x104,param_2,&stack0x0000000c);
  _strncpy_s((char *)(param_1 + 0x18),0x48,local_108,0x47);
  __security_check_cookie(local_4 ^ (uint)local_108);
  return;
}

// 00E67E40  FUN_00e67e40  size=227  [between]
undefined4 __thiscall FUN_00e67e40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *local_38 [14];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  local_38[0] = param_1 + 5;
  local_38[1] = param_1 + 0xe;
  local_38[2] = param_1 + 0x1b;
  local_38[3] = param_1 + 0x30;
  local_38[4] = param_1 + 0x59;
  local_38[5] = param_1 + 0x6a;
  local_38[6] = param_1 + 0x7b;
  local_38[7] = param_1 + 0x90;
  local_38[8] = param_1 + 0xa6;
  local_38[9] = param_1 + 0xb7;
  local_38[10] = param_1 + 200;
  local_38[0xb] = param_1 + 0xdc;
  local_38[0xc] = param_1 + 0xf0;
  local_38[0xd] = param_1 + 0x101;
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*local_38[iVar2] + 4))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xe);
  FUN_00de3540(0,0);
  param_1[0x112] = 0;
  return 1;
}

// 00E67F30  FUN_00e67f30  size=189  [between]
void __fastcall FUN_00e67f30(int param_1)

{
  int iVar1;
  int local_38 [14];
  
  local_38[0] = param_1 + 0x14;
  local_38[1] = param_1 + 0x38;
  local_38[2] = param_1 + 0x6c;
  local_38[3] = param_1 + 0xc0;
  local_38[4] = param_1 + 0x164;
  local_38[5] = param_1 + 0x1a8;
  local_38[6] = param_1 + 0x1ec;
  local_38[7] = param_1 + 0x240;
  local_38[8] = param_1 + 0x298;
  local_38[9] = param_1 + 0x2dc;
  local_38[10] = param_1 + 800;
  local_38[0xb] = param_1 + 0x370;
  local_38[0xc] = param_1 + 0x3c0;
  local_38[0xd] = param_1 + 0x404;
  iVar1 = 0;
  do {
    (**(code **)(*(int *)local_38[iVar1] + 0xc))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xe);
  FUN_00de3540(0,0);
  *(undefined4 *)(param_1 + 0x448) = 0;
  return;
}

// 00E67FF0  FUN_00e67ff0  size=150  [between]
void __fastcall FUN_00e67ff0(int param_1)

{
  int iVar1;
  int local_30 [12];
  
  local_30[0] = param_1 + 0x6c;
  local_30[1] = param_1 + 0xc0;
  local_30[2] = param_1 + 0x164;
  local_30[3] = param_1 + 0x1a8;
  local_30[4] = param_1 + 0x1ec;
  local_30[5] = param_1 + 0x240;
  local_30[6] = param_1 + 0x298;
  local_30[7] = param_1 + 0x2dc;
  local_30[8] = param_1 + 800;
  local_30[9] = param_1 + 0x370;
  local_30[10] = param_1 + 0x3c0;
  local_30[0xb] = param_1 + 0x404;
  iVar1 = 0;
  do {
    (**(code **)(*(int *)local_30[iVar1] + 0x28))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  return;
}

// 00E68090  FUN_00e68090  size=171  [between]
undefined4 __thiscall FUN_00e68090(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_30 [12];
  
  local_30[0] = param_1 + 0x6c;
  local_30[1] = param_1 + 0xc0;
  local_30[2] = param_1 + 0x164;
  local_30[3] = param_1 + 0x1a8;
  local_30[4] = param_1 + 0x1ec;
  local_30[5] = param_1 + 0x240;
  local_30[6] = param_1 + 0x298;
  local_30[7] = param_1 + 0x2dc;
  local_30[8] = param_1 + 800;
  local_30[9] = param_1 + 0x370;
  local_30[10] = param_1 + 0x3c0;
  local_30[0xb] = param_1 + 0x404;
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*(int *)local_30[iVar2] + 0x3c))(param_2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  return 0;
}

// 00E68190  FUN_00e68190  size=217  [between]
undefined4 __thiscall FUN_00e68190(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 0x1c))(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  while ((*(int **)(&stack0xffffffc4 + iVar1 * 4) == (int *)(param_1 + 0x38) ||
         (iVar2 = (**(code **)(**(int **)(&stack0xffffffc4 + iVar1 * 4) + 0x1c))(param_2),
         iVar2 != 0))) {
    iVar1 = iVar1 + 1;
    if (0xd < iVar1) {
      return 1;
    }
  }
  return 0;
}

// 00E68270  FUN_00e68270  size=217  [between]
undefined4 __thiscall FUN_00e68270(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x38) + 0x20))(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  while ((*(int **)(&stack0xffffffc4 + iVar1 * 4) == (int *)(param_1 + 0x38) ||
         (iVar2 = (**(code **)(**(int **)(&stack0xffffffc4 + iVar1 * 4) + 0x20))(param_2),
         iVar2 != 0))) {
    iVar1 = iVar1 + 1;
    if (0xd < iVar1) {
      return 1;
    }
  }
  return 0;
}

// 00E68350  FUN_00e68350  size=173  [between]
undefined4 __thiscall FUN_00e68350(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_30 [12];
  
  local_30[0] = param_1 + 0x6c;
  local_30[1] = param_1 + 0xc0;
  local_30[2] = param_1 + 0x164;
  local_30[3] = param_1 + 0x1a8;
  local_30[4] = param_1 + 0x1ec;
  local_30[5] = param_1 + 0x240;
  local_30[6] = param_1 + 0x298;
  local_30[7] = param_1 + 0x2dc;
  local_30[8] = param_1 + 800;
  local_30[9] = param_1 + 0x370;
  local_30[10] = param_1 + 0x3c0;
  local_30[0xb] = param_1 + 0x404;
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*(int *)local_30[iVar2] + 0x1c))(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  return 1;
}

// 00E68400  FUN_00e68400  size=173  [between]
undefined4 __thiscall FUN_00e68400(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_30 [12];
  
  local_30[0] = param_1 + 0x6c;
  local_30[1] = param_1 + 0xc0;
  local_30[2] = param_1 + 0x164;
  local_30[3] = param_1 + 0x1a8;
  local_30[4] = param_1 + 0x1ec;
  local_30[5] = param_1 + 0x240;
  local_30[6] = param_1 + 0x298;
  local_30[7] = param_1 + 0x2dc;
  local_30[8] = param_1 + 800;
  local_30[9] = param_1 + 0x370;
  local_30[10] = param_1 + 0x3c0;
  local_30[0xb] = param_1 + 0x404;
  iVar2 = 0;
  do {
    iVar1 = (**(code **)(*(int *)local_30[iVar2] + 0x20))(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  return 1;
}

// 00E684B0  FUN_00e684b0  size=243  [between]
undefined4 __thiscall
FUN_00e684b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_8;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc0) + 0x24))(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  while ((*(int **)(&stack0xffffffbc + iVar1 * 4) == (int *)(param_1 + 0xc0) ||
         (iVar2 = (**(code **)(**(int **)(&stack0xffffffbc + iVar1 * 4) + 0x24))
                            (uStack_8,param_3,param_4), iVar2 != 0))) {
    iVar1 = iVar1 + 1;
    if (0xd < iVar1) {
      return 1;
    }
  }
  return 0;
}

// 00E685B0  Event::ActorDataHolder::vf14  size=8  [class]
undefined4 Event::ActorDataHolder::vf14(void)

{
  return 2;
}

// 00E68620  FUN_00e68620  size=82  [between]
void __fastcall FUN_00e68620(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}

// 00E68790  FUN_00e68790  size=78  [between]
void FUN_00e68790(undefined4 param_1,undefined4 param_2)

{
  char local_20 [28];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_20;
  _sprintf_s(local_20,0x1c,"camera_%02d_%03d.mot",param_1,param_2);
  FUN_00de45a0(local_20);
  __security_check_cookie(local_4 ^ (uint)local_20);
  return;
}

// 00E687E0  FUN_00e687e0  size=103  [between]
void FUN_00e687e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char local_20 [28];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_20;
  _sprintf_s(local_20,0x1c,"camera_%02d_%03d.mot",param_1,param_2);
  iVar1 = FUN_00de45a0(local_20);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_20);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_20);
  return;
}

// 00E68940  Event::ControlDataHolder::vf44  size=5  [class]
float10 Event::ControlDataHolder::vf44(void)

{
  return (float10)0;
}

// 00E68AA0  Event::CutDataHolder::vf14  size=8  [class]
undefined4 Event::CutDataHolder::vf14(void)

{
  return 2;
}

// 00E68CC0  FUN_00e68cc0  size=451  [between]
void __thiscall FUN_00e68cc0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  uint auStack_24 [8];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_24;
  pcStack_34 = "OnFlag";
  uStack_38 = param_3;
  pcStack_3c = (char *)0xe68ced;
  iVar4 = (**(code **)(*param_2 + 0x9c))();
  if (iVar4 != -1) {
    pcStack_3c = (char *)0x4;
    (**(code **)(*param_2 + 0x104))();
  }
  pcStack_3c = "OffFlag";
  iVar4 = (**(code **)(*param_2 + 0x9c))();
  if (iVar4 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar4,param_1 + 4);
  }
  iVar4 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016cedcc);
  if (iVar4 != -1) {
    (**(code **)(*param_2 + 0x108))(iVar4,&pcStack_3c,8);
  }
  iVar5 = (**(code **)(*param_2 + 0x9c))(param_3,"MeshNo");
  if (iVar5 != -1) {
    (**(code **)(*param_2 + 0x108))(iVar5,&pcStack_34,8);
  }
  if ((iVar4 != -1) && (iVar5 != -1)) {
    iVar4 = 0;
    do {
      sVar1 = *(short *)((int)&pcStack_34 + iVar4);
      if (sVar1 < 0) {
        sVar1 = *(short *)((int)auStack_24 + iVar4 + -0x20);
        if (sVar1 == 1) {
          *param_1 = 0xffffffff;
          param_1[1] = 0xffffffff;
          param_1[2] = 0xffffffff;
          param_1[3] = 0xffffffff;
          uVar6 = 0;
        }
        else {
          if (sVar1 != 2) goto LAB_00e68e64;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          uVar6 = 0xffffffff;
        }
        param_1[4] = uVar6;
        param_1[5] = uVar6;
        param_1[6] = uVar6;
        param_1[7] = uVar6;
      }
      else {
        sVar2 = *(short *)((int)auStack_24 + iVar4 + -0x20);
        bVar3 = (byte)sVar1;
        if (sVar2 == 1) {
          param_1[(uint)(int)sVar1 >> 5] =
               param_1[(uint)(int)sVar1 >> 5] | 0x80000000U >> (bVar3 & 0x1f);
          param_1[((uint)(int)sVar1 >> 5) + 4] =
               param_1[((uint)(int)sVar1 >> 5) + 4] & ~(0x80000000U >> (bVar3 & 0x1f));
        }
        else if (sVar2 == 2) {
          param_1[(uint)(int)sVar1 >> 5] =
               param_1[(uint)(int)sVar1 >> 5] & ~(0x80000000U >> (bVar3 & 0x1f));
          param_1[((uint)(int)sVar1 >> 5) + 4] =
               param_1[((uint)(int)sVar1 >> 5) + 4] | 0x80000000U >> (bVar3 & 0x1f);
        }
      }
LAB_00e68e64:
      iVar4 = iVar4 + 2;
    } while (iVar4 < 0x10);
  }
  __security_check_cookie(auStack_24[0] ^ (uint)&stack0xffffffbc);
  return;
}

// 00E68F60  FUN_00e68f60  size=147  [between]
undefined4 __thiscall FUN_00e68f60(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016cedcc);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x110))(iVar1,param_1,4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RoomNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x10c))(iVar1,param_1 + 4,4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LayerNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x114))(iVar1,param_1 + 0xc,4);
  }
  return 1;
}

// 00E69060  Event::SeqDataHolder::vf44  size=9  [class]
float10 Event::SeqDataHolder::vf44(void)

{
  return (float10)-1.0;
}

// 00E69070  Event::SeqDataHolder::vf48  size=9  [class]
float10 Event::SeqDataHolder::vf48(void)

{
  return (float10)-1.0;
}

// 00E69080  Event::SeqDataHolder::vf18  size=88  [class]
undefined4 __thiscall Event::SeqDataHolder::vf18(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x40))(iVar2);
      if ((*(short *)(iVar1 + 10) == param_2) && (param_3 - param_4 < (int)*(short *)(iVar1 + 0xc)))
      {
        *(short *)(iVar1 + 0xc) = (short)(param_3 - param_4);
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return 1;
}

// 00E690E0  Event::SeqDataHolder::vf1C  size=73  [class]
undefined4 __thiscall Event::SeqDataHolder::vf1C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(*param_1 + 0x40))(iVar2);
      if (param_2 <= *(short *)(iVar1 + 10)) {
        *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return 1;
}

// 00E69130  Event::SeqDataHolder::vf20  size=89  [class]
undefined4 __thiscall Event::SeqDataHolder::vf20(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x40))(iVar3);
      sVar1 = *(short *)(iVar2 + 10);
      if (sVar1 == param_2) {
        iVar3 = (**(code **)(*param_1 + 0x4c))(iVar3);
      }
      else {
        if (param_2 < sVar1) {
          *(short *)(iVar2 + 10) = sVar1 + -1;
        }
        iVar3 = iVar3 + 1;
      }
      iVar2 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar3 < iVar2);
  }
  return 1;
}

// 00E69190  Event::SeqDataHolder::vf24  size=88  [class]
undefined4 __thiscall Event::SeqDataHolder::vf24(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      piVar2 = (int *)(**(code **)(*param_1 + 0x40))(iVar3);
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        iVar3 = (**(code **)(*param_1 + 0x4c))(iVar3);
      }
      else {
        iVar3 = iVar3 + 1;
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar3 < iVar1);
  }
  return 1;
}

// 00E693C0  FUN_00e693c0  size=80  [between]
void __fastcall FUN_00e693c0(undefined4 *param_1)

{
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[0xb] = 0x3f000000;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[0xc] = 0x3f000000;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[0xd] = 0;
  param_1[4] = 0;
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[6] = 0x100;
  param_1[7] = 0x1e0000;
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

// 00E69420  FUN_00e69420  size=85  [between]
void __fastcall FUN_00e69420(int param_1)

{
  int iVar1;
  
  iVar1 = (uint)*(ushort *)(param_1 + 0xe) * 2;
  *(short *)(param_1 + 0xe) = (short)iVar1;
  *(short *)(param_1 + 0xc) = (short)((uint)iVar1 >> 0x10) + *(short *)(param_1 + 0xc) * 2;
  *(short *)(param_1 + 0x16) = *(short *)(param_1 + 0x16) * 2;
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) * 2;
    *(short *)(param_1 + 0x1e) = *(short *)(param_1 + 0x1e) * 2;
    *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) * 2;
  }
  return;
}

// 00E69600  FUN_00e69600  size=41  [between]
void __thiscall FUN_00e69600(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_00a7c800();
    if (iVar1 != 0) {
      FUN_00932330(iVar1,param_2);
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x20;
    }
  }
  return;
}

// 00E697D0  FUN_00e697d0  size=278  [between]
void FUN_00e697d0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  *param_1 = *param_2 + param_3 * (param_2[0x14] - *param_2);
  param_1[1] = (param_2[0x15] - param_2[1]) * param_3 + param_2[1];
  param_1[2] = (param_2[0x16] - param_2[2]) * param_3 + param_2[2];
  param_1[3] = (param_2[0x17] - param_2[3]) * param_3 + param_2[3];
  param_1[4] = (param_2[0x18] - param_2[4]) * param_3 + param_2[4];
  param_1[5] = (param_2[0x19] - param_2[5]) * param_3 + param_2[5];
  param_1[6] = (param_2[0x1a] - param_2[6]) * param_3 + param_2[6];
  param_1[7] = (param_2[0x1b] - param_2[7]) * param_3 + param_2[7];
  param_1[8] = (param_2[0x1c] - param_2[8]) * param_3 + param_2[8];
  param_1[9] = (param_2[0x1d] - param_2[9]) * param_3 + param_2[9];
  param_1[10] = (param_2[0x1e] - param_2[10]) * param_3 + param_2[10];
  param_1[0xb] = (param_2[0x1f] - param_2[0xb]) * param_3 + param_2[0xb];
  fVar1 = 1.0 - param_3;
  param_1[0xc] = param_2[0xc] * fVar1 + param_2[0x20] * param_3;
  param_1[0xd] = param_2[0xd] * fVar1 + param_2[0x21] * param_3;
  param_1[0x11] = param_2[0x11] * fVar1 + param_2[0x25] * param_3;
  param_1[0x12] = param_2[0x12] * fVar1 + param_2[0x26] * param_3;
  param_1[0x10] = fVar1 * param_2[0x10] + param_2[0x24] * param_3;
  return;
}

// 00E69960  FUN_00e69960  size=111  [between]
void FUN_00e69960(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  puVar1 = (undefined4 *)FUN_00e9fe70();
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  puVar1 = (undefined4 *)FUN_00e9feb0();
  param_1[4] = *puVar1;
  param_1[5] = puVar1[1];
  param_1[6] = puVar1[2];
  param_1[7] = puVar1[3];
  puVar1 = (undefined4 *)FUN_00e9fed0();
  param_1[8] = *puVar1;
  param_1[9] = puVar1[1];
  param_1[10] = puVar1[2];
  param_1[0xb] = puVar1[3];
  iVar2 = FUN_00e9fef0();
  param_1[0xc] = *(undefined4 *)(iVar2 + 8);
  fVar3 = (float10)FUN_00ea0070();
  param_1[0xd] = (float)fVar3;
  return;
}

// 00E699D0  FUN_00e699d0  size=197  [between]
float10 FUN_00e699d0(undefined4 param_1,undefined4 *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)FUN_00e81f40(param_1,*param_2,param_2[1],param_2[2]);
  fVar2 = (float10)FUN_00e81f40(param_1,param_2[3],param_2[4],param_2[5]);
  fVar3 = (float10)FUN_00e81f40(param_1,param_2[6],param_2[7],param_2[8]);
  fVar4 = (float10)FUN_00e81f40(param_1,param_2[9],param_2[10],param_2[0xb]);
  return (float10)((float)(fVar2 * (float10)(float)(fVar1 + (float10)0.0)) -
                  (float)(fVar4 * (float10)(float)(fVar3 + (float10)0.0)));
}

// 00E69AC0  FUN_00e69ac0  size=97  [between]
undefined4 __thiscall FUN_00e69ac0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 == 0) {
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      return 2;
    }
    if (*(char *)(param_2 + 0x1d) == '\x03') {
      return 1;
    }
    if ((*(int *)(param_1 + 0x14) != 1) && (*(char *)(param_2 + 0x1e) == '\x01')) {
      return 1;
    }
  }
  else if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x14) != 1) {
      cVar1 = *(char *)(param_2 + 0x1c);
      if (cVar1 == '\x01') {
        return 1;
      }
      if (cVar1 == '\x02') {
        return 1;
      }
      if (cVar1 == '\x03') {
        return 1;
      }
    }
  }
  else if ((iVar2 == 2) && (*(int *)(param_1 + 0x14) != 1)) {
    return 1;
  }
  return 0;
}

// 00E69B30  FUN_00e69b30  size=51  [between]
undefined4 __fastcall FUN_00e69b30(int *param_1)

{
  int iVar1;
  
  if (param_1[7] != 0) {
    iVar1 = FUN_00932520(*param_1 + 0x1a70,param_1 + 9);
    if (iVar1 == 0) {
      return 1;
    }
    param_1[7] = 0;
  }
  return 0;
}

// 00E69CA0  FUN_00e69ca0  size=125  [between]
void __thiscall FUN_00e69ca0(int param_1,int param_2)

{
  if (*(char *)(param_2 + 0x20) != '\0') {
    if (*(char *)(param_2 + 0x20) == '\x02') {
      if (*(int *)(param_1 + 0xc) == 0) {
        if ((0 < DAT_01dd9ed8) && (DAT_01dd9edc == 0)) {
          FUN_00dff980(0);
        }
        DAT_01dd9edc = DAT_01dd9edc + 1;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
    }
    else if (*(int *)(param_1 + 0xc) != 0) {
      DAT_01dd9edc = DAT_01dd9edc + -1;
      if ((0 < DAT_01dd9ed8) && (DAT_01dd9edc == 0)) {
        FUN_00dff980(1);
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

// 00E69D70  FUN_00e69d70  size=93  [between]
undefined4 __thiscall FUN_00e69d70(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  switch(*(undefined1 *)(param_2 + 0x1d)) {
  case 0:
    return 0;
  case 1:
    uVar1 = FUN_00e001b0(uVar1);
    return uVar1;
  case 2:
    uVar1 = FUN_00e00b40(uVar1);
    return uVar1;
  case 3:
    uVar1 = FUN_00e00210(*(undefined4 *)(*param_1 + 0x1a70),uVar1);
    return uVar1;
  case 4:
    uVar1 = FUN_00e001e0(uVar1);
    return uVar1;
  default:
    return 0xfff;
  }
}

// 00E69E40  FUN_00e69e40  size=54  [between]
void __fastcall FUN_00e69e40(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    iVar1 = *(int *)(param_1[1] + 0x44);
    if (iVar1 != 0) {
      thunk_FUN_00e006f0(*(undefined4 *)(*param_1 + 0x1a70),*(undefined4 *)(*param_1 + 0x1a74),iVar1
                         ,*(undefined4 *)(param_1[1] + 0x48));
      param_1[2] = param_1[2] | 1;
    }
  }
  return;
}

// 00E69E80  FUN_00e69e80  size=54  [between]
void __fastcall FUN_00e69e80(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    iVar1 = *(int *)(param_1[1] + 0x44);
    if (iVar1 != 0) {
      thunk_FUN_00e00860(*(undefined4 *)(*param_1 + 0x1a70),*(undefined4 *)(*param_1 + 0x1a74),iVar1
                         ,*(undefined4 *)(param_1[1] + 0x48));
      param_1[2] = param_1[2] & 0xfffffffe;
    }
  }
  return;
}

// 00E69ED0  FUN_00e69ed0  size=102  [between]
void __thiscall FUN_00e69ed0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 == 4) && (param_3 != 4)) {
    (**(code **)(*(int *)(param_1 + 0x10) + 4))();
    piVar1 = (int *)(param_1 + 0xd0);
    iVar2 = 0x20;
    do {
      (**(code **)(*piVar1 + 4))();
      piVar1 = piVar1 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (**(code **)(*(int *)(param_1 + 0x16d0) + 4))();
    (**(code **)(**(int **)(param_1 + 0x1830) + 4))();
  }
  return;
}

// 00E69F80  FUN_00e69f80  size=30  [between]
void __fastcall FUN_00e69f80(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00ebdd50(0xffffffff);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 00E69FF0  FUN_00e69ff0  size=69  [between]
void FUN_00e69ff0(undefined4 param_1,int param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    local_20 = *(undefined4 *)(param_2 + 0x88);
    local_1c = *(undefined4 *)(param_2 + 0x88);
    local_18 = *(undefined4 *)(param_2 + 0x88);
    FUN_00a7cf90(&local_20);
  }
  return;
}

// 00E6A040  FUN_00e6a040  size=37  [between]
void __fastcall FUN_00e6a040(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 8),0);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E6A080  FUN_00e6a080  size=261  [between]
undefined4
FUN_00e6a080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(param_5 + 0x54);
  if (*(char *)(param_5 + 0x20) == '\a') {
    uVar6 = 3;
  }
  else if (*(char *)(param_5 + 0x20) == '\b') {
    uVar6 = 4;
  }
  else {
    uVar6 = 2;
  }
  iVar5 = FUN_00e26e90();
  if (iVar5 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = FUN_00e36390(param_1 + 0x98,param_2,"Blend",uVar6,param_4,param_3);
  }
  iVar5 = FUN_00e26e90();
  if (iVar5 != 0) {
    FUN_00e36720(uVar6,uVar1);
  }
  cVar2 = *(char *)(param_5 + 0x44);
  cVar3 = *(char *)(param_5 + 0x45);
  cVar4 = *(char *)(param_5 + 0x46);
  iVar5 = FUN_00e26e90();
  if (iVar5 != 0) {
    Animation::Motion::Unit::setBlendRate
              (param_2,(float)(int)cVar2 / 10.0,(float)(int)cVar3 / 10.0,(float)(int)cVar4 / 10.0);
  }
  return uVar6;
}

// 00E6A1D0  FUN_00e6a1d0  size=86  [between]
void FUN_00e6a1d0(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 0x21);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x334) = 2;
    return;
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\x03') {
      *(undefined4 *)(param_1 + 0x334) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x334) = 3;
    return;
  }
  *(undefined4 *)(param_1 + 0x334) = 4;
  return;
}

// 00E6A280  FUN_00e6a280  size=62  [between]
void FUN_00e6a280(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00a7c890();
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  iVar2 = FUN_00e26e90();
  if (iVar2 != 0) {
    FUN_00e36720(0,uVar1);
  }
  return;
}

// 00E6A2C0  FUN_00e6a2c0  size=182  [between]
void FUN_00e6a2c0(char *param_1,size_t param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  if (param_4 == 1) {
    uVar2 = (uint)*(ushort *)((int)param_3 + 0x32);
  }
  else if (param_4 == 2) {
    uVar2 = (uint)(ushort)param_3[0xd];
  }
  else if (param_4 == 3) {
    uVar2 = (uint)*(ushort *)((int)param_3 + 0x36);
  }
  else {
    uVar2 = (uint)(ushort)param_3[0xc];
  }
  if ((param_3[6] & 2) == 0) {
    if ((param_3[6] & 1) == 0) {
      _sprintf_s(param_1,param_2,"%04x",uVar2);
      __security_check_cookie(local_4 ^ (uint)local_14);
      return;
    }
    uVar1 = *param_3;
  }
  else {
    uVar1 = param_3[0xb];
  }
  FUN_009f8ea0(local_14,0x10,uVar1 & 0xffffff,0);
  _sprintf_s(param_1,param_2,"%s_%04x",local_14,uVar2);
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E6A490  FUN_00e6a490  size=77  [between]
int __fastcall FUN_00e6a490(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return -1;
  }
  iVar1 = FUN_00dfbfb0(*(int *)(param_1 + 0xc));
  if (iVar1 == 2) {
    return 0x7fffffff;
  }
  if (iVar1 != 3) {
    return 0;
  }
  iVar1 = FUN_00dfc070(*(undefined4 *)(param_1 + 0xc));
  iVar2 = FUN_00dfc030(*(undefined4 *)(param_1 + 0xc));
  return *(int *)(iVar2 + 8) - iVar1;
}

// 00E6A540  FUN_00e6a540  size=74  [between]
void __fastcall FUN_00e6a540(int *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(*param_1 + 0x14);
  iVar2 = FUN_00931ea0();
  if ((float)iVar2 < fVar1) {
    FUN_00fdbc60();
    return;
  }
  FUN_00fdbc60();
  return;
}

// 00E6A840  FUN_00e6a840  size=124  [between]
void __fastcall FUN_00e6a840(int param_1)

{
  char cVar1;
  float10 extraout_ST0;
  
  cVar1 = FUN_00fdbc60();
  *(char *)(param_1 + 0x10) = cVar1;
  *(float *)(param_1 + 0x14) = (float)(extraout_ST0 / (float10)60.0);
  if ((*(char *)(*(int *)(param_1 + 4) + 0x42) == '\x1e') && (cVar1 == '<')) {
    *(float *)(param_1 + 0x14) = (float)(extraout_ST0 / (float10)60.0) * 0.5;
    return;
  }
  return;
}

// 00E6A8C0  FUN_00e6a8c0  size=107  [between]
float10 __thiscall FUN_00e6a8c0(int *param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    return (float10)1;
  }
  if (*(char *)(param_1[2] + 1) == '\x01') {
    fVar1 = 30.0;
  }
  else if (*(char *)(param_1[2] + 1) == '\x02') {
    fVar1 = 60.0;
  }
  else {
    cVar2 = FUN_00e23840(param_2);
    fVar1 = (float)(int)cVar2;
  }
  return (float10)(fVar1 / (float)(int)(char)param_1[4]);
}

// 00E6A970  FUN_00e6a970  size=25  [between]
void __fastcall FUN_00e6a970(int param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    FUN_009322f0(0);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffe;
  }
  return;
}

// 00E6AA30  Event::UiModule::setWaitUi  size=59  [class]
void __thiscall Event::UiModule::setWaitUi(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00dd5650(&DAT_016cee28);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = param_2[2];
  *(undefined4 *)(param_1 + 0x18) = param_2[3];
  return;
}

// 00E6AA70  FUN_00e6aa70  size=45  [between]
undefined4 __fastcall FUN_00e6aa70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = FUN_009324f0(2,param_1 + 0xc);
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}

// 00E6AAB0  Event::ReadUnit::vf24  size=5  [class]
undefined4 Event::ReadUnit::vf24(void)

{
  return 0;
}

// 00E6AAC0  Event::ReadUnit::vf28  size=10  [class]
void Event::ReadUnit::vf28(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 00E6AAD0  Event::ReadUnit::vf2C  size=6  [class]
undefined4 Event::ReadUnit::vf2C(void)

{
  return 0xffffffff;
}

// 00E6AAE0  Event::ReadUnit::vf30  size=5  [class]
undefined4 Event::ReadUnit::vf30(void)

{
  return 0;
}

// 00E6AAF0  FUN_00e6aaf0  size=18  [between]
bool __fastcall FUN_00e6aaf0(int param_1)

{
  return 1 < *(int *)(param_1 + 8) - 4U;
}

// 00E6AB10  FUN_00e6ab10  size=10  [between]
bool __fastcall FUN_00e6ab10(int param_1)

{
  return *(int *)(param_1 + 8) == 4;
}

// 00E6AB20  FUN_00e6ab20  size=4  [between]
int __fastcall FUN_00e6ab20(int param_1)

{
  return param_1 + 0x70;
}

// 00E6AB30  FUN_00e6ab30  size=9  [between]
bool __fastcall FUN_00e6ab30(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}

// 00E6ABA0  FUN_00e6aba0  size=25  [between]
void __thiscall FUN_00e6aba0(int param_1,char *param_2,rsize_t param_3)

{
  _strcpy_s(param_2,param_3,(char *)(param_1 + 0x28));
  return;
}

// 00E6ABC0  Event::ReadUnitExternal::vf10  size=18  [class]
bool __fastcall Event::ReadUnitExternal::vf10(int param_1)

{
  return 1 < *(int *)(param_1 + 8) - 4U;
}

// 00E6ABE0  Event::ReadUnitExternal::vf14  size=10  [class]
bool __fastcall Event::ReadUnitExternal::vf14(int param_1)

{
  return *(int *)(param_1 + 8) == 4;
}

// 00E6ABF0  Event::ReadUnitExternal::vf20  size=4  [class]
int __fastcall Event::ReadUnitExternal::vf20(int param_1)

{
  return param_1 + 0x10;
}

// 00E6AC00  Event::ReadUnitExternal::vf1C  size=9  [class]
bool __fastcall Event::ReadUnitExternal::vf1C(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}

// 00E6AC90  Event::ReadUnitNorm::vf10  size=18  [class]
bool __fastcall Event::ReadUnitNorm::vf10(int param_1)

{
  return 1 < *(int *)(param_1 + 8) - 7U;
}

// 00E6ACB0  Event::ReadUnitNorm::vf14  size=10  [class]
bool __fastcall Event::ReadUnitNorm::vf14(int param_1)

{
  return *(int *)(param_1 + 8) == 7;
}

// 00E6ACC0  Event::ReadUnitNorm::vf20  size=4  [class]
int __fastcall Event::ReadUnitNorm::vf20(int param_1)

{
  return param_1 + 0x1c;
}

// 00E6ACD0  Event::ReadUnitNorm::vf1C  size=9  [class]
bool __fastcall Event::ReadUnitNorm::vf1C(int param_1)

{
  return *(int *)(param_1 + 8) != 0;
}

// 00E6AD40  Event::ReadUnitPhase::vf34  size=422  [class]
void Event::ReadUnitPhase::vf34(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [8];
  char local_10 [12];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_18;
  iVar1 = GameProxy::getPhaseData(*(undefined4 *)(param_2 + 8));
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ceeec,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    __security_check_cookie(local_4 ^ (uint)local_18);
    return;
  }
  FUN_00de3530();
  _sprintf_s(local_10,0xc,"p%03x.evn",*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_00e03ea0(local_10);
  iVar1 = FUN_00de3e90(0,uVar2);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ceeb4,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    __security_check_cookie(local_4 ^ (uint)local_18);
    return;
  }
  _sprintf_s(local_10,0xc,"p%03x.evt",*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_00e03ea0(local_10);
  uVar2 = FUN_00de3e90(1,uVar2);
  FUN_00de3540(iVar1,uVar2);
  _sprintf_s(local_10,0xc,"ev%04x.evn",*(undefined4 *)(param_2 + 4));
  uVar2 = FUN_00e03ea0(local_10);
  iVar1 = FUN_00de3e90(0,uVar2);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016cee74,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    __security_check_cookie(local_4 ^ (uint)local_18);
    return;
  }
  _sprintf_s(local_10,0xc,"ev%04x.evt",*(undefined4 *)(param_2 + 4));
  uVar2 = FUN_00e03ea0(local_10);
  uVar2 = FUN_00de3e90(1,uVar2);
  FUN_00de3540(iVar1,uVar2);
  __security_check_cookie(local_4 ^ (uint)local_18);
  return;
}

// 00E6AEF0  Event::ReadUnitRoom::vf34  size=467  [class]
void Event::ReadUnitRoom::vf34(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [8];
  char local_10 [12];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_18;
  if (*(int *)(param_2 + 8) == -1) {
    FUN_00dd5650(&DAT_016cefa4,0xffffffff,*(undefined4 *)(param_2 + 4));
    __security_check_cookie(local_4 ^ (uint)local_18);
    return;
  }
  iVar1 = FUN_00932740(*(int *)(param_2 + 8));
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016cef80,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    __security_check_cookie(local_4 ^ (uint)local_18);
    return;
  }
  FUN_00de3530();
  _sprintf_s(local_10,0xc,"r%03x.evn",*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_00e03ea0(local_10);
  iVar1 = FUN_00de3e90(0,uVar2);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016cef48,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    __security_check_cookie(local_4 ^ (uint)local_18);
    return;
  }
  _sprintf_s(local_10,0xc,"r%03x.evt",*(undefined4 *)(param_2 + 8));
  uVar2 = FUN_00e03ea0(local_10);
  uVar2 = FUN_00de3e90(1,uVar2);
  FUN_00de3540(iVar1,uVar2);
  _sprintf_s(local_10,0xc,"ev%04x.evn",*(undefined4 *)(param_2 + 4));
  uVar2 = FUN_00e03ea0(local_10);
  iVar1 = FUN_00de3e90(0,uVar2);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016cef14,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4));
    __security_check_cookie(local_4 ^ (uint)local_18);
    return;
  }
  _sprintf_s(local_10,0xc,"ev%04x.evt",*(undefined4 *)(param_2 + 4));
  uVar2 = FUN_00e03ea0(local_10);
  uVar2 = FUN_00de3e90(1,uVar2);
  FUN_00de3540(iVar1,uVar2);
  __security_check_cookie(local_4 ^ (uint)local_18);
  return;
}

// 00E6B4F0  FUN_00e6b4f0  size=121  [between]
undefined4 FUN_00e6b4f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  switch(param_2) {
  case 0:
    *param_1 = DAT_01be91ac;
    param_1[1] = DAT_01be91b0;
    return 1;
  case 1:
    puVar2 = (undefined4 *)FUN_00a4c830(param_3);
    break;
  case 2:
    uVar1 = FUN_009fe6b0(param_1,param_3);
    return uVar1;
  default:
    goto switchD_00e6b4f9_caseD_3;
  case 4:
    puVar2 = (undefined4 *)GameProxy::getPhaseData(param_3);
  }
  if (puVar2 != (undefined4 *)0x0) {
    *param_1 = *puVar2;
    param_1[1] = puVar2[1];
    return 1;
  }
switchD_00e6b4f9_caseD_3:
  return 0;
}

// 00E6B580  FUN_00e6b580  size=130  [between]
void FUN_00e6b580(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [8];
  char local_28 [36];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_30;
  FUN_00de3530();
  iVar1 = FUN_00e6b4f0(local_30,param_1,param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_30);
    return;
  }
  _sprintf_s(local_28,0x24,"%s.mot",param_3);
  uVar2 = FUN_00e03ea0(local_28);
  FUN_00de3e90(0,uVar2);
  __security_check_cookie(local_4 ^ (uint)local_30);
  return;
}

// 00E6B610  FUN_00e6b610  size=130  [between]
void FUN_00e6b610(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_3c [8];
  char local_34 [48];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_3c;
  FUN_00de3530();
  iVar1 = FUN_00e6b4f0(local_3c,param_1,param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_3c);
    return;
  }
  _sprintf_s(local_34,0x30,"%s_seq.bxm",param_3);
  uVar2 = FUN_00e03ea0(local_34);
  FUN_00de3e90(0,uVar2);
  __security_check_cookie(local_4 ^ (uint)local_3c);
  return;
}

// 00E6B6A0  FUN_00e6b6a0  size=107  [between]
float10 FUN_00e6b6a0(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fded30(param_1 * 1.5707964 + 3.1415927);
  if (param_2 < 1.0) {
    return (float10)(param_2 * ((float)fVar1 + 1.0) + param_1 * (1.0 - param_2));
  }
  fVar1 = (float10)FUN_00fdc1f0();
  return (float10)(float)fVar1;
}

// 00E6B710  FUN_00e6b710  size=107  [between]
float10 FUN_00e6b710(float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00fdee60(param_1 * 1.5707964);
  if (param_2 < 1.0) {
    return (float10)((1.0 - param_2) * param_1 + (float)fVar1 * param_2);
  }
  fVar1 = (float10)FUN_00fdc1f0();
  return (float10)(float)fVar1;
}

// 00E6B780  FUN_00e6b780  size=139  [between]
float10 FUN_00e6b780(float param_1,undefined4 param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)0.5;
  fVar2 = (float10)param_1;
  if (fVar2 < fVar1) {
    fVar1 = (float10)FUN_00e6b6a0((float)(fVar2 + fVar2),param_2);
    return (float10)(float)(fVar1 * (float10)0.5);
  }
  if (fVar1 < fVar2) {
    fVar1 = (float10)FUN_00e6b710((float)((fVar2 - (float10)0.5) + (fVar2 - (float10)0.5)),param_2);
    return (float10)(float)((float10)0.5 + fVar1 * (float10)0.5);
  }
  return fVar1;
}

// 00E6B810  FUN_00e6b810  size=181  [between]
float10 FUN_00e6b810(float param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_6 * param_6;
  fVar1 = fVar2 * param_6;
  return (float10)((param_4 - param_2) * param_5 * (fVar1 - fVar2) +
                  ((fVar1 * 2.0 - fVar2 * 3.0) + 1.0) * param_2 +
                  (fVar2 * 3.0 - fVar1 * 2.0) * param_3 +
                  (param_3 - param_1) * param_5 * ((fVar1 - fVar2 * 2.0) + param_6));
}

// 00E6B8D0  FUN_00e6b8d0  size=46  [between]
void FUN_00e6b8d0(void)

{
  undefined4 *puVar1;
  
  DAT_01dd9ee0 = 1;
  puVar1 = &DAT_01dd9f00;
  do {
    FUN_00eaa010();
    *puVar1 = 3;
    puVar1 = puVar1 + 0x30;
  } while ((int)puVar1 < 0x1dda500);
  return;
}

// 00E6B900  FUN_00e6b900  size=15  [between]
char FUN_00e6b900(void)

{
  return (-(DAT_01dd9ed4 != 0) & 2U) + 1;
}

// 00E6B910  FUN_00e6b910  size=6  [between]
undefined4 FUN_00e6b910(void)

{
  return DAT_01dd9ee4;
}

// 00E6BBD0  FUN_00e6bbd0  size=121  [between]
void FUN_00e6bbd0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char local_20 [28];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_20;
  if ((DAT_01dd9ee8 != 0) && (*(int *)(DAT_01dd9ee8 + 0x24) != 0)) {
    _sprintf_s(local_20,0x1c,"camera_%02d_%03d.mot",param_1,param_2);
    iVar1 = FUN_00de45a0(local_20);
    if (iVar1 != 0) {
      __security_check_cookie(local_4 ^ (uint)local_20);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_20);
  return;
}

// 00E6BF20  FUN_00e6bf20  size=260  [between]
void FUN_00e6bf20(char *param_1,size_t param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  local_14[0] = 0;
  FUN_0099a460(local_14,&DAT_0165bfbc,param_4[1]);
  iVar1 = *param_4;
  if (iVar1 == 0) {
    _sprintf_s(param_1,param_2,"%s/event/ev%s/ev%s%s",param_3,local_14,local_14,param_5);
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      *param_1 = '\0';
      __security_check_cookie(local_4 ^ (uint)local_14);
      return;
    }
    _sprintf_s(param_1,param_2,"%s/ph%1x/p%03x/event/ev%s/ev%s%s",param_3,param_4[2] >> 8,param_4[2]
               ,local_14,local_14,param_5);
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
  _sprintf_s(param_1,param_2,"%s/st%1x/r%03x/event/ev%s/ev%s%s",param_3,param_4[2] >> 8,param_4[2],
             local_14,local_14,param_5);
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E6C030  FUN_00e6c030  size=49  [between]
void FUN_00e6c030(void)

{
  int *piVar1;
  
  piVar1 = &DAT_01dd9f00;
  do {
    if (*piVar1 != 3) {
      FUN_00eaa840();
      *piVar1 = 3;
    }
    FUN_00eaa950();
    piVar1 = piVar1 + 0x30;
  } while ((int)piVar1 < 0x1dda500);
  return;
}

// 00E6C070  FUN_00e6c070  size=57  [between]
int * FUN_00e6c070(int *param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_01dd9f00;
  while (((*piVar1 != *param_1 || (piVar1[1] != param_1[1])) || (piVar1[2] != param_1[2]))) {
    piVar1 = piVar1 + 0x30;
    if (0x1dda4ff < (int)piVar1) {
      return (int *)0x0;
    }
  }
  return piVar1 + 4;
}

// 00E6C1C0  FUN_00e6c1c0  size=299  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e6c1c0(void)

{
  DAT_01dda514 = 0;
  DAT_01dda518 = 0;
  DAT_01dda500 = 0;
  _DAT_01dda51c = 0;
  _DAT_01dda530 = 0xffffffff;
  _DAT_01dda520 = 0;
  DAT_01dda524 = 0;
  DAT_01dda548 = 0;
  DAT_01dda54c = 0;
  DAT_01dda534 = 0;
  DAT_01dda550 = 0;
  DAT_01dda564 = 0xffffffff;
  DAT_01dda554 = 0;
  DAT_01dda558 = 0;
  DAT_01dda57c = 0;
  _DAT_01dda580 = 0;
  DAT_01dda568 = 0;
  _DAT_01dda584 = 0;
  _DAT_01dda598 = 0xffffffff;
  _DAT_01dda588 = 0;
  _DAT_01dda58c = 0;
  DAT_01dda5b0 = 0;
  _DAT_01dda5b4 = 0;
  DAT_01dda59c = 0;
  _DAT_01dda5b8 = 0;
  _DAT_01dda5cc = 0xffffffff;
  _DAT_01dda5bc = 0;
  _DAT_01dda5c0 = 0;
  DAT_01dda5e4 = 0;
  _DAT_01dda5e8 = 0;
  DAT_01dda5d0 = 0;
  _DAT_01dda5ec = 0;
  _DAT_01dda600 = 0xffffffff;
  _DAT_01dda5f0 = 0;
  _DAT_01dda5f4 = 0;
  DAT_01dda618 = 0;
  _DAT_01dda61c = 0;
  DAT_01dda604 = 0;
  _DAT_01dda620 = 0;
  _DAT_01dda634 = 0xffffffff;
  _DAT_01dda624 = 0;
  _DAT_01dda628 = 0;
  DAT_01dda64c = 0;
  _DAT_01dda650 = 0;
  DAT_01dda638 = 0;
  _DAT_01dda654 = 0;
  _DAT_01dda668 = 0xffffffff;
  _DAT_01dda658 = 0;
  _DAT_01dda65c = 0;
  _DAT_01dda680 = 0;
  _DAT_01dda684 = 0;
  DAT_01dda66c = 0;
  _DAT_01dda688 = 0;
  _DAT_01dda69c = 0xffffffff;
  _DAT_01dda68c = 0;
  _DAT_01dda690 = 0;
  DAT_01dd9ee8 = 0;
  return;
}

// 00E6C310  FUN_00e6c310  size=99  [between]
int FUN_00e6c310(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = &DAT_01dda548;
  iVar3 = 2;
  do {
    if ((((piVar2[-0x12] & 1U) != 0) && (-1 < piVar2[-0x12])) && (piVar2[-0xd] == 3)) {
      iVar1 = iVar1 + 1;
    }
    if ((((piVar2[-5] & 1U) != 0) && (-1 < piVar2[-5])) && (*piVar2 == 3)) {
      iVar1 = iVar1 + 1;
    }
    if ((((piVar2[8] & 1U) != 0) && (-1 < piVar2[8])) && (piVar2[0xd] == 3)) {
      iVar1 = iVar1 + 1;
    }
    if ((((piVar2[0x15] & 1U) != 0) && (-1 < piVar2[0x15])) && (piVar2[0x1a] == 3)) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 0x34;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

// 00E6C380  FUN_00e6c380  size=62  [between]
uint FUN_00e6c380(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = &DAT_01dda500;
  uVar2 = 0;
  do {
    if ((((*puVar1 & 1) != 0) && (-1 < (int)*puVar1)) && (puVar1[5] == 3)) {
      if (iVar3 == param_1) {
        return puVar1[9];
      }
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 0x34;
    puVar1 = puVar1 + 0xd;
  } while (uVar2 < 0x1a0);
  return 0;
}

// 00E6C3C0  FUN_00e6c3c0  size=98  [between]
void FUN_00e6c3c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (((((*(uint *)((int)&DAT_01dda500 + uVar3) & 1) != 0) &&
         (-1 < (int)*(uint *)((int)&DAT_01dda500 + uVar3))) &&
        (*(int *)((int)&DAT_01dda524 + uVar3) != 0)) &&
       (iVar1 = *(int *)(*(int *)((int)&DAT_01dda524 + uVar3) + 0x24), iVar1 != 0)) {
      if (param_1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x3dcccccd;
      }
      FUN_00dfa6d0(iVar1,param_1,uVar2);
    }
    uVar3 = uVar3 + 0x34;
  } while (uVar3 < 0x1a0);
  return;
}

// 00E6C430  Event::Manager::getEmptyWork  size=76  [class]
byte * Event::Manager::getEmptyWork(void)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)&DAT_01dda500;
  uVar2 = 0;
  do {
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0x14] = 0;
      pbVar1[0x15] = 0;
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
      pbVar1[0x18] = 0;
      pbVar1[0x19] = 0;
      pbVar1[0x1a] = 0;
      pbVar1[0x1b] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[0x1c] = 0;
      pbVar1[0x1d] = 0;
      pbVar1[0x1e] = 0;
      pbVar1[0x1f] = 0;
      pbVar1[0x30] = 0xff;
      pbVar1[0x31] = 0xff;
      pbVar1[0x32] = 0xff;
      pbVar1[0x33] = 0xff;
      pbVar1[0x20] = 0;
      pbVar1[0x21] = 0;
      pbVar1[0x22] = 0;
      pbVar1[0x23] = 0;
      pbVar1[0x24] = 0;
      pbVar1[0x25] = 0;
      pbVar1[0x26] = 0;
      pbVar1[0x27] = 0;
      return pbVar1;
    }
    uVar2 = uVar2 + 0x34;
    pbVar1 = pbVar1 + 0x34;
  } while (uVar2 < 0x1a0);
  FUN_00dd5650(&DAT_016cf1ac);
  return (byte *)0x0;
}

// 00E6C510  FUN_00e6c510  size=60  [between]
void __fastcall FUN_00e6c510(uint *param_1)

{
  *param_1 = *param_1 | 2;
  if (param_1[5] == 0) {
    param_1[5] = 1;
    param_1[6] = 0;
    FUN_00e67bc0();
  }
  else if (param_1[5] == 5) {
    FUN_00dd5650(&DAT_016cf1d8);
    *param_1 = *param_1 | 4;
    return;
  }
  *param_1 = *param_1 | 4;
  return;
}

// 00E6C590  FUN_00e6c590  size=27  [between]
void __fastcall FUN_00e6c590(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x20))(1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00E6C5D0  FUN_00e6c5d0  size=377  [between]
undefined4 __thiscall FUN_00e6c5d0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int local_38 [12];
  int local_8;
  int local_4;
  
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined4 *)(param_1 + 0x10) = param_2[1];
  *(int *)(param_1 + 0x448) = param_3;
  local_38[0] = param_1 + 0x14;
  local_38[1] = param_1 + 0x38;
  local_38[6] = param_1 + 0x1ec;
  local_38[7] = param_1 + 0x240;
  local_38[8] = param_1 + 0x298;
  local_38[9] = param_1 + 0x2dc;
  local_38[10] = param_1 + 800;
  local_38[0xb] = param_1 + 0x370;
  local_38[2] = param_1 + 0x6c;
  local_38[3] = param_1 + 0xc0;
  local_38[4] = param_1 + 0x164;
  local_38[5] = param_1 + 0x1a8;
  local_8 = param_1 + 0x3c0;
  local_4 = param_1 + 0x404;
  param_3 = 0;
  do {
    iVar1 = (**(code **)(*(int *)local_38[param_3] + 8))(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    param_3 = param_3 + 1;
  } while (param_3 < 0xe);
  local_38[4] = param_1 + 0x1ec;
  local_38[5] = param_1 + 0x240;
  local_38[6] = param_1 + 0x298;
  local_38[7] = param_1 + 0x2dc;
  local_38[8] = param_1 + 800;
  local_38[0] = param_1 + 0x6c;
  local_38[1] = param_1 + 0xc0;
  local_38[2] = param_1 + 0x164;
  local_38[3] = param_1 + 0x1a8;
  local_38[9] = param_1 + 0x370;
  local_38[10] = param_1 + 0x3c0;
  local_38[0xb] = param_1 + 0x404;
  iVar1 = 0;
  do {
    (**(code **)(*(int *)local_38[iVar1] + 0x28))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  return 1;
}

// 00E6C750  FUN_00e6c750  size=391  [between]
void __fastcall FUN_00e6c750(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *_Str;
  char *pcVar5;
  int local_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_28;
  iVar2 = FUN_00de3560();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x364);
    iVar1 = *(int *)(param_1 + 0x368);
    if ((iVar2 != 0) && (iVar1 != 0)) {
      _sprintf_s(local_24,0x20,"ev%04x_se",*(undefined4 *)(param_1 + 4));
      thunk_FUN_00df48b0(iVar2,iVar1,local_24);
    }
    iVar2 = *(int *)(param_1 + 0x3b4);
    iVar1 = *(int *)(param_1 + 0x3b8);
    if ((iVar2 != 0) && (iVar1 != 0)) {
      _sprintf_s(local_24,0x20,"ev%04x_bgm",*(undefined4 *)(param_1 + 4));
      thunk_FUN_00df48b0(iVar2,iVar1,local_24);
    }
  }
  else {
    local_28 = 0;
    iVar2 = FUN_00de36a0(0,&DAT_016ce798,0);
    if (iVar2 != -1) {
      do {
        uVar3 = FUN_00de3cf0(iVar2);
        uVar4 = FUN_00de3ee0(iVar2);
        _Str = (char *)FUN_00de38d0(iVar2);
        pcVar5 = _strrchr(_Str,0x2e);
        _strncpy_s(local_24,0x20,_Str,(int)pcVar5 - (int)_Str);
        iVar2 = FUN_00fdbbd0(local_24,&DAT_016ce790);
        if ((iVar2 == 0) && (iVar2 = FUN_00fdbbd0(local_24,&DAT_016ce794), iVar2 == 0)) {
          thunk_FUN_00df48b0(uVar3,uVar4,local_24);
        }
        else {
          thunk_FUN_00df48b0(uVar3,uVar4,local_24);
        }
        local_28 = local_28 + 1;
        iVar2 = FUN_00de36a0(0,&DAT_016ce798,local_28);
      } while (iVar2 != -1);
      __security_check_cookie(local_4 ^ (uint)&local_28);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}

// 00E6C8E0  FUN_00e6c8e0  size=285  [between]
void __fastcall FUN_00e6c8e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *_Str;
  char *pcVar4;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  iVar1 = FUN_00de3560();
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x364) != 0) && (*(int *)(param_1 + 0x368) != 0)) {
      thunk_FUN_00df4dd0(*(int *)(param_1 + 0x364));
    }
    if ((*(int *)(param_1 + 0x3b4) != 0) && (*(int *)(param_1 + 0x3b8) != 0)) {
      thunk_FUN_00df4dd0(*(int *)(param_1 + 0x3b4));
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
  }
  else {
    iVar1 = 0;
    iVar2 = FUN_00de36a0(0,&DAT_016ce798,0);
    while (iVar2 != -1) {
      uVar3 = FUN_00de3cf0(iVar2);
      _Str = (char *)FUN_00de38d0(iVar2);
      pcVar4 = _strrchr(_Str,0x2e);
      _strncpy_s(local_24,0x20,_Str,(int)pcVar4 - (int)_Str);
      iVar2 = FUN_00fdbbd0(local_24,&DAT_016ce790);
      if ((iVar2 == 0) && (iVar2 = FUN_00fdbbd0(local_24,&DAT_016ce794), iVar2 == 0)) {
        thunk_FUN_00df4dd0(uVar3);
      }
      else {
        thunk_FUN_00df4dd0(uVar3);
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00de36a0(0,&DAT_016ce798,iVar1);
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E6CA00  Event::DataUnit::debugCreateData  size=223  [class]
undefined4 __thiscall Event::DataUnit::debugCreateData(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *local_38 [14];
  
  if (*param_1 == 0) {
    FUN_00dd5650(&DAT_016cf220);
  }
  else if (param_2 == 0) {
    local_38[0] = param_1 + 5;
    local_38[1] = param_1 + 0xe;
    local_38[2] = param_1 + 0x1b;
    local_38[3] = param_1 + 0x30;
    local_38[4] = param_1 + 0x59;
    local_38[5] = param_1 + 0x6a;
    local_38[6] = param_1 + 0x7b;
    local_38[7] = param_1 + 0x90;
    local_38[8] = param_1 + 0xa6;
    local_38[9] = param_1 + 0xb7;
    local_38[10] = param_1 + 200;
    local_38[0xb] = param_1 + 0xdc;
    local_38[0xc] = param_1 + 0xf0;
    local_38[0xd] = param_1 + 0x101;
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(*local_38[iVar2] + 0x10))(0,param_3);
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xe);
    return 1;
  }
  return 0;
}

// 00E6CAE0  FUN_00e6cae0  size=389  [between]
undefined4 __thiscall FUN_00e6cae0(int param_1,int param_2)

{
  int iVar1;
  int local_38 [12];
  int local_8;
  int local_4;
  
  local_38[0] = param_1 + 0x14;
  local_38[5] = param_1 + 0x1a8;
  local_38[6] = param_1 + 0x1ec;
  local_38[7] = param_1 + 0x240;
  local_38[8] = param_1 + 0x298;
  local_38[9] = param_1 + 0x2dc;
  local_38[10] = param_1 + 800;
  local_38[0xb] = param_1 + 0x370;
  local_8 = param_1 + 0x3c0;
  local_38[1] = param_1 + 0x38;
  local_38[2] = param_1 + 0x6c;
  local_38[3] = param_1 + 0xc0;
  local_38[4] = param_1 + 0x164;
  local_4 = param_1 + 0x404;
  if (*(int *)(param_2 + 4) < 0xe) {
    iVar1 = (**(code **)(*(int *)local_38[*(int *)(param_2 + 4)] + 0x14))(param_2);
    if (iVar1 == 1) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(param_2 + 4) = 0xffffffff;
    }
  }
  if (*(int *)(param_2 + 4) < 0) {
    return 2;
  }
  if (*(int *)(param_2 + 4) < 0xe) {
    return 0;
  }
  local_38[3] = param_1 + 0x1a8;
  local_38[4] = param_1 + 0x1ec;
  local_38[5] = param_1 + 0x240;
  local_38[6] = param_1 + 0x298;
  local_38[7] = param_1 + 0x2dc;
  local_38[8] = param_1 + 800;
  local_38[0] = param_1 + 0x6c;
  local_38[1] = param_1 + 0xc0;
  local_38[2] = param_1 + 0x164;
  local_38[9] = param_1 + 0x370;
  local_38[10] = param_1 + 0x3c0;
  local_38[0xb] = param_1 + 0x404;
  iVar1 = 0;
  do {
    (**(code **)(*(int *)local_38[iVar1] + 0x28))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  return 1;
}

// 00E6CC70  FUN_00e6cc70  size=259  [between]
undefined4 __thiscall FUN_00e6cc70(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  iVar1 = 2 - (uint)((int)*(char *)(param_1 + 0x40) / (int)*(char *)(param_1 + 0x41) != 2);
  iVar2 = (**(code **)(*(int *)(param_1 + 0x38) + 0x18))(param_2,param_3,iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  while ((*(int **)(&stack0xffffffbc + iVar2 * 4) == (int *)(param_1 + 0x38) ||
         (iVar3 = (**(code **)(**(int **)(&stack0xffffffbc + iVar2 * 4) + 0x18))
                            (uStack_8,param_3,iVar1), iVar3 != 0))) {
    iVar2 = iVar2 + 1;
    if (0xd < iVar2) {
      return 1;
    }
  }
  return 0;
}

// 00E6CE20  FUN_00e6ce20  size=47  [between]
int __thiscall FUN_00e6ce20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x50);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x19;
    } while (iVar1 < *(int *)(param_1 + 0x58));
  }
  return -1;
}

// 00E6CEA0  FUN_00e6cea0  size=142  [between]
void __thiscall FUN_00e6cea0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_30 [16];
  char local_20 [28];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_30;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x58))) {
    uVar1 = *(undefined4 *)(param_2 * 100 + 4 + *(int *)(param_1 + 0x50));
    FUN_009f8ea0(local_30,0x10,*(undefined4 *)(param_2 * 100 + *(int *)(param_1 + 0x50)),1);
    _sprintf_s(local_20,0x1c,"%s_%02d_%03d.mot",local_30,uVar1,param_3);
    FUN_00de45a0(local_20);
    __security_check_cookie(local_4 ^ (uint)local_30);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_30);
  return;
}

// 00E6D040  Event::ActorDataHolder::vf24  size=46  [class]
bool Event::ActorDataHolder::vf24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00e821a0(param_3);
  iVar1 = SeqDataHolder::vf24(param_1,param_2,param_3);
  return iVar1 != 0;
}

// 00E6D670  Event::CameraDataHolder::vf10  size=26  [class]
bool __thiscall Event::CameraDataHolder::vf10(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return param_2 == 0;
}

// 00E6D690  FUN_00e6d690  size=206  [between]
void __thiscall FUN_00e6d690(undefined4 *param_1,char param_2)

{
  param_1[9] = 0x3f800000;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[0xb] = 0x3f000000;
  *(char *)(param_1 + 7) = param_2;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  if (param_2 == '\0') {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(undefined2 *)(param_1 + 0x18) = 0x300;
    param_1[0x16] = 0;
    param_1[0x19] = 0xffffffff;
    param_1[0x1a] = 0;
    param_1[0x17] = 0x3f5f66f3;
    param_1[0x1b] = 0xffffffff;
    param_1[0x1c] = 0xffffffff;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0xffffffff;
  }
  else {
    if (param_2 == '\x01') {
      param_1[0x14] = 0;
      param_1[0x12] = 0xffffffff;
      param_1[0x15] = 0xffffffff;
      param_1[0xf] = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      param_1[0x11] = 0;
      param_1[0x13] = 0;
      param_1[0x16] = 0;
      return;
    }
    if (param_2 == '\x04') {
      param_1[0xf] = 0;
      return;
    }
  }
  return;
}

// 00E6D7C0  FUN_00e6d7c0  size=541  [between]
undefined4 __thiscall FUN_00e6d7c0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016a3dd0);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Target");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c39ac);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c39a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosParentType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"TargetParentType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x25);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosParentId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosParentSubNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x2c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosParentPartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"TargetParentId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"TargetParentSubNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"TargetParentPartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x3c);
  }
  return 1;
}

// 00E6D9E0  FUN_00e6d9e0  size=341  [between]
undefined4 __thiscall FUN_00e6d9e0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotResourceKind");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotResourceNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotObjId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"StartFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParentId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParentSubNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x1c);
  }
  return 1;
}

// 00E6DB40  FUN_00e6db40  size=59  [between]
undefined4 __thiscall FUN_00e6db40(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DataNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1);
  }
  return 1;
}

// 00E6DBD0  FUN_00e6dbd0  size=221  [between]
undefined4 __thiscall FUN_00e6dbd0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ProgressAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SkipSettingAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PlayableAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomFlagAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 3);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 4);
  }
  return 1;
}

// 00E6DCB0  FUN_00e6dcb0  size=171  [between]
bool __thiscall FUN_00e6dcb0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_0164fcc8);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Length");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 2);
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016511c4);
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xa4))(iVar1,param_1 + 4,0x20);
        iVar1 = FUN_00c9dcb0(param_3,&DAT_016cf454,param_1 + 0x24,4);
        return iVar1 != 0;
      }
    }
  }
  return false;
}

// 00E6DD60  FUN_00e6dd60  size=59  [between]
undefined4 __thiscall FUN_00e6dd60(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CutNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1);
  }
  return 1;
}

// 00E6DDA0  FUN_00e6dda0  size=238  [between]
bool __thiscall FUN_00e6dda0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EventSlowAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EventSlowType");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SetSlowAct");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 2);
        iVar1 = FUN_00c9f5c0(param_3,"SetSlowType",param_1 + 3);
        if (iVar1 != 0) {
          iVar1 = FUN_00928960(param_3,"SetSlowFadeLength",param_1 + 4);
          if (iVar1 != 0) {
            iVar1 = FUN_009d3b90(param_3,"SetSlowRateBegin",param_1 + 8);
            if (iVar1 != 0) {
              iVar1 = FUN_009d3b90(param_3,"SetSlowRateEnd",param_1 + 0xc);
              return iVar1 != 0;
            }
          }
        }
      }
    }
  }
  return false;
}

// 00E6DE90  FUN_00e6de90  size=434  [between]
undefined4 __thiscall FUN_00e6de90(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamIntArg0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamIntArg1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamIntArg2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamIntArg3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamIntArgs");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x100))(iVar1,param_1 + 4,8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamStrArg0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar1,param_1 + 0x24,0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamStrArg1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar1,param_1 + 0x44,0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamStrArg2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar1,param_1 + 100,0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CustomParamStrArg3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xa4))(iVar1,param_1 + 0x84,0x20);
  }
  return 1;
}

// 00E6E050  FUN_00e6e050  size=49  [between]
void __fastcall FUN_00e6e050(undefined1 *param_1)

{
  int iVar1;
  
  if ((DAT_01dd9ee8 == 0) || (*(int *)(DAT_01dd9ee8 + 0x24) == 0)) {
    iVar1 = 3;
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_01dd9ee8 + 0x24) + 0x1a70);
  }
  if (iVar1 == 3) {
    iVar1 = 0;
  }
  param_1[1] = (char)iVar1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}

// 00E6E090  FUN_00e6e090  size=141  [between]
undefined4 __thiscall FUN_00e6e090(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ExecAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EventType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EventNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 2);
  }
  return 1;
}

// 00E6E270  FUN_00e6e270  size=141  [between]
undefined4 __thiscall FUN_00e6e270(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PlayRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DataRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 2);
  }
  return 1;
}

// 00E6E300  FUN_00e6e300  size=66  [between]
undefined4 __thiscall FUN_00e6e300(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FrameNum");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1);
    return 1;
  }
  return 0;
}

// 00E6E4A0  FUN_00e6e4a0  size=101  [between]
undefined4 __thiscall FUN_00e6e4a0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RateEaseAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RateEaseFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 2);
  }
  return 1;
}

// 00E6E510  FUN_00e6e510  size=261  [between]
undefined4 __thiscall FUN_00e6e510(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SetAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InterTarget");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FocusPosition");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FocusObjId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FocusSubNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FocusPartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x18);
  }
  return 1;
}

// 00E6E620  FUN_00e6e620  size=361  [between]
undefined4 __thiscall FUN_00e6e620(int param_1,int *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iStack_2c;
  char *pcStack_28;
  int iStack_24;
  char *pcStack_20;
  int iStack_1c;
  char *pcStack_18;
  
  pcStack_18 = "SetAct";
  iStack_1c = param_3;
  pcStack_20 = (char *)0xe6e688;
  iStack_24 = (**(code **)(*param_2 + 0x9c))();
  if (iStack_24 != -1) {
    pcStack_28 = (char *)0xe6e69b;
    pcStack_20 = (char *)param_1;
    (**(code **)(*param_2 + 0xe0))();
  }
  pcStack_20 = "FadeTime";
  iStack_24 = param_3;
  pcStack_28 = (char *)0xe6e6ad;
  iStack_2c = (**(code **)(*param_2 + 0x9c))();
  if (iStack_2c != -1) {
    pcStack_28 = (char *)(param_1 + 2);
    (**(code **)(*param_2 + 0xec))();
  }
  pcStack_28 = "FadeFlag";
  iStack_2c = param_3;
  iVar1 = (**(code **)(*param_2 + 0x9c))();
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 1);
  }
  pcVar2 = "BeginColor";
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,&pcStack_28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EndColor");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,&iStack_2c);
  }
  *(char *)(param_1 + 4) = (char)((uint)pcVar2 >> 0x18);
  *(char *)(param_1 + 5) = (char)((uint)pcVar2 >> 0x10);
  *(char *)(param_1 + 7) = (char)pcVar2;
  *(char *)(param_1 + 6) = (char)((uint)pcVar2 >> 8);
  *(char *)(param_1 + 8) = (char)((uint)iStack_2c >> 0x18);
  *(char *)(param_1 + 0xb) = (char)iStack_2c;
  *(char *)(param_1 + 9) = (char)((uint)iStack_2c >> 0x10);
  *(char *)(param_1 + 10) = (char)((uint)iStack_2c >> 8);
  return 1;
}

// 00E6E850  FUN_00e6e850  size=374  [between]
undefined4 __thiscall FUN_00e6e850(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[5] = 0xffffffff;
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamIntArg0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamIntArg1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamIntArg2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 3);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamIntArg3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamIntArgs");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x100))(iVar1,param_1 + 1,4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamActorObjId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 5);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UniqueParamActorSubNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 6);
  }
  return 1;
}

// 00E6E9D0  FUN_00e6e9d0  size=99  [between]
undefined4 __thiscall FUN_00e6e9d0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PatternAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PatternNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
  }
  return 1;
}

// 00E6EA40  FUN_00e6ea40  size=59  [between]
undefined4 __thiscall FUN_00e6ea40(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Culling");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  return 1;
}

// 00E6EA80  FUN_00e6ea80  size=175  [between]
void __fastcall FUN_00e6ea80(undefined4 *param_1)

{
  param_1[0x16] = 0x3f800000;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[0x17] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0;
  param_1[6] = 4;
  param_1[0x14] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x15] = 0x3f800000;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  *param_1 = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  return;
}

// 00E6EC80  FUN_00e6ec80  size=381  [between]
undefined4 __thiscall FUN_00e6ec80(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchSubNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchCutNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchFrameDeicmal");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0xe);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchSkipAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchPassAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 0x15);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"LaunchLength");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 0x16);
  }
  return 1;
}

// 00E6EE00  Event::StateDataHolder::vf0C  size=30  [class]
void __fastcall Event::StateDataHolder::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 00E6EE20  Event::StateDataHolder::vf10  size=43  [class]
bool __thiscall Event::StateDataHolder::vf10(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_2 == 0;
}

// 00E6EE50  Event::StateDataHolder::vf14  size=8  [class]
undefined4 Event::StateDataHolder::vf14(void)

{
  return 2;
}

// 00E6EE60  FUN_00e6ee60  size=343  [between]
undefined4 __thiscall FUN_00e6ee60(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ProgressFrameRateType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionFrameRateType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"GraphicMode");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DrawFrameRateType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 3);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"VariableFrameType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EndCameraInterFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 6);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EndCameraResetPattern");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SettingParamIntArgs");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x100))(iVar1,param_1 + 0xc,4);
  }
  return 1;
}

// 00E6EFC0  FUN_00e6efc0  size=383  [between]
undefined4 __thiscall FUN_00e6efc0(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00e6ec80(param_2,param_3);
  if ((iVar2 == 0) || (iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_0164fcc8), iVar2 == -1))
  {
    return 0;
  }
  (**(code **)(*param_2 + 0xe0))(iVar2,(char *)(param_1 + 0x18));
  iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"LoopTimes");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar2,param_1 + 0x19);
    cVar1 = *(char *)(param_1 + 0x18);
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') &&
         (iVar2 = FUN_00928960(param_3,"PatternNo",param_1 + 0x1a), iVar2 == 0)) {
        return 0;
      }
      return 1;
    }
    iVar2 = FUN_00928960(param_3,"AttackTime",param_1 + 0x1c);
    if ((((((iVar2 != 0) &&
           (iVar2 = FUN_009d3b90(param_3,"AttackForceL",param_1 + 0x24), iVar2 != 0)) &&
          (iVar2 = FUN_009d3b90(param_3,"AttackForceR",param_1 + 0x28), iVar2 != 0)) &&
         ((iVar2 = FUN_00928960(param_3,"HoldTime",param_1 + 0x1e), iVar2 != 0 &&
          (iVar2 = FUN_009d3b90(param_3,"HoldForceL",param_1 + 0x2c), iVar2 != 0)))) &&
        ((iVar2 = FUN_009d3b90(param_3,"HoldForceR",param_1 + 0x30), iVar2 != 0 &&
         ((iVar2 = FUN_00928960(param_3,"ReleaseTime",param_1 + 0x20), iVar2 != 0 &&
          (iVar2 = FUN_009d3b90(param_3,"ReleaseForceL",param_1 + 0x34), iVar2 != 0)))))) &&
       (iVar2 = FUN_009d3b90(param_3,"ReleaseForceR",param_1 + 0x38), iVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}

// 00E6F280  FUN_00e6f280  size=285  [between]
undefined4 __thiscall FUN_00e6f280(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016cedcc);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x18);
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamArgs0");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x1c);
      }
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamArgs1");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x20);
      }
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamArgs2");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x24);
      }
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamArgs3");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x28);
      }
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParamArgs");
      if (iVar1 != -1) {
        (**(code **)(*param_2 + 0x100))(iVar1,param_1 + 0x1c,4);
      }
      return 1;
    }
  }
  return 0;
}

// 00E6F450  Event::ActorWork::updateAttach  size=282  [class]
void __fastcall Event::ActorWork::updateAttach(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_20;
  if (((((*(int *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0xc) != 0)) &&
       (*(int *)(param_1 + 0x10) != 0)) &&
      (((*(byte *)(param_1 + 0x2c) & 4) == 0 && (*(int *)(*(int *)(param_1 + 0xc) + 0x20) != 0))))
     && ((local_1c = FUN_00a7c800(), local_1c != 0 && (local_20 = FUN_00a7c800(), local_20 != 0))))
  {
    local_18 = *(int *)(param_1 + 0x14);
    iVar4 = 0;
    if (0 < local_18) {
      do {
        iVar1 = *(int *)(param_1 + 0x10) + iVar4 * 8;
        iVar2 = FUN_00a12210(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 8));
        iVar3 = FUN_00a12210(*(undefined4 *)(iVar1 + 4));
        if ((iVar2 == 0) || (iVar3 == 0)) {
          FUN_009f8ea0(local_14,0x10,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24),0);
          FUN_00dd5650(&DAT_016cf930,local_14,*(undefined4 *)(iVar1 + 4));
        }
        else {
          *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
          FID_conflict__memcpy((void *)(iVar3 + 0x10),(void *)(iVar2 + 0x10),0x40);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_18);
    }
    switchD_0080dbae::default();
  }
  __security_check_cookie(local_4 ^ (uint)&local_20);
  return;
}

// 00E6F570  FUN_00e6f570  size=69  [between]
void __fastcall FUN_00e6f570(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x20) != 0) && (iVar1 = FUN_00a7c800(), iVar1 != 0)) &&
      ((*(uint *)(iVar1 + 0x4b0) & 0xffff0000) == 0x60000)) &&
     (iVar2 = FUN_00a12210(0x400), iVar2 != 0)) {
    FUN_00932320(iVar1,0x400);
  }
  return;
}

// 00E6F5C0  FUN_00e6f5c0  size=61  [between]
void __thiscall FUN_00e6f5c0(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (param_2 == 0) {
      if ((uVar1 & 2) == 0) {
        return;
      }
      uVar1 = uVar1 & 0xfffffffd;
    }
    else {
      if ((uVar1 & 2) != 0) {
        return;
      }
      uVar1 = uVar1 | 2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_009321a0(*(int *)(param_1 + 0x20),param_2);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return;
}

// 00E6F690  FUN_00e6f690  size=138  [between]
int __fastcall FUN_00e6f690(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(iVar1 + 0x58);
  iVar4 = 0;
  local_8 = 0;
  if (iVar5 < 1) {
    return 0;
  }
  local_4 = 0;
  do {
    if (iVar4 < 0) {
      piVar2 = (int *)0x0;
    }
    else if (iVar4 < iVar5) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x50) + local_4);
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (piVar2[3] != 0) {
      local_8 = local_8 + -1;
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar1 + 0x6c)) {
      piVar3 = *(int **)(iVar1 + 100);
      do {
        if ((*piVar3 == *piVar2) && (piVar3[1] == piVar2[2])) {
          local_8 = local_8 + piVar3[3];
          break;
        }
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 4;
      } while (iVar5 < *(int *)(iVar1 + 0x6c));
    }
    iVar5 = *(int *)(iVar1 + 0x58);
    local_4 = local_4 + 100;
    iVar4 = iVar4 + 1;
    if (iVar5 <= iVar4) {
      return local_8;
    }
  } while( true );
}

// 00E6F720  Event::ActorWork::updateAttach_2  size=333  [class]
void __fastcall Event::ActorWork::updateAttach_2(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    if (0 < param_1[5]) {
      piVar5 = (int *)(param_1[3] + 0xc);
      local_20 = param_1[5];
      do {
        if (((((piVar5[5] != 0) && (*piVar5 != 0)) && (piVar5[1] != 0)) &&
            (((*(byte *)(piVar5 + 8) & 4) == 0 && (*(int *)(*piVar5 + 0x20) != 0)))) &&
           ((local_1c = FUN_00a7c800(), local_1c != 0 && (local_24 = FUN_00a7c800(), local_24 != 0))
           )) {
          local_18 = piVar5[2];
          iVar4 = 0;
          if (0 < local_18) {
            do {
              iVar1 = piVar5[1] + iVar4 * 8;
              iVar2 = FUN_00a12210(*(undefined4 *)(piVar5[1] + iVar4 * 8));
              iVar3 = FUN_00a12210(*(undefined4 *)(iVar1 + 4));
              if ((iVar2 == 0) || (iVar3 == 0)) {
                FUN_009f8ea0(local_14,0x10,*(undefined4 *)(piVar5[5] + 0x24),0);
                FUN_00dd5650(&DAT_016cf930,local_14,*(undefined4 *)(iVar1 + 4));
              }
              else {
                *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
                FID_conflict__memcpy((void *)(iVar3 + 0x10),(void *)(iVar2 + 0x10),0x40);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_18);
          }
          switchD_0080dbae::default();
        }
        piVar5 = piVar5 + 0x14;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      local_20 = 0;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

// 00E6F8E0  FUN_00e6f8e0  size=129  [between]
void FUN_00e6f8e0(int param_1)

{
  int iVar1;
  undefined1 local_34 [16];
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_34;
  iVar1 = FUN_009f8ea0(local_34,0x10,*(uint *)(param_1 + 0x48) & 0xffffff,0);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_34);
    return;
  }
  _sprintf_s(local_24,0x20,"%s_%04x",local_34,*(undefined4 *)(param_1 + 0x4c));
  FUN_00e6b580(*(undefined1 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),local_24);
  __security_check_cookie(local_4 ^ (uint)local_34);
  return;
}

// 00E6F970  FUN_00e6f970  size=623  [between]
void FUN_00e6f970(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_40 = param_3[4] - *param_3;
  local_3c = param_3[5] - param_3[1];
  local_38 = param_3[6] - param_3[2];
  local_34 = param_3[7] - param_3[3];
  fVar1 = local_3c * param_4[1] + local_40 * *param_4 + local_38 * param_4[2];
  if ((fVar1 != 0.0) && (((*param_4 != 0.0 || (param_4[1] != 0.0)) || (param_4[2] != 0.0)))) {
    *param_1 = *param_4 * fVar1;
    param_1[1] = param_4[1] * fVar1;
    param_1[2] = param_4[2] * fVar1;
    param_1[3] = param_4[3] * fVar1;
    if (local_38 * local_38 + local_40 * local_40 + local_3c * local_3c <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    else {
      FUN_00ddf460(&local_30,&local_40);
    }
    if (param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1] <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    else {
      FUN_00ddf460(&local_20,param_1);
    }
    if (local_28 * local_18 + local_20 * local_30 + local_1c * local_2c < 0.0) {
      *param_1 = *param_1 * -1.0;
      param_1[1] = param_1[1] * -1.0;
      param_1[2] = param_1[2] * -1.0;
      param_1[3] = param_1[3] * -1.0;
    }
    *param_2 = local_40 - *param_1;
    param_2[1] = local_3c - param_1[1];
    param_2[2] = local_38 - param_1[2];
    param_2[3] = local_34 - param_1[3];
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = local_34;
  return;
}

// 00E6FBE0  FUN_00e6fbe0  size=895  [between]
void FUN_00e6fbe0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  undefined1 auStack_c4 [12];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float *local_64;
  undefined1 local_60 [64];
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_c4;
  local_64 = param_1;
  local_b8 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  fVar4 = (float10)FUN_00fdef70();
  local_94 = (float)fVar4;
  local_80 = *param_2 / local_94;
  local_7c = param_2[1] / local_94;
  local_78 = param_2[2] / local_94;
  local_74 = param_2[3] / local_94;
  local_b8 = param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1];
  fVar4 = (float10)FUN_00fdef70();
  local_90 = (float)fVar4;
  fVar1 = *param_3 / local_90;
  fVar2 = param_3[1] / local_90;
  local_a8 = param_3[2] / local_90;
  local_b8 = local_a8 * local_78 + local_7c * fVar2 + local_80 * fVar1;
  if (0.995 < local_b8) {
    local_b0 = fVar1;
    local_ac = fVar2;
    __security_check_cookie(local_14 ^ (uint)auStack_c4);
    return;
  }
  if (local_b8 < -0.995) {
    local_b0 = 0.0;
    local_ac = 1.0;
    local_a8 = 0.0;
  }
  else {
    local_b0 = local_a8 * local_7c - fVar2 * local_78;
    local_ac = local_78 * fVar1 - local_80 * local_a8;
    local_a8 = fVar2 * local_80 - local_7c * fVar1;
    local_b4 = local_b0 * local_b0 + local_ac * local_ac + local_a8 * local_a8;
    local_8c = local_b0;
    local_88 = local_ac;
    local_84 = local_a8;
    if (local_b4 < 0.0 == (local_b4 == 0.0)) {
      FUN_00ddf460(&local_b0,&local_b0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_b0 = 0.0;
      local_ac = 1.0;
      local_a8 = 0.0;
    }
  }
  if (((*param_4 != 0.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) {
    local_b4 = param_4[2] * local_a8 + param_4[1] * local_ac + *param_4 * local_b0;
    if (0.0 <= local_b4) {
      local_b0 = *param_4;
      local_ac = param_4[1];
      local_a8 = param_4[2];
      local_a4 = param_4[3];
    }
    else {
      local_b0 = *param_4 * -1.0;
      local_ac = param_4[1] * -1.0;
      local_a8 = param_4[2] * -1.0;
      local_a4 = param_4[3] * -1.0;
    }
  }
  local_94 = local_90 * param_5 + (1.0 - param_5) * local_94;
  fVar4 = (float10)FUN_00fdc4e0();
  local_b4 = (float)fVar4 * param_5;
  FUN_00ddcfe0(local_60,&local_b0,local_b4);
  pfVar3 = local_64;
  D3DXVec3TransformNormal(local_64,&local_80,local_60);
  *pfVar3 = fStack_a0 * *pfVar3;
  pfVar3[1] = pfVar3[1] * fStack_a0;
  pfVar3[2] = fStack_a0 * pfVar3[2];
  pfVar3[3] = fStack_a0 * pfVar3[3];
  __security_check_cookie(uStack_20 ^ (uint)&stack0xffffff30);
  return;
}

// 00E6FF60  FUN_00e6ff60  size=28  [between]
undefined4 * __fastcall FUN_00e6ff60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00e240c0();
  return param_1;
}

// 00E6FF90  FUN_00e6ff90  size=137  [between]
undefined4 __thiscall
FUN_00e6ff90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[3] = 0;
  FUN_00e6d690(2);
  *extraout_ECX = 0x7f0000;
  puVar1 = param_1 + 0x40;
  FUN_00e69960(puVar1);
  FUN_00e84120(puVar1);
  FUN_00e84120(puVar1);
  param_1[0x65] = 0;
  param_1[0x61] = 0;
  param_1[0x66] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[100] = 0;
  return 1;
}

// 00E70070  Event::CameraWork::getCameraParam  size=312  [class]
void __thiscall
Event::CameraWork::getCameraParam
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  int local_50 [12];
  char local_20 [28];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_50;
  if (*(int *)(*param_1 + 0x1a70) != 0) {
    FUN_00e84120(param_1 + 0x40);
    FUN_00dd5650(&DAT_016cfa44);
    __security_check_cookie(local_4 ^ (uint)local_50);
    return;
  }
  _sprintf_s(local_20,0x1c,"camera_%02d_%03d.mot",param_1[2],param_3);
  iVar1 = FUN_00de45a0(local_20);
  if (iVar1 == 0) {
    FUN_00e84120(param_1 + 0x40);
    FUN_00dd5650(&DAT_016cfa00);
    __security_check_cookie(local_4 ^ (uint)local_50);
    return;
  }
  FUN_00e240c0();
  Animation::MotReader(iVar1);
  if (local_50[0] == 0) {
    FUN_00e84120(param_1 + 0x40);
    puVar2 = &DAT_016cf9c0;
  }
  else {
    FUN_00e24230(param_4);
    iVar1 = Animation::MotReader::pullCameraParam(param_2,0);
    if (iVar1 != 0) goto LAB_00e7018b;
    FUN_00e84120(param_1 + 0x40);
    puVar2 = &DAT_016cf980;
  }
  FUN_00dd5650(puVar2);
LAB_00e7018b:
  FUN_00e29e30();
  __security_check_cookie(local_4 ^ (uint)local_50);
  return;
}

// 00E701F0  FUN_00e701f0  size=515  [between]
void __thiscall FUN_00e701f0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float local_24;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  param_2[4] = param_3[4];
  param_2[5] = param_3[5];
  param_2[6] = param_3[6];
  param_2[7] = param_3[7];
  param_2[8] = param_3[8];
  param_2[9] = param_3[9];
  param_2[10] = param_3[10];
  param_2[0xb] = param_3[0xb];
  param_2[0xc] = param_3[0xc];
  param_2[0xd] = param_3[0xd];
  if (((float)param_3[0x11] != 0.0) || ((float)param_3[0x12] != 0.0)) {
    uVar2 = *(undefined4 *)(param_1 + 400);
    fVar5 = (float10)FUN_00e699d0(uVar2,&DAT_018d02a0);
    fVar6 = (float10)FUN_00e699d0(uVar2,&DAT_018d02d0);
    fVar7 = (float10)FUN_00e699d0(uVar2,&DAT_018d0300);
    fVar8 = (float10)FUN_00e699d0(uVar2,&DAT_018d0330);
    fVar9 = (float10)FUN_00e699d0(uVar2,&DAT_018d0360);
    fVar10 = (float10)FUN_00e699d0(uVar2,&DAT_018d0390);
    fVar11 = (float10)FUN_00e699d0(uVar2,&DAT_018d03c0);
    fVar12 = (float10)FUN_00fdef70();
    fVar3 = (float)fVar12 / 5.0;
    fVar4 = (float)param_3[0x11] + (float)param_3[0x11];
    fVar1 = (float)param_3[0x12];
    param_2[4] = (float)param_2[4] + fVar4 * fVar3 * (float)(fVar8 + (float10)(float)fVar5);
    param_2[5] = (float)param_2[5] + fVar4 * fVar3 * (float)(fVar9 + (float10)(float)fVar6);
    param_2[6] = (float)param_2[6] + fVar4 * fVar3 * (float)(fVar10 + (float10)(float)fVar7);
    param_2[7] = (float)param_2[7] + fVar4 * fVar3 * local_24;
    param_2[0xc] = (float)param_2[0xc] + fVar1 * (float)fVar11;
  }
  return;
}

// 00E70450  FUN_00e70450  size=82  [between]
void __thiscall FUN_00e70450(int param_1,int param_2)

{
  int *piVar1;
  
  if ((*(byte *)(param_2 + 0x1e) < 0x20) &&
     (piVar1 = (int *)((uint)*(byte *)(param_2 + 0x1e) * 0xb0 + 0xd0 + param_1),
     piVar1 != (int *)0x0)) {
    if (*(short *)(param_2 + 0x22) == 0) {
      (**(code **)(*piVar1 + 4))();
      return;
    }
    (**(code **)(*piVar1 + 8))((float)(int)*(short *)(param_2 + 0x22),0,0);
  }
  return;
}

// 00E704C0  FUN_00e704c0  size=273  [between]
void __thiscall FUN_00e704c0(int *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int local_10;
  
  iVar5 = param_2;
  iVar11 = *(int *)(*param_1 + 0x2c);
  if ((*(short *)(param_3 + 10) <= iVar11) &&
     ((*(short *)(param_3 + 10) < iVar11 ||
      ((float)(int)*(short *)(param_3 + 0xc) <= *(float *)(*param_1 + 0x30))))) {
    puVar6 = (uint *)(param_3 + 0x1c);
    sVar2 = *(short *)(param_2 + 0x324);
    local_10 = 0;
    param_2 = 0;
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[4];
      uVar9 = 0;
      uVar10 = param_2;
      iVar11 = local_10;
      do {
        if ((uint)(int)sVar2 <= uVar10) {
          return;
        }
        uVar7 = 0x80000000 >> ((byte)uVar9 & 0x1f);
        if ((uVar3 & uVar7) == 0) {
          if (((((uVar7 & uVar4) != 0) && (-1 < (int)uVar10)) &&
              ((int)uVar10 < (int)*(short *)(iVar5 + 0x324))) &&
             (iVar8 = *(int *)(iVar5 + 800) + iVar11, iVar8 != 0)) {
            puVar1 = (uint *)(iVar8 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        else if (((-1 < (int)uVar10) && ((int)uVar10 < (int)*(short *)(iVar5 + 0x324))) &&
                (iVar8 = *(int *)(iVar5 + 800) + iVar11, iVar8 != 0)) {
          puVar1 = (uint *)(iVar8 + 0x38);
          *puVar1 = *puVar1 | 1;
        }
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 1;
        iVar11 = iVar11 + 0x70;
      } while (uVar9 < 0x20);
      param_2 = param_2 + 0x20;
      puVar6 = puVar6 + 1;
      local_10 = local_10 + 0xe00;
    } while ((int)param_2 < 0x80);
  }
  return;
}

// 00E705E0  FUN_00e705e0  size=168  [between]
void __thiscall FUN_00e705e0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x2c);
  if ((*(short *)(param_3 + 10) <= iVar1) &&
     ((*(short *)(param_3 + 10) < iVar1 ||
      ((float)(int)*(short *)(param_3 + 0xc) <= *(float *)(*param_1 + 0x30))))) {
    switch(*(undefined1 *)(param_3 + 0x1c)) {
    case 0:
      FUN_00a09ce0();
      return;
    case 1:
      FUN_00a09f50();
      return;
    case 2:
      FUN_00a0a1c0();
      return;
    case 3:
      FUN_00a0a360();
      return;
    }
  }
  return;
}

// 00E706A0  FUN_00e706a0  size=90  [between]
bool FUN_00e706a0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  if ((*(char *)(param_2 + 0x23) == '\0') && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
    uVar1 = *(undefined1 *)(param_2 + 0x26);
    uVar2 = *(undefined4 *)(param_2 + 0x28);
    FUN_00de3530();
    iVar3 = FUN_00e6b4f0(local_8,uVar1,uVar2);
    if (iVar3 != 0) {
      iVar3 = FUN_00e236c0(local_8);
      return iVar3 == 0;
    }
  }
  return false;
}

// 00E70700  FUN_00e70700  size=160  [between]
void FUN_00e70700(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  char local_2c [40];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_2c;
  _sprintf_s(local_2c,0x28,"%s_%x",param_3,*(undefined4 *)(param_4 + 0x48));
  if ((*(byte *)(param_4 + 0x18) & 1) == 0) {
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) goto LAB_00e7078d;
    uVar1 = FUN_00e356a0(local_2c);
  }
  else {
    uVar1 = FUN_00e6b610(*(undefined1 *)(param_4 + 0x26),*(undefined4 *)(param_4 + 0x28),local_2c);
  }
  iVar2 = FUN_00e26e90();
  if (iVar2 != 0) {
    FUN_00e3fa90(uVar1,local_2c,param_2);
  }
LAB_00e7078d:
  __security_check_cookie(local_4 ^ (uint)local_2c);
  return;
}

// 00E707A0  FUN_00e707a0  size=205  [between]
void FUN_00e707a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined1 local_64 [8];
  char local_5c [40];
  char local_34 [48];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_64;
  uVar1 = *(undefined1 *)(param_4 + 0x26);
  uVar2 = *(undefined4 *)(param_4 + 0x28);
  FUN_00de3530();
  FUN_00e6b4f0(local_64,uVar1,uVar2);
  ppuVar5 = &PTR_DAT_01885e40;
  do {
    _sprintf_s(local_5c,0x28,"%s%s",param_3,*ppuVar5);
    _sprintf_s(local_34,0x30,"%s_seq.bxm",local_5c);
    uVar2 = FUN_00e03ea0(local_34);
    iVar3 = FUN_00de3e90(0,uVar2);
    if (iVar3 != 0) {
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        FUN_00e3fa90(iVar3,local_5c,param_2);
      }
    }
    ppuVar5 = ppuVar5 + 1;
  } while ((int)ppuVar5 < 0x1885e50);
  __security_check_cookie(local_4 ^ (uint)local_64);
  return;
}

// 00E70870  FUN_00e70870  size=206  [between]
void __thiscall FUN_00e70870(int *param_1,int param_2,int param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a7c890();
  uVar4 = FUN_00e36300(0);
  if (*(int *)(*(int *)*param_1 + 0x1a70) != 0) {
    cVar2 = *(char *)(((int *)*param_1)[2] + 1);
    if (cVar2 == '\x01') {
      cVar2 = '\x1e';
      goto LAB_00e708bd;
    }
    if (cVar2 != '\x02') {
      cVar2 = FUN_00e23840(uVar4);
      goto LAB_00e708bd;
    }
  }
  cVar2 = '<';
LAB_00e708bd:
  fVar1 = *(float *)(param_3 + 0x4c);
  FUN_00e3a1a0(0,0x40000,1);
  FUN_00e26e90();
  FUN_00e35de0(iVar3 + 0x98,0,fVar1 / (float)(int)cVar2);
  *(undefined4 *)(iVar3 + 0x33c) = 0;
  if ((*(int *)(param_2 + 0x20) != 0) && ((*(uint *)(param_2 + 0x2c) & 2) != 0)) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffffd;
    FUN_009321a0(*(int *)(param_2 + 0x20),0);
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  }
  return;
}

// 00E70980  FUN_00e70980  size=90  [between]
void FUN_00e70980(int param_1,int param_2)

{
  if (*(char *)(param_2 + 0x22) == '\x01') {
    if ((*(int *)(param_1 + 0x20) != 0) && ((*(uint *)(param_1 + 0x2c) & 4) == 0)) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
      FUN_009322d0(*(int *)(param_1 + 0x20),1);
    }
  }
  else if (*(char *)(param_2 + 0x22) == '\x02') {
    if ((*(int *)(param_1 + 0x20) != 0) && ((*(uint *)(param_1 + 0x2c) & 4) != 0)) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffb;
      FUN_009322d0(*(int *)(param_1 + 0x20),0);
      return;
    }
  }
  return;
}

// 00E709E0  FUN_00e709e0  size=249  [between]
void __thiscall FUN_00e709e0(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_34 [16];
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_34;
  iVar3 = (int)(short)param_2[2];
  if (((iVar3 < 0) || (*(int *)(*param_1 + 0x84) <= iVar3)) ||
     (iVar3 * 0x50 + *(int *)(*param_1 + 0x7c) == 0)) {
    __security_check_cookie(local_4 ^ (uint)local_34);
    return;
  }
  uVar1 = param_2[0xc];
  if ((param_2[6] & 2) == 0) {
    if ((param_2[6] & 1) == 0) {
      _sprintf_s(local_24,0x20,"%04x",(uint)(ushort)uVar1);
      goto LAB_00e70a82;
    }
    uVar2 = *param_2;
  }
  else {
    uVar2 = param_2[0xb];
  }
  FUN_009f8ea0(local_34,0x10,uVar2 & 0xffffff,0);
  _sprintf_s(local_24,0x20,"%s_%04x",local_34,(uint)(ushort)uVar1);
LAB_00e70a82:
  FUN_00a7c890();
  if ((param_2[6] & 1) != 0) {
    FUN_00e6b580(*(undefined1 *)((int)param_2 + 0x26),param_2[10],local_24);
    __security_check_cookie(local_4 ^ (uint)local_34);
    return;
  }
  FUN_00e355e0(local_24);
  __security_check_cookie(local_4 ^ (uint)local_34);
  return;
}

// 00E70AE0  FUN_00e70ae0  size=188  [between]
undefined4 __thiscall FUN_00e70ae0(int *param_1,int param_2,int *param_3)

{
  param_1[1] = (int)param_3;
  param_1[2] = (int)(param_3 + 0xe);
  *param_1 = param_2;
  param_1[0xd] = *param_3;
  param_1[3] = param_3[0x112];
  FUN_00931e60((int)(char)param_3[0x10] / (int)*(char *)((int)param_3 + 0x41) == 2);
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = -1;
  param_1[8] = 0;
  param_1[7] = -1;
  param_1[10] = 0;
  param_1[9] = -1;
  param_1[0xc] = 0;
  param_1[0xb] = -1;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = -1;
  param_1[0x13] = -1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if ((*(uint *)(param_2 + 0x1a7c) & 0x80000000) != 0) {
    param_1[4] = param_1[4] | 0x28;
  }
  if (param_1[3] != 0) {
    thunk_FUN_00dfba30(param_1[3]);
    if (DAT_01dd9ee4 != 0) {
      FUN_00dfa6d0(param_1[3],1,0);
    }
  }
  return 1;
}

// 00E70BA0  FUN_00e70ba0  size=130  [between]
undefined4 __fastcall FUN_00e70ba0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *param_1;
  uVar4 = 0;
  if (*(int *)(iVar1 + 0x1a00) != 0) {
    iVar2 = FUN_009324f0(2,iVar1 + 0x1a04);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x1a00) = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0xc4) != 0) {
    iVar2 = FUN_00932520(*(int *)(iVar1 + 0xa8) + 0x1a70,iVar1 + 0xcc);
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    else {
      *(undefined4 *)(iVar1 + 0xc4) = 0;
    }
  }
  uVar3 = 1;
  if ((param_1[4] & 0x200U) == 0) {
    uVar3 = uVar4;
  }
  return uVar3;
}

// 00E70C30  FUN_00e70c30  size=159  [between]
void __fastcall FUN_00e70c30(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1[4] = param_1[4] & 0xf7ffdfbb;
  if ((param_1[5] == param_1[7]) && ((float)param_1[8] == (float)param_1[6])) {
    param_1[4] = param_1[4] | 0x40;
  }
  if ((param_1[5] == param_1[9]) && ((float)param_1[10] == (float)param_1[6])) goto LAB_00e70cc6;
  uVar1 = param_1[4];
  if ((uVar1 & 0x20000000) == 0) {
    if ((uVar1 & 0x1000) != 0) {
      uVar1 = uVar1 | 0x2000;
      goto LAB_00e70c97;
    }
    if ((uVar1 & 2) != 0) {
      uVar1 = uVar1 | 4;
      goto LAB_00e70c97;
    }
  }
  else {
    uVar1 = uVar1 | 0x8000000;
LAB_00e70c97:
    param_1[4] = uVar1;
  }
  uVar1 = param_1[4];
  uVar2 = uVar1 >> 0x1d & 1;
  if (((uVar2 != 0) || ((uVar1 & 0x1000) != 0)) || ((uVar1 & 2) != 0)) {
    FUN_00931da0(*param_1 + 0x1a70,uVar2);
  }
LAB_00e70cc6:
  param_1[4] = param_1[4] & 0xdbffeffd;
  return;
}

// 00E70CD0  FUN_00e70cd0  size=61  [between]
float10 __fastcall FUN_00e70cd0(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(*param_1 + 0x14);
  fVar2 = (float10)FUN_00932000(param_1[0xf]);
  return (float10)((float)param_1[0xe] * (float)fVar2 * fVar1);
}

// 00E70D10  FUN_00e70d10  size=710  [between]
void __thiscall FUN_00e70d10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  float local_8;
  
  iVar2 = FUN_00dfbfb0(*(undefined4 *)(param_1 + 0xc));
  if (iVar2 == 2) {
    local_8 = 0.0;
  }
  else if (iVar2 == 3) {
    iVar3 = FUN_00dfc070(*(undefined4 *)(param_1 + 0xc));
    iVar5 = FUN_00dfc030(*(undefined4 *)(param_1 + 0xc));
    iVar2 = *(int *)(iVar5 + 8);
    *(int *)(param_1 + 0x50) = iVar3;
    local_8 = (float)iVar3 / (float)(iVar2 + -1);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 8);
  }
  else {
    local_8 = 1.0;
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(iVar3 + 0x18);
  iVar2 = iVar5 + -1;
  if (iVar2 < 0) {
    iVar6 = 0;
  }
  else if (iVar2 < iVar5) {
    iVar6 = *(int *)(*(int *)(iVar3 + 0x24) + iVar2 * 4);
  }
  else {
    iVar6 = 0;
  }
  if (((iVar2 < 0) || (iVar5 <= iVar2)) ||
     (piVar1 = (int *)(*(int *)(iVar3 + 0x10) + iVar2 * 4), piVar1 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  FUN_00931ea0();
  iVar4 = FUN_00fdbc60();
  iVar3 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(iVar3 + 0x18) + -1;
  iVar5 = 0;
  local_8 = (float)((iVar6 + iVar2) - iVar4) * local_8;
  if (3 < iVar7) {
    iVar2 = 2;
    do {
      if (((iVar5 < 0) || (*(int *)(iVar3 + 0x18) <= iVar5)) ||
         (piVar1 = (int *)(*(int *)(iVar3 + 0x10) + iVar5 * 4), piVar1 == (int *)0x0)) {
        local_c = 0;
      }
      else {
        local_c = *piVar1;
      }
      if (local_8 < (float)local_c) goto LAB_00e70fc1;
      local_8 = local_8 - (float)local_c;
      if (((iVar2 + -1 < 0) || (*(int *)(iVar3 + 0x18) <= iVar2 + -1)) ||
         (piVar1 = (int *)(*(int *)(iVar3 + 0x10) + 4 + iVar5 * 4), piVar1 == (int *)0x0)) {
        local_c = 0;
      }
      else {
        local_c = *piVar1;
      }
      if (local_8 < (float)local_c) {
        param_2[1] = (int)local_8;
        *param_2 = iVar5 + 1;
        return;
      }
      local_8 = local_8 - (float)local_c;
      if (((iVar2 < 0) || (*(int *)(iVar3 + 0x18) <= iVar2)) ||
         (piVar1 = (int *)(*(int *)(iVar3 + 0x10) + 8 + iVar5 * 4), piVar1 == (int *)0x0)) {
        local_c = 0;
      }
      else {
        local_c = *piVar1;
      }
      if (local_8 < (float)local_c) {
        param_2[1] = (int)local_8;
        *param_2 = iVar5 + 2;
        return;
      }
      local_8 = local_8 - (float)local_c;
      if (((iVar2 + 1 < 0) || (*(int *)(iVar3 + 0x18) <= iVar2 + 1)) ||
         (piVar1 = (int *)(*(int *)(iVar3 + 0x10) + 0xc + iVar5 * 4), piVar1 == (int *)0x0)) {
        local_c = 0;
      }
      else {
        local_c = *piVar1;
      }
      if (local_8 < (float)local_c) {
        iVar5 = iVar5 + 3;
        goto LAB_00e70fc1;
      }
      local_8 = local_8 - (float)local_c;
      iVar5 = iVar5 + 4;
      iVar2 = iVar2 + 4;
    } while (iVar5 < *(int *)(iVar3 + 0x18) + -4);
  }
  while( true ) {
    if (iVar7 <= iVar5) {
      param_2[1] = (int)local_8;
      *param_2 = iVar5;
      return;
    }
    if (((iVar5 < 0) || (*(int *)(iVar3 + 0x18) <= iVar5)) ||
       (piVar1 = (int *)(*(int *)(iVar3 + 0x10) + iVar5 * 4), piVar1 == (int *)0x0)) {
      local_c = 0;
    }
    else {
      local_c = *piVar1;
    }
    if (local_8 < (float)local_c) break;
    local_8 = local_8 - (float)local_c;
    iVar5 = iVar5 + 1;
  }
LAB_00e70fc1:
  param_2[1] = (int)local_8;
  *param_2 = iVar5;
  return;
}

// 00E70FE0  Event::EnvManager::endGraphicMode  size=111  [class]
void __fastcall Event::EnvManager::endGraphicMode(int *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    FUN_009322f0(0);
    param_1[3] = param_1[3] & 0xfffffffe;
  }
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    if (DAT_01dd9ed4 == 0) {
      FUN_00dd5650(&DAT_016ced10);
      FUN_00931990();
      return;
    }
    DAT_01dd9ed4 = DAT_01dd9ed4 + -1;
    FUN_00931990();
    return;
  }
  if (DAT_01dd9ecc == 0) {
    FUN_00dd5650(&DAT_016ced10);
    FUN_00931990();
    return;
  }
  DAT_01dd9ecc = DAT_01dd9ecc + -1;
  FUN_00931990();
  return;
}

// 00E71050  FUN_00e71050  size=94  [between]
undefined4 FUN_00e71050(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x118);
  iVar4 = 0;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      if (iVar4 < 0) {
        puVar2 = (undefined4 *)0x0;
      }
      else if (iVar4 < *(int *)(param_1 + 0x118)) {
        puVar2 = (undefined4 *)(*(int *)(param_1 + 0x110) + iVar5);
      }
      else {
        puVar2 = (undefined4 *)0x0;
      }
      iVar3 = FUN_00932040(*puVar2);
      if (iVar3 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 100;
    } while (iVar4 < iVar1);
  }
  return 0;
}

// 00E710F0  FUN_00e710f0  size=405  [between]
void __fastcall FUN_00e710f0(int *param_1)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  float local_10;
  
  if (param_1[2] == 0) {
    return;
  }
  if ((*(byte *)(*param_1 + 0x28) & 0x20) != 0) {
    FUN_00dda360(0,0,0,0);
    return;
  }
  uVar2 = *(ushort *)((int)param_1 + 0x2a);
  uVar6 = (uint)*(ushort *)(param_1 + 10);
  uVar3 = *(ushort *)(param_1 + 0xb);
  fVar1 = (float)(uVar6 + uVar2);
  if ((float)uVar6 <= (float)param_1[0x12]) {
    if ((float)param_1[0x12] < fVar1) {
      local_10 = (float)param_1[0xe];
      fVar1 = (float)param_1[0xf];
      goto LAB_00e711f5;
    }
    fVar1 = ((float)param_1[0x12] - fVar1) / (float)uVar3;
    local_10 = (float)param_1[0xe] * (1.0 - fVar1) + (float)param_1[0x10] * fVar1;
    fVar5 = (float)param_1[0x11] * fVar1;
    fVar1 = (1.0 - fVar1) * (float)param_1[0xf];
  }
  else {
    fVar1 = (float)param_1[0x12] / (float)*(ushort *)(param_1 + 10);
    local_10 = (float)param_1[0xc] * (1.0 - fVar1) + (float)param_1[0xe] * fVar1;
    fVar5 = (float)param_1[0xf] * fVar1;
    fVar1 = (1.0 - fVar1) * (float)param_1[0xd];
  }
  fVar1 = fVar1 + fVar5;
LAB_00e711f5:
  FUN_00dda360(0,local_10,fVar1,1);
  iVar4 = *param_1;
  fVar1 = *(float *)(*(int *)(iVar4 + 0x18) + 0x14);
  fVar7 = (float10)FUN_00932000(*(undefined4 *)(iVar4 + 0x54));
  fVar1 = *(float *)(iVar4 + 0x50) * (float)fVar7 * fVar1 + (float)param_1[0x12];
  param_1[0x12] = (int)fVar1;
  if ((float)(uVar3 + uVar6 + (uint)uVar2) <= fVar1) {
    param_1[0x13] = param_1[0x13] + 1;
    param_1[0x12] = 0;
    if ((int)(uint)*(byte *)((int)param_1 + 0x25) <= param_1[0x13]) {
      param_1[2] = 0;
    }
  }
  return;
}

// 00E712D0  FUN_00e712d0  size=57  [between]
undefined4 __thiscall
FUN_00e712d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  FUN_00e67e40(param_2);
  return 1;
}

// 00E71310  Event::ReadUnitDebug::requestRead  size=45  [class]
void __fastcall Event::ReadUnitDebug::requestRead(int param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (*(int *)(param_1 + 8) == 5) {
    FUN_00dd5650(&DAT_016cfa88);
    return;
  }
  return;
}

// 00E71340  FUN_00e71340  size=49  [between]
undefined4 __fastcall FUN_00e71340(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e6cae0(param_1 + 0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar1 == 1) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 8) = 5;
  }
  return 0;
}

// 00E71380  FUN_00e71380  size=77  [between]
undefined4 __fastcall FUN_00e71380(int param_1)

{
  int iVar1;
  
  FUN_00e67dc0(param_1 + 0x10,&DAT_016cfac4);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00931f30(param_1 + 0x70);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 0;
  }
  iVar1 = FUN_00931f50(param_1 + 0x70,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

// 00E713D0  FUN_00e713d0  size=23  [between]
undefined4 FUN_00e713d0(undefined4 param_1,undefined4 param_2)

{
  Event::DataUnit::debugCreateData(param_1,param_2);
  return 0;
}

// 00E713F0  FUN_00e713f0  size=107  [between]
bool __thiscall FUN_00e713f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((param_4 < 0) || (*(int *)(param_1 + 0x188) <= param_4)) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)(param_4 * 100 + *(int *)(param_1 + 0x180));
  }
  uVar1 = FUN_00931fa0(*puVar4);
  uVar2 = FUN_00931fc0(param_1 + 0x70,uVar1,puVar4 + 7);
  FUN_00a00bd0(uVar1,uVar2);
  iVar3 = FUN_00e684b0(param_2,param_3,param_4);
  return iVar3 != 0;
}

// 00E71460  Event::ReadUnitExternal::vf04  size=32  [class]
undefined4 __thiscall Event::ReadUnitExternal::vf04(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00e67e40(param_2);
  return 1;
}

// 00E71480  Event::ReadUnitExternal::requestRead  size=51  [class]
void __fastcall Event::ReadUnitExternal::requestRead(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[1] = param_1[1] | 1;
  if (param_1[2] != 0) {
    if (param_1[2] == 5) {
      FUN_00dd5650(&DAT_016cfad8);
    }
    return;
  }
  param_1[2] = 1;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00e714b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00E714C0  FUN_00e714c0  size=95  [between]
void __fastcall FUN_00e714c0(int *param_1)

{
  int iVar1;
  undefined1 local_8 [8];
  
  FUN_00de3530();
  iVar1 = (**(code **)(*param_1 + 0x34))(local_8,param_1 + 4);
  if (iVar1 != 0) {
    iVar1 = FUN_00e6c5d0(&stack0xfffffff0,0);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
      param_1[3] = 0;
      return;
    }
  }
  param_1[2] = 5;
  param_1[3] = 0;
  return;
}

// 00E71520  FUN_00e71520  size=63  [between]
undefined4 __fastcall FUN_00e71520(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00931f30(param_1 + 0x10,0);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  iVar1 = FUN_00931f50(param_1 + 0x10,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

// 00E71560  Event::ReadUnitNorm::requestRead  size=51  [class]
void __fastcall Event::ReadUnitNorm::requestRead(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1[1] = param_1[1] | 1;
  if (param_1[2] != 0) {
    if (param_1[2] == 8) {
      FUN_00dd5650(&DAT_016cfb18);
    }
    return;
  }
  param_1[2] = 1;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00e71591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00E715A0  FUN_00e715a0  size=59  [between]
undefined4 __fastcall FUN_00e715a0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    iVar1 = FUN_00dfbfb0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar1 != 2) {
      *(undefined4 *)(param_1 + 8) = 8;
      return 0;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 0;
}

// 00E715E0  FUN_00e715e0  size=157  [between]
void __fastcall FUN_00e715e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      _sprintf_s(local_24,0x20,"event/ev%04x.evn",*(undefined4 *)(param_1 + 0x20));
      uVar1 = FUN_00931a20(param_1 + 0x1c,0);
      uVar1 = FUN_00e9e570(4,local_24,uVar1,0,0);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    iVar2 = FUN_00e9cfe0(*(undefined4 *)(param_1 + 0x14));
    if (iVar2 == 0) {
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E71680  FUN_00e71680  size=157  [between]
void __fastcall FUN_00e71680(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      _sprintf_s(local_24,0x20,"event/ev%04x.evt",*(undefined4 *)(param_1 + 0x20));
      uVar1 = FUN_00931a20(param_1 + 0x1c,1);
      uVar1 = FUN_00e9e570(4,local_24,uVar1,0,0);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(undefined4 *)(param_1 + 0x18) = uVar1;
    }
    iVar2 = FUN_00e9cfe0(*(undefined4 *)(param_1 + 0x18));
    if (iVar2 == 0) {
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E71720  FUN_00e71720  size=123  [between]
void __fastcall FUN_00e71720(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x14));
  }
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00e9d0b0(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_00de3610(uVar1,uVar2);
  iVar3 = FUN_00e6c5d0(local_8,*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 8) = 8;
    return;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

// 00E717F0  FUN_00e717f0  size=186  [between]
void __thiscall FUN_00e717f0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = param_2;
  iVar4 = 0;
  if (*param_1 == 0) {
    *param_1 = 1;
    iVar6 = *(int *)(param_2 + 0x118);
    if (0 < iVar6) {
      param_2 = 0;
      do {
        if (iVar4 < 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else if (iVar4 < *(int *)(iVar1 + 0x118)) {
          puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x110) + param_2);
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        uVar2 = FUN_00931fa0(*puVar5);
        uVar3 = FUN_00931fc0(iVar1,uVar2,puVar5 + 7);
        FUN_00a00a60(uVar2,uVar3);
        param_2 = param_2 + 100;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    iVar4 = *(int *)(iVar1 + 0x140);
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        uVar2 = FUN_00931fa0(*(undefined4 *)(*(int *)(iVar1 + 0x138) + iVar6));
        FUN_00a00a60(uVar2,0xfffffffe);
        iVar6 = iVar6 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

// 00E718B0  FUN_00e718b0  size=194  [between]
undefined4 FUN_00e718b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x118);
  iVar7 = 0;
  if (0 < iVar1) {
    param_1 = 0;
    do {
      if (iVar7 < 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else if (iVar7 < *(int *)(iVar2 + 0x118)) {
        puVar8 = (undefined4 *)(*(int *)(iVar2 + 0x110) + param_1);
      }
      else {
        puVar8 = (undefined4 *)0x0;
      }
      uVar3 = FUN_00931fa0(*puVar8);
      uVar4 = FUN_00931fc0(iVar2,uVar3,puVar8 + 7);
      iVar5 = FUN_00a00f80(uVar3,uVar4);
      if (iVar5 == 0) {
        return 0;
      }
      param_1 = param_1 + 100;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  iVar1 = *(int *)(iVar2 + 0x140);
  iVar7 = 0;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar3 = FUN_00931fa0(*(undefined4 *)(*(int *)(iVar2 + 0x138) + iVar5));
      iVar6 = FUN_00a00f80(uVar3,0xfffffffe);
      if (iVar6 == 0) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar7 < iVar1);
  }
  return 1;
}

// 00E71980  FUN_00e71980  size=174  [between]
void __thiscall FUN_00e71980(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = param_2;
  iVar4 = 0;
  if (*param_1 != 0) {
    *param_1 = 0;
    iVar6 = *(int *)(param_2 + 0x118);
    if (0 < iVar6) {
      param_2 = 0;
      do {
        if (iVar4 < 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else if (iVar4 < *(int *)(iVar1 + 0x118)) {
          puVar5 = (undefined4 *)(*(int *)(iVar1 + 0x110) + param_2);
        }
        else {
          puVar5 = (undefined4 *)0x0;
        }
        uVar2 = FUN_00931fa0(*puVar5);
        uVar3 = FUN_00931fc0(iVar1,uVar2,puVar5 + 7);
        FUN_00a00bd0(uVar2,uVar3);
        param_2 = param_2 + 100;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    iVar4 = *(int *)(iVar1 + 0x140);
    if (0 < iVar4) {
      iVar6 = 0;
      do {
        uVar2 = FUN_00931fa0(*(undefined4 *)(*(int *)(iVar1 + 0x138) + iVar6));
        FUN_00a00bd0(uVar2,0xfffffffe);
        iVar6 = iVar6 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

// 00E71A60  FUN_00e71a60  size=195  [between]
float10 FUN_00e71a60(int param_1,float param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  
  if (0.0 <= param_4) {
    if (param_4 <= 0.0) {
      fVar2 = (float10)param_2;
    }
    else {
      fVar2 = (float10)FUN_00e6b710(param_2,param_4);
    }
  }
  else {
    fVar2 = (float10)FUN_00e6b6a0(param_2,ABS(param_4));
  }
  fVar1 = (float)fVar2;
  if (param_1 == 1) {
    fVar2 = (float10)FUN_00e6b6a0(fVar1,param_3);
    return fVar2;
  }
  if (param_1 == 2) {
    fVar2 = (float10)FUN_00e6b710(fVar1,param_3);
    return fVar2;
  }
  if (param_1 != 3) {
    return (float10)fVar1;
  }
  fVar2 = (float10)FUN_00e6b780(fVar1,param_3);
  return fVar2;
}

// 00E71B30  FUN_00e71b30  size=179  [between]
void FUN_00e71b30(float *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  int extraout_ECX;
  int extraout_ECX_00;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00e6b810(*param_2,*param_3,*param_4,*param_5,param_6,param_7);
  *param_1 = (float)extraout_ST0;
  uVar2 = FUN_00e6b810(param_2[1],*(undefined4 *)((int)((ulonglong)uVar2 >> 0x20) + 4),
                       *(undefined4 *)(extraout_ECX + 4),*(undefined4 *)((int)uVar2 + 4),param_6,
                       param_7);
  param_1[1] = (float)extraout_ST0_00;
  fVar1 = (float10)FUN_00e6b810(param_2[2],*(undefined4 *)((int)((ulonglong)uVar2 >> 0x20) + 8),
                                *(undefined4 *)(extraout_ECX_00 + 8),*(undefined4 *)((int)uVar2 + 8)
                                ,param_6,param_7);
  param_1[2] = (float)fVar1;
  return;
}

// 00E71BF0  FUN_00e71bf0  size=10  [between]
void FUN_00e71bf0(void)

{
  FUN_00e67970();
  FUN_00e6c1c0();
  return;
}

// 00E71C00  FUN_00e71c00  size=56  [between]
void FUN_00e71c00(void)

{
  DAT_01dd9ee0 = 0;
  FUN_00e6c030();
  DAT_01dd9eec = 0;
  if (DAT_01dd9ef0 != 0) {
    FUN_00dd48d0(DAT_01dd9ef0,0);
    DAT_01dd9ef0 = 0;
  }
  return;
}

// 00E71C40  FUN_00e71c40  size=30  [between]
undefined4 FUN_00e71c40(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((*(byte *)((int)&DAT_01dda500 + uVar1) & 1) != 0) {
      return 0;
    }
    uVar1 = uVar1 + 0x34;
  } while (uVar1 < 0x1a0);
  return 1;
}

// 00E71C60  thunk_FUN_00e6c310  size=5  [between]
int thunk_FUN_00e6c310(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = &DAT_01dda548;
  iVar3 = 2;
  do {
    if ((((piVar2[-0x12] & 1U) != 0) && (-1 < piVar2[-0x12])) && (piVar2[-0xd] == 3)) {
      iVar1 = iVar1 + 1;
    }
    if ((((piVar2[-5] & 1U) != 0) && (-1 < piVar2[-5])) && (*piVar2 == 3)) {
      iVar1 = iVar1 + 1;
    }
    if ((((piVar2[8] & 1U) != 0) && (-1 < piVar2[8])) && (piVar2[0xd] == 3)) {
      iVar1 = iVar1 + 1;
    }
    if ((((piVar2[0x15] & 1U) != 0) && (-1 < piVar2[0x15])) && (piVar2[0x1a] == 3)) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 0x34;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

// 00E71C70  FUN_00e71c70  size=29  [between]
undefined * FUN_00e71c70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e6c380(param_1);
  if (iVar1 != 0) {
    return (undefined *)(iVar1 + 0x1a70);
  }
  return &DAT_018d03f0;
}

// 00E71C90  FUN_00e71c90  size=18  [between]
void FUN_00e71c90(undefined4 param_1)

{
  DAT_01dd9ee4 = param_1;
  FUN_00e6c3c0();
  return;
}

// 00E72300  Event::EnvManager::getSurviveEspControler  size=78  [class]
int * Event::EnvManager::getSurviveEspControler(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00e6c070(param_1);
  if (piVar1 == (int *)0x0) {
    piVar1 = &DAT_01dd9f00;
    do {
      if (*piVar1 == 3) {
        *piVar1 = *param_1;
        piVar1[1] = param_1[1];
        piVar1[2] = param_1[2];
        return piVar1 + 4;
      }
      piVar1 = piVar1 + 0x30;
    } while ((int)piVar1 < 0x1dda500);
    FUN_00dd5650(&DAT_016cfc14);
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

// 00E72350  FUN_00e72350  size=94  [between]
void FUN_00e72350(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &DAT_01dda514;
  iVar3 = 8;
  do {
    if ((piVar4[-5] & 1U) != 0) {
      piVar4[-5] = piVar4[-5] & 0xfffffff9;
      iVar2 = *piVar4;
      if (iVar2 == 2) {
LAB_00e7237c:
        *piVar4 = 4;
        piVar4[1] = 0;
      }
      else if (iVar2 == 3) {
        iVar2 = piVar4[4];
        puVar1 = (uint *)(iVar2 + 0x28);
        *puVar1 = *puVar1 | 0x20000;
        iVar2 = *(int *)(iVar2 + 0x24);
        if (iVar2 != 0) {
          thunk_FUN_00dfbaa0(iVar2);
        }
      }
      else if (iVar2 == 5) goto LAB_00e7237c;
    }
    piVar4 = piVar4 + 0xd;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}

// 00E723D0  FUN_00e723d0  size=89  [between]
int * FUN_00e723d0(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_01dda50c;
  uVar2 = 0;
  while( true ) {
    if ((((((piVar1[-3] & 1U) != 0) && (piVar1[-2] == *param_1)) && (piVar1[-1] == param_1[1])) &&
        ((*piVar1 == param_1[2] &&
         (((param_2 & 0x80000000) == 0 || ((piVar1[1] & 0x80000000U) != 0)))))) &&
       ((piVar1[-3] & 0x80000000U) == 0)) break;
    uVar2 = uVar2 + 0x34;
    piVar1 = piVar1 + 0xd;
    if (0x19f < uVar2) {
      return (int *)0x0;
    }
  }
  return piVar1 + -3;
}

// 00E72450  Event::Manager::activateWork  size=100  [class]
void Event::Manager::activateWork(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (((*param_1 & 1) != 0) && ((param_1[4] & 0x80000000) != 0)) {
    puVar3 = &DAT_01dda500;
    iVar2 = 8;
    do {
      uVar1 = *puVar3;
      if (((((uVar1 & 1) != 0) && (puVar3[1] == param_1[1])) && (puVar3[2] == param_1[2])) &&
         (((puVar3[3] == param_1[3] && ((int)uVar1 < 0)) && (puVar3 != param_1)))) {
        *puVar3 = uVar1 & 0x7fffffff;
        FUN_00dd5650(&DAT_016cfc50);
      }
      puVar3 = puVar3 + 0xd;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00E727F0  Event::ActorDataHolder::getSeqLastFrame  size=135  [class]
undefined4 __thiscall
Event::ActorDataHolder::getSeqLastFrame
          (int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  if (**(int **)(param_1 + 4) != 0) {
    FUN_00dd5650(&DAT_016cfcbc);
    return 0;
  }
  sVar1 = *(short *)(param_4 + 8);
  if (sVar1 != -1) {
    iVar3 = (*(int **)(param_1 + 4))[0x14] + -1;
    iVar4 = (int)*(short *)(param_4 + 10);
    if (iVar3 < *(short *)(param_4 + 10)) {
      iVar4 = iVar3;
    }
    if (-1 < iVar4) {
      while( true ) {
        iVar3 = FUN_00e6cea0((int)sVar1,iVar4);
        if ((iVar3 != 0) && (uVar2 = *(ushort *)(iVar3 + 10), uVar2 != 0)) break;
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) {
          return 0;
        }
      }
      if (-1 < iVar4) {
        *param_2 = iVar4;
        *param_3 = (uint)uVar2 - param_5;
        return 1;
      }
    }
  }
  return 0;
}

// 00E72880  Event::ActorDataHolder::vf10  size=22  [class]
bool __thiscall Event::ActorDataHolder::vf10(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  return param_2 == 0;
}

// 00E72900  Event::BgmDataHolder::vf14  size=21  [class]
undefined4 Event::BgmDataHolder::vf14(void)

{
  return 2;
}

// 00E72980  Event::CameraDataHolder::vf14  size=24  [class]
undefined4 Event::CameraDataHolder::vf14(void)

{
  return 2;
}

// 00E729A0  Event::CameraDataHolder::vf44  size=56  [class]
float10 __thiscall Event::CameraDataHolder::vf44(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 * 0x7c + *(int *)(param_1 + 0x14);
  if (((iVar1 != 0) && (param_3 != 0)) && (param_3 != 1)) {
    if (param_3 != 2) {
      return (float10)-1.0;
    }
    return (float10)*(ushort *)(iVar1 + 0x20);
  }
  return (float10)0;
}

// 00E729E0  Event::CameraDataHolder::vf48  size=160  [class]
float10 __thiscall Event::CameraDataHolder::vf48(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x7c + *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
LAB_00e729ed:
    return (float10)0;
  }
  if (param_3 == 0) {
    if (*(char *)(iVar2 + 0x1c) == '\x01') {
      iVar1 = FUN_00e6f8e0(iVar2);
      if (iVar1 != 0) {
        return (float10)((float)*(ushort *)(iVar1 + 10) - *(float *)(iVar2 + 0x50));
      }
      goto LAB_00e729ed;
    }
    if (*(char *)(iVar2 + 0x1c) == '\x04') {
      iVar2 = FUN_009324d0(0,*(undefined4 *)(iVar2 + 0x3c));
      return (float10)iVar2;
    }
  }
  else if (param_3 != 1) {
    if (param_3 != 2) {
      return (float10)-1.0;
    }
    return (float10)((uint)*(ushort *)(iVar2 + 0x22) + (uint)*(ushort *)(iVar2 + 0x20));
  }
  return (float10)*(ushort *)(iVar2 + 0x20);
}

// 00E72A90  FUN_00e72a90  size=591  [between]
undefined4 __thiscall FUN_00e72a90(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CommonFlag");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x18);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_0164fcc8);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1c);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InterType");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1d);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AccType");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1e);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InterTarget");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1f);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"KeepFrame");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x20);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InterFrame");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x22);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AccRate");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DisplaceRate");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"JiggleSpeed");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x30);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"HandJiggleRate");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x34);
    }
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RollJiggleRate");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x38);
    }
    switch(*(undefined1 *)(param_1 + 0x1c)) {
    case 0:
      uVar2 = FUN_00e6d7c0(param_2,param_3);
      return uVar2;
    case 1:
      uVar2 = FUN_00e6d9e0(param_2,param_3);
      return uVar2;
    case 2:
    case 3:
      return 1;
    case 4:
      uVar2 = FUN_00e6db40(param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

// 00E72D00  Event::ControlDataHolder::vf14  size=8  [class]
undefined4 Event::ControlDataHolder::vf14(void)

{
  return 2;
}

// 00E72D10  Event::ControlDataHolder::vf48  size=92  [class]
float10 __thiscall Event::ControlDataHolder::vf48(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0xc0 + *(int *)(param_1 + 0x14);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int *)(iVar1 + 0x18) == 1)) {
    switch(*(undefined1 *)(iVar1 + 0x1c)) {
    case 0:
      return (float10)*(ushort *)(iVar1 + 0x1e);
    case 2:
      return (float10)*(ushort *)(iVar1 + 0x1e);
    case 3:
      return (float10)*(ushort *)(iVar1 + 0x1e);
    }
  }
  return (float10)0;
}

// 00E72E30  FUN_00e72e30  size=258  [between]
undefined4 __thiscall FUN_00e72e30(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UnionType");
    if (iVar1 == -1) {
      iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ProgressAct");
      if (iVar1 == -1) {
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      else {
        (**(code **)(*param_2 + 0xf0))(iVar1,&stack0xfffffff8);
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    }
    else {
      (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x18);
    }
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 0:
      uVar2 = FUN_00e6dbd0(param_2,param_3);
      return uVar2;
    case 1:
      uVar2 = FUN_00e6dcb0(param_2,param_3);
      return uVar2;
    case 2:
      uVar2 = FUN_00e6dd60(param_2,param_3);
      return uVar2;
    case 3:
      uVar2 = FUN_00e6dda0(param_2,param_3);
      return uVar2;
    case 4:
      uVar2 = FUN_00e6de90(param_2,param_3);
      return uVar2;
    case 5:
      uVar2 = FUN_00e6e090(param_2,param_3);
      return uVar2;
    default:
      return 0;
    }
  }
  return 0;
}

// 00E72F50  FUN_00e72f50  size=77  [between]
void __fastcall FUN_00e72f50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((*(char *)(param_1 + 10) != '<') && (*(char *)(param_1 + 10) == '\x1e')) &&
     ((**(int **)(param_1 + 4) == 1 || (**(int **)(param_1 + 4) == 2)))) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = *(int *)(param_1 + 0x10);
        iVar1 = iVar5 * 4;
        uVar4 = FUN_00fdbc60();
        iVar5 = iVar5 + 1;
        *(undefined4 *)(iVar3 + iVar1) = uVar4;
      } while (iVar5 < iVar2);
    }
    *(undefined1 *)(param_1 + 10) = 0x3c;
  }
  return;
}

// 00E72FA0  Event::CutDataHolder::vf0C  size=89  [class]
void __fastcall Event::CutDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x10),0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0x3c;
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  return;
}

// 00E73000  Event::EffectDataHolder::vf14  size=24  [class]
undefined4 Event::EffectDataHolder::vf14(void)

{
  return 2;
}

// 00E73020  FUN_00e73020  size=681  [between]
undefined4 __thiscall FUN_00e73020(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PartsAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x19);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RateAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1a);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SstAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1b);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CombineAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffResourceKind");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1d);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffCode");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1e);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotSeqAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1f);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffModeAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"VanishTime");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 0x22);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffPartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x2c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffResourceNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffEstId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SstRoomNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SstAreaNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x24);
  }
  return 1;
}

// 00E732D0  Event::GraphicDataHolder::vf14  size=24  [class]
undefined4 Event::GraphicDataHolder::vf14(void)

{
  return 2;
}

// 00E732F0  Event::GraphicDataHolder::vf44  size=56  [class]
float10 __thiscall Event::GraphicDataHolder::vf44(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x38;
  if ((iVar1 != 0) &&
     (((*(int *)(iVar1 + 0x18) != 0 || (param_3 != 0)) || (*(char *)(iVar1 + 0x1c) == '\0')))) {
    return (float10)-1.0;
  }
  return (float10)0;
}

// 00E73330  Event::GraphicDataHolder::vf48  size=71  [class]
float10 __thiscall Event::GraphicDataHolder::vf48(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x38;
  if (iVar1 == 0) {
    return (float10)0;
  }
  if (((*(int *)(iVar1 + 0x18) == 0) && (param_3 == 0)) && (*(char *)(iVar1 + 0x1c) != '\0')) {
    return (float10)(int)*(short *)(iVar1 + 0x1e);
  }
  return (float10)-1.0;
}

// 00E733B0  FUN_00e733b0  size=135  [between]
undefined4 __thiscall FUN_00e733b0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"UnionType");
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd8))(iVar1,(int *)(param_1 + 0x18));
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        uVar2 = FUN_00e6e4a0(param_2,param_3);
        return uVar2;
      }
      if (iVar1 == 1) {
        uVar2 = FUN_00e6e510(param_2,param_3);
        return uVar2;
      }
      if (iVar1 == 2) {
        uVar2 = FUN_00e6e620(param_2,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

// 00E73480  FUN_00e73480  size=165  [between]
undefined4 __thiscall FUN_00e73480(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_0164fcc8), iVar1 != -1))
  {
    (**(code **)(*param_2 + 0xd8))(iVar1,(undefined4 *)(param_1 + 0x18));
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 0:
      uVar2 = FUN_00e68cc0(param_2,param_3);
      return uVar2;
    case 1:
      uVar2 = FUN_00e6e850(param_2,param_3);
      return uVar2;
    case 2:
      uVar2 = FUN_00e6e9d0(param_2,param_3);
      return uVar2;
    case 3:
      uVar2 = FUN_00e6ea40(param_2,param_3);
      return uVar2;
    default:
      return 0;
    }
  }
  return 0;
}

// 00E73540  FUN_00e73540  size=1408  [between]
undefined4 __thiscall FUN_00e73540(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosInterAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1d);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosInterAccType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1e);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosInterAccRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x58);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosInterDisplaceRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x5c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ScaleAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x1f);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"NullAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x21);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"HideAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x22);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SequenceAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x23);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CollisionAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CollisionType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x25);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotResourceKind");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x26);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotResourceNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x28);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotObjId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 0x2c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionNo0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x30);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionNo1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x32);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionNo2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionNo3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x36);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SequenceNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x48);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InterFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x4c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"StartFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x50);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotionSpeed");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x54);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CollisionNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x60);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EventRno");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 100);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosObjId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1 + 0x68);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PosSubNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x6c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016a3dd0);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 0x70);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016a35a0);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 0x7c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Scale");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xc4))(iVar1,param_1 + 0x88);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"BlendPos");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x110))(iVar1,param_1 + 0x38,0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"BlendRate");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x110))(iVar1,param_1 + 0x44,3);
  }
  return 1;
}

// 00E73B00  FUN_00e73b00  size=95  [between]
undefined4 __thiscall FUN_00e73b00(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_0164fcc8);
    if (iVar1 != -1) {
      (**(code **)(*param_2 + 0xd8))(iVar1,(int *)(param_1 + 0x18));
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar2 = FUN_00e68f60(param_2,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}

// 00E73B60  Event::SeDataHolder::vf14  size=21  [class]
undefined4 Event::SeDataHolder::vf14(void)

{
  return 2;
}

// 00E73D50  Event::VibDataHolder::vf14  size=8  [class]
undefined4 Event::VibDataHolder::vf14(void)

{
  return 2;
}

// 00E73D60  Event::UiDataHolder::vf14  size=8  [class]
undefined4 Event::UiDataHolder::vf14(void)

{
  return 2;
}

// 00E73D70  FUN_00e73d70  size=119  [between]
void __thiscall FUN_00e73d70(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = (int)*(short *)(param_2 + 8);
  if ((((-1 < iVar1) && (iVar1 < param_1[5])) && (iVar1 = iVar1 * 0x50 + param_1[3], iVar1 != 0)) &&
     ((*(int *)(*param_1 + 0x1a84) == 0 || (*(int *)(*param_1 + 0x1a84) == 2)))) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      iVar3 = *(int *)(iVar1 + 0x20);
      if (iVar3 == 0) {
        return;
      }
      if ((*(uint *)(iVar1 + 0x2c) & 2) != 0) {
        return;
      }
      uVar2 = *(uint *)(iVar1 + 0x2c) | 2;
      uVar4 = 1;
    }
    else {
      if (*(char *)(param_2 + 0x18) != '\x02') {
        return;
      }
      iVar3 = *(int *)(iVar1 + 0x20);
      if (iVar3 == 0) {
        return;
      }
      if ((*(uint *)(iVar1 + 0x2c) & 2) == 0) {
        return;
      }
      uVar2 = *(uint *)(iVar1 + 0x2c) & 0xfffffffd;
      uVar4 = 0;
    }
    *(uint *)(iVar1 + 0x2c) = uVar2;
    FUN_009321a0(iVar3,uVar4);
    *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
  }
  return;
}

// 00E73DF0  Event::ActorWork::updateAttach_3  size=333  [class]
void __fastcall Event::ActorWork::updateAttach_3(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    if (0 < param_1[5]) {
      piVar5 = (int *)(param_1[3] + 0xc);
      local_20 = param_1[5];
      do {
        if (((((piVar5[5] != 0) && (*piVar5 != 0)) && (piVar5[1] != 0)) &&
            (((*(byte *)(piVar5 + 8) & 4) == 0 && (*(int *)(*piVar5 + 0x20) != 0)))) &&
           ((local_1c = FUN_00a7c800(), local_1c != 0 && (local_24 = FUN_00a7c800(), local_24 != 0))
           )) {
          local_18 = piVar5[2];
          iVar4 = 0;
          if (0 < local_18) {
            do {
              iVar1 = piVar5[1] + iVar4 * 8;
              iVar2 = FUN_00a12210(*(undefined4 *)(piVar5[1] + iVar4 * 8));
              iVar3 = FUN_00a12210(*(undefined4 *)(iVar1 + 4));
              if ((iVar2 == 0) || (iVar3 == 0)) {
                FUN_009f8ea0(local_14,0x10,*(undefined4 *)(piVar5[5] + 0x24),0);
                FUN_00dd5650(&DAT_016cf930,local_14,*(undefined4 *)(iVar1 + 4));
              }
              else {
                *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
                FID_conflict__memcpy((void *)(iVar3 + 0x10),(void *)(iVar2 + 0x10),0x40);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_18);
          }
          switchD_0080dbae::default();
        }
        piVar5 = piVar5 + 0x14;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      local_20 = 0;
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

// 00E73F50  Event::ActorWork::createEntity  size=631  [class]
void __thiscall Event::ActorWork::createEntity(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_b4 [4];
  undefined1 local_b0 [80];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_24 [16];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  iVar3 = *param_1;
  iVar5 = *(int *)(iVar3 + 0x1a84);
  piVar6 = (int *)param_1[7];
  if (*piVar6 == 4) {
    iVar5 = piVar6[1];
    sVar1 = FUN_00e86520(iVar5,piVar6[2]);
    iVar2 = (int)sVar1;
    if (((iVar2 < 0) || (*(int *)(iVar3 + 0x84) <= iVar2)) ||
       (iVar3 = iVar2 * 0x50 + *(int *)(iVar3 + 0x7c), iVar3 == 0)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x20);
    }
    if (iVar3 == 0) {
      FUN_009f8ea0(local_24,0x10,iVar5,0);
      FUN_00dd5650(&DAT_016d0030,local_24);
      __security_check_cookie(local_14 ^ (uint)auStack_b4);
      return;
    }
    iVar3 = FUN_00932120(param_1[6],0,iVar3);
  }
  else {
    FUN_0040b190();
    puVar4 = (undefined4 *)FUN_00e9feb0();
    local_60 = *puVar4;
    local_5c = puVar4[1];
    local_58 = puVar4[2];
    iVar3 = FUN_00932070(param_1[6],param_1[7],local_b0,iVar5 != 0);
  }
  if (iVar3 == 0) {
    FUN_009f8ea0(local_24,0x10,param_1[6],0);
    FUN_00dd5650(&DAT_016cfff0,local_24);
    __security_check_cookie(local_14 ^ (uint)auStack_b4);
    return;
  }
  if (param_2 == 1) {
    iVar5 = *(int *)(*param_1 + 0x84);
    iVar2 = 0;
    if (0 < iVar5) {
      piVar6 = (int *)(*(int *)(*param_1 + 0x7c) + 0x20);
      do {
        if (*piVar6 == iVar3) {
          if (iVar2 != -1) {
            FUN_00dd5650(&DAT_016cffa8);
            __security_check_cookie(local_14 ^ (uint)auStack_b4);
            return;
          }
          break;
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 0x14;
      } while (iVar2 < iVar5);
    }
  }
  param_1[8] = iVar3;
  iVar3 = FUN_00a7c890();
  param_1[9] = iVar3;
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    if ((param_1[8] != 0) && ((param_1[0xb] & 2U) == 0)) {
      param_1[0xb] = param_1[0xb] | 2;
      FUN_009321a0(param_1[8],1);
      param_1[10] = -1;
    }
    if ((param_1[8] != 0) && ((param_1[0xb] & 0x10U) == 0)) {
      param_1[0xb] = param_1[0xb] | 0x10;
      FUN_009333b0(param_1[8],0,0,0xffffffff,0);
    }
    FUN_00e6f570();
  }
  iVar3 = FUN_00a7c800();
  param_1[0xc] = *(int *)(iVar3 + 0x50);
  param_1[0xd] = *(int *)(iVar3 + 0x54);
  param_1[0xe] = *(int *)(iVar3 + 0x58);
  param_1[0xf] = *(int *)(iVar3 + 0x90);
  param_1[0x10] = *(int *)(iVar3 + 0x94);
  param_1[0x11] = *(int *)(iVar3 + 0x98);
  iVar5 = FUN_00932350(iVar3);
  param_1[0x13] = iVar5;
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    FUN_00a09ce0(iVar3,0xffffffff);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

// 00E741D0  FUN_00e741d0  size=197  [between]
void __fastcall FUN_00e741d0(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 0x334) = 0;
    param_1[9] = 0;
  }
  if (param_1[8] != 0) {
    if ((*(byte *)(param_1 + 0xb) & 0x20) != 0) {
      uVar1 = FUN_00a7c800();
      FUN_00932330(uVar1,param_1[0x13]);
    }
    if ((param_1[8] != 0) && ((param_1[0xb] & 2U) != 0)) {
      param_1[0xb] = param_1[0xb] & 0xfffffffd;
      FUN_009321a0(param_1[8],0);
      param_1[10] = -1;
    }
    if ((param_1[8] != 0) && ((param_1[0xb] & 0x10U) != 0)) {
      param_1[0xb] = param_1[0xb] & 0xffffffef;
      FUN_009333b0(param_1[8],1,0,0xffffffff,1);
    }
    uVar1 = 0;
    if (((*(uint *)(*param_1 + 0x1a68) & 0x20000000) == 0) && (*(int *)(*param_1 + 0x1a84) != 0)) {
      uVar1 = 1;
    }
    if (*(int *)param_1[7] != 4) {
      FUN_00932150(param_1[8],(int *)param_1[7],uVar1);
    }
    param_1[8] = 0;
  }
  return;
}

// 00E742A0  FUN_00e742a0  size=181  [between]
undefined4 __thiscall FUN_00e742a0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == -1) {
    return 0;
  }
  iVar1 = FUN_00e6cea0(*(int *)(param_1 + 8),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && ((*(uint *)(param_1 + 0x2c) & 4) != 0)) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffb;
    FUN_009322d0(*(int *)(param_1 + 0x20),0);
  }
  FUN_00932290(*(undefined4 *)(param_1 + 0x20),iVar1);
  FUN_009322c0(*(undefined4 *)(param_1 + 0x20),iVar1,0);
  Animation::Unit::setAnimation(iVar1,"event",0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x334) = 2;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 8;
  return 1;
}

// 00E74360  FUN_00e74360  size=206  [between]
undefined4 __fastcall FUN_00e74360(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  if (((uVar1 & 1) == 0) || ((*(byte *)(*(int *)(param_1 + 0xc) + 0x2c) & 4) != 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && ((uVar1 & 4) != 0)) {
    *(uint *)(param_1 + 0x2c) = uVar1 & 0xfffffffb;
    FUN_009322d0(*(int *)(param_1 + 0x20),0);
  }
  iVar2 = FUN_00e355e0(&DAT_0169f63c);
  if (iVar2 != 0) {
    FUN_00932290(*(undefined4 *)(param_1 + 0x20),iVar2);
    FUN_009322c0(*(undefined4 *)(param_1 + 0x20),iVar2,0);
    Animation::Unit::setAnimation(iVar2,&DAT_0169f63c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 8;
    return 1;
  }
  FUN_00932290(*(undefined4 *)(param_1 + 0x20),0);
  FUN_009322c0(*(undefined4 *)(param_1 + 0x20),0,0);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff7;
  return 1;
}

// 00E74430  FUN_00e74430  size=60  [between]
void __fastcall FUN_00e74430(int param_1)

{
  if ((*(int *)(param_1 + 0x20) != 0) && ((*(uint *)(param_1 + 0x2c) & 4) == 0)) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
    FUN_009322d0(*(int *)(param_1 + 0x20),1);
  }
  FUN_009322c0(*(undefined4 *)(param_1 + 0x20),0,0);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff7;
  return;
}

// 00E744D0  FUN_00e744d0  size=448  [between]
undefined4 __thiscall FUN_00e744d0(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int local_10;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  iVar4 = *param_2;
  iVar5 = param_2[3];
  local_10 = 0;
  if (0 < iVar5) {
    iVar8 = param_2[2] << 4;
    do {
      piVar11 = (int *)(*(int *)(iVar3 + 0x78) + iVar8);
      iVar1 = *(int *)(iVar3 + 0x8c) + *(int *)(*(int *)(iVar3 + 0x78) + 8 + iVar8) * 8;
      sVar6 = FUN_00e6ce20(iVar4,param_3);
      iVar7 = (int)sVar6;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (iVar7 < *(int *)(iVar2 + 0x84)) {
        iVar7 = iVar7 * 0x50 + *(int *)(iVar2 + 0x7c);
      }
      else {
        iVar7 = 0;
      }
      piVar10 = *(int **)(iVar3 + 0x50);
      iVar9 = 0;
      if (0 < *(int *)(iVar3 + 0x58)) {
        do {
          if ((((piVar10[3] != 0) && (*piVar10 == *piVar11)) && (piVar10[4] == iVar4)) &&
             ((piVar10[5] == param_3 && (piVar10[6] == piVar11[1])))) {
            if (iVar9 != -1) {
              if (iVar9 < 0) {
                iVar9 = 0;
              }
              else if (iVar9 < *(int *)(iVar2 + 0x84)) {
                iVar9 = iVar9 * 0x50 + *(int *)(iVar2 + 0x7c);
              }
              else {
                iVar9 = 0;
              }
              *(int *)(iVar9 + 0xc) = iVar7;
              *(int *)(iVar9 + 0x10) = iVar1;
              iVar1 = piVar11[3];
              *(uint *)(iVar9 + 0x2c) = *(uint *)(iVar9 + 0x2c) | 1;
              *(int *)(iVar9 + 0x14) = iVar1;
              *(int *)(iVar9 + 0x18) = *piVar11;
              *(undefined **)(iVar9 + 0x1c) = &DAT_01dd9e80;
              goto LAB_00e745fe;
            }
            break;
          }
          iVar9 = iVar9 + 1;
          piVar10 = piVar10 + 0x19;
        } while (iVar9 < *(int *)(iVar3 + 0x58));
      }
      if (*param_4 == param_1[5]) {
        FUN_00dd5650(&DAT_016d0080);
        return 0;
      }
      piVar10 = (int *)(*param_4 * 0x50 + param_1[3]);
      *piVar10 = iVar2;
      piVar10[2] = -1;
      piVar10[10] = -1;
      piVar10[5] = 0;
      piVar10[7] = 0;
      piVar10[0xb] = 0;
      piVar10[1] = iVar3;
      piVar10[3] = iVar7;
      piVar10[4] = iVar1;
      piVar10[5] = piVar11[3];
      piVar10[0xb] = 1;
      piVar10[6] = *piVar11;
      piVar10[7] = (int)&DAT_01dd9e80;
      Event::ActorWork::createEntity(0);
      *param_4 = *param_4 + 1;
LAB_00e745fe:
      local_10 = local_10 + 1;
      iVar8 = iVar8 + 0x10;
    } while (local_10 < iVar5);
  }
  return 1;
}

// 00E746E0  FUN_00e746e0  size=191  [between]
undefined4 __fastcall FUN_00e746e0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  uVar1 = param_1[2];
  if (uVar1 != 0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar6 = -(uint)((int)((ulonglong)uVar1 * 0x1a0 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x1a0)
    ;
    puVar5 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar6) | uVar6 + 0x10,&DAT_01b7bd48);
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar1;
      puVar5 = puVar5 + 4;
      puVar8 = puVar5;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        *puVar8 = 0;
        puVar8[1] = 0;
        FUN_00e240c0();
        puVar8 = puVar8 + 0x68;
      }
    }
    iVar4 = param_1[2];
    iVar7 = 0;
    param_1[3] = puVar5;
    if (0 < iVar4) {
      do {
        FUN_00e6ff90(uVar2,uVar3,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar4);
    }
  }
  return 1;
}

// 00E747A0  FUN_00e747a0  size=174  [between]
void __fastcall FUN_00e747a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      if ((DAT_018d0268 != 0) && (*(int *)(iVar4 + 0x18c + iVar1) != 0)) {
        iVar2 = *(int *)(*(int *)(iVar4 + iVar1) + 8);
        FUN_00932430(*(undefined2 *)(iVar2 + 6),(int)*(char *)(iVar2 + 8),
                     *(int *)(iVar4 + iVar1) + 0x1a70);
        *(undefined4 *)(iVar4 + 0x18c + iVar1) = 0;
      }
      *(undefined4 *)(iVar4 + 4 + iVar1) = 0;
      *(undefined4 *)(iVar4 + iVar1) = 0;
      iVar4 = iVar4 + 0x1a0;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -0x10);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      FUN_00e29e30();
    }
    FUN_00dd4940(iVar3 + -0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E74860  Event::CameraModule::applyCameraParam  size=89  [class]
void __thiscall
Event::CameraModule::applyCameraParam(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) <= param_2) {
    FUN_00dd5650(&DAT_016d00f0,param_2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (DAT_018d0268 != 0) {
    FUN_00e84120(param_3);
    *(undefined4 *)(param_2 * 0x1a0 + iVar1 + 0x180) = param_4;
    FUN_009323a0(param_3,param_4);
  }
  return;
}

// 00E748E0  FUN_00e748e0  size=42  [between]
void FUN_00e748e0(undefined4 param_1,int param_2)

{
  FUN_00e71a60(*(undefined1 *)(param_2 + 0x1e),param_1,*(undefined4 *)(param_2 + 0x24),
               *(undefined4 *)(param_2 + 0x28));
  return;
}

// 00E74960  FUN_00e74960  size=97  [between]
int FUN_00e74960(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0x60) != '\0') {
    sVar1 = FUN_00e86520(*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x68));
    iVar2 = (int)sVar1;
    if ((((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x84))) &&
        (iVar2 = iVar2 * 0x50 + *(int *)(param_1 + 0x7c), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x20) != 0)) {
      iVar2 = FUN_00a7c800();
      if (iVar2 != 0) {
        if (-1 < *(int *)(param_2 + 0x6c)) {
          iVar2 = FUN_00a12210(*(int *)(param_2 + 0x6c));
        }
        return iVar2;
      }
    }
  }
  return 0;
}

// 00E749D0  FUN_00e749d0  size=93  [between]
undefined4 FUN_00e749d0(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = *(char *)(param_2 + 0x61);
  if (cVar5 == '\x03') {
    cVar5 = *(char *)(param_2 + 0x60);
    uVar4 = *(undefined4 *)(param_2 + 100);
    uVar2 = *(undefined4 *)(param_2 + 0x68);
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0x70);
    uVar2 = *(undefined4 *)(param_2 + 0x74);
  }
  if (cVar5 != '\0') {
    sVar1 = FUN_00e86520(uVar4,uVar2);
    iVar3 = (int)sVar1;
    if ((((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x84))) &&
        (iVar3 = iVar3 * 0x50 + *(int *)(param_1 + 0x7c), iVar3 != 0)) &&
       (*(int *)(iVar3 + 0x20) != 0)) {
      uVar4 = FUN_00a7c800();
      return uVar4;
    }
  }
  return 0;
}

// 00E74A70  FUN_00e74a70  size=460  [between]
void FUN_00e74a70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float10 fVar1;
  
  FUN_00e71b30(param_1,param_2,param_2 + 0x50,param_2 + 0xa0,param_2 + 0xf0,param_3,param_4);
  FUN_00e71b30(param_1 + 0x10,param_2 + 0x10,param_2 + 0x60,param_2 + 0xb0,param_2 + 0x100,param_3,
               param_4);
  FUN_00e71b30(param_1 + 0x20,param_2 + 0x20,param_2 + 0x70,param_2 + 0xc0,param_2 + 0x110,param_3,
               param_4);
  fVar1 = (float10)FUN_00e6b810(*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x80),
                                *(undefined4 *)(param_2 + 0xd0),*(undefined4 *)(param_2 + 0x120),
                                param_3,param_4);
  *(float *)(param_1 + 0x30) = (float)fVar1;
  fVar1 = (float10)FUN_00e6b810(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x84),
                                *(undefined4 *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0x124),
                                param_3,param_4);
  *(float *)(param_1 + 0x34) = (float)fVar1;
  fVar1 = (float10)FUN_00e6b810(*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x94),
                                *(undefined4 *)(param_2 + 0xe4),*(undefined4 *)(param_2 + 0x134),
                                param_3,param_4);
  *(float *)(param_1 + 0x44) = (float)fVar1;
  fVar1 = (float10)FUN_00e6b810(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x98),
                                *(undefined4 *)(param_2 + 0xe8),*(undefined4 *)(param_2 + 0x138),
                                param_3,param_4);
  *(float *)(param_1 + 0x48) = (float)fVar1;
  fVar1 = (float10)FUN_00e6b810(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x90),
                                *(undefined4 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0x130),
                                param_3,param_4);
  *(float *)(param_1 + 0x40) = (float)fVar1;
  return;
}

// 00E74C40  FUN_00e74c40  size=508  [between]
void FUN_00e74c40(float *param_1,float *param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  FUN_00e6f970(&local_40,local_20,param_2,param_3);
  FUN_00e6f970(&local_50,&local_60,param_2 + 0x14,param_3);
  fVar2 = (float10)FUN_00e6fbe0(&local_30,local_20,&local_60,param_3,param_4);
  if ((float10)0 != fVar2) {
    local_60 = param_4 * (local_50 - local_40) + local_40;
    local_5c = local_3c + param_4 * (local_4c - local_3c);
    local_58 = local_38 + param_4 * (local_48 - local_38);
    *param_1 = (param_2[0x14] - *param_2) * param_4 + *param_2;
    param_1[1] = (param_2[0x15] - param_2[1]) * param_4 + param_2[1];
    param_1[2] = (param_2[0x16] - param_2[2]) * param_4 + param_2[2];
    param_1[3] = (param_2[0x17] - param_2[3]) * param_4 + param_2[3];
    param_1[8] = (param_2[0x1c] - param_2[8]) * param_4 + param_2[8];
    param_1[9] = (param_2[0x1d] - param_2[9]) * param_4 + param_2[9];
    param_1[10] = (param_2[0x1e] - param_2[10]) * param_4 + param_2[10];
    param_1[0xb] = (param_2[0x1f] - param_2[0xb]) * param_4 + param_2[0xb];
    param_1[4] = local_60 + local_30 + *param_1;
    param_1[5] = local_5c + local_2c + param_1[1];
    param_1[6] = local_58 + local_28 + param_1[2];
    param_1[7] = 1.0;
    fVar1 = param_2[0xc];
    fVar2 = (float10)FUN_00ddba30(param_2[0x20] - fVar1);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 * (float10)param_4) + fVar1);
    param_1[0xc] = (float)fVar2;
    fVar1 = 1.0 - param_4;
    param_1[0xd] = param_2[0xd] * fVar1 + param_2[0x21] * param_4;
    param_1[0x11] = param_2[0x11] * fVar1 + param_2[0x25] * param_4;
    param_1[0x12] = param_2[0x12] * fVar1 + param_2[0x26] * param_4;
    param_1[0x10] = fVar1 * param_2[0x10] + param_2[0x24] * param_4;
    return;
  }
  FUN_00e697d0(param_1,param_2,param_4);
  return;
}

// 00E74E40  FUN_00e74e40  size=518  [between]
void FUN_00e74e40(float *param_1,int param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  float10 fVar2;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  FUN_00e6f970(&local_40,local_20,param_2,param_3);
  FUN_00e6f970(&local_50,&local_60,param_2 + 0x50,param_3);
  fVar2 = (float10)FUN_00e6fbe0(&local_30,local_20,&local_60,param_3,param_4);
  if ((float10)0 != fVar2) {
    local_60 = param_4 * (local_50 - local_40) + local_40;
    local_5c = local_3c + param_4 * (local_4c - local_3c);
    local_58 = local_38 + param_4 * (local_48 - local_38);
    param_1[4] = (*(float *)(param_2 + 0x60) - *(float *)(param_2 + 0x10)) * param_4 +
                 *(float *)(param_2 + 0x10);
    param_1[5] = (*(float *)(param_2 + 100) - *(float *)(param_2 + 0x14)) * param_4 +
                 *(float *)(param_2 + 0x14);
    param_1[6] = (*(float *)(param_2 + 0x68) - *(float *)(param_2 + 0x18)) * param_4 +
                 *(float *)(param_2 + 0x18);
    param_1[7] = (*(float *)(param_2 + 0x6c) - *(float *)(param_2 + 0x1c)) * param_4 +
                 *(float *)(param_2 + 0x1c);
    param_1[8] = (*(float *)(param_2 + 0x70) - *(float *)(param_2 + 0x20)) * param_4 +
                 *(float *)(param_2 + 0x20);
    param_1[9] = (*(float *)(param_2 + 0x74) - *(float *)(param_2 + 0x24)) * param_4 +
                 *(float *)(param_2 + 0x24);
    param_1[10] = (*(float *)(param_2 + 0x78) - *(float *)(param_2 + 0x28)) * param_4 +
                  *(float *)(param_2 + 0x28);
    param_1[0xb] = (*(float *)(param_2 + 0x7c) - *(float *)(param_2 + 0x2c)) * param_4 +
                   *(float *)(param_2 + 0x2c);
    *param_1 = param_1[4] - (local_60 + local_30);
    param_1[1] = param_1[5] - (local_5c + local_2c);
    param_1[2] = param_1[6] - (local_58 + local_28);
    param_1[3] = 1.0;
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x80) - fVar1);
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 * (float10)param_4) + fVar1);
    param_1[0xc] = (float)fVar2;
    fVar1 = 1.0 - param_4;
    param_1[0xd] = *(float *)(param_2 + 0x34) * fVar1 + *(float *)(param_2 + 0x84) * param_4;
    param_1[0x11] = *(float *)(param_2 + 0x44) * fVar1 + *(float *)(param_2 + 0x94) * param_4;
    param_1[0x12] = *(float *)(param_2 + 0x48) * fVar1 + *(float *)(param_2 + 0x98) * param_4;
    param_1[0x10] = fVar1 * *(float *)(param_2 + 0x40) + *(float *)(param_2 + 0x90) * param_4;
    return;
  }
  FUN_00e697d0(param_1,param_2,param_4);
  return;
}

// 00E75050  FUN_00e75050  size=60  [between]
int __thiscall FUN_00e75050(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    iVar1 = FUN_00e846d0(param_2);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x40;
    }
    return iVar1;
  }
  if (*(char *)(param_2 + 0x1f) != '\x02') {
    iVar1 = FUN_00e84670(param_2);
    return iVar1;
  }
  return *(int *)(param_1 + 0x188);
}

// 00E75120  FUN_00e75120  size=233  [between]
void __thiscall FUN_00e75120(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (DAT_018d0268 != 0) {
    FUN_00e701f0(&local_50,param_2);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x40);
    if (DAT_018d0268 != 0) {
      *(undefined4 *)(param_1 + 0x140) = local_50;
      *(undefined4 *)(param_1 + 0x144) = local_4c;
      *(undefined4 *)(param_1 + 0x148) = local_48;
      *(undefined4 *)(param_1 + 0x14c) = local_44;
      *(undefined4 *)(param_1 + 0x150) = local_40;
      *(undefined4 *)(param_1 + 0x154) = local_3c;
      *(undefined4 *)(param_1 + 0x158) = local_38;
      *(undefined4 *)(param_1 + 0x15c) = local_34;
      *(undefined4 *)(param_1 + 0x160) = local_30;
      *(undefined4 *)(param_1 + 0x164) = local_2c;
      *(undefined4 *)(param_1 + 0x168) = local_28;
      *(undefined4 *)(param_1 + 0x16c) = local_24;
      *(undefined4 *)(param_1 + 0x170) = local_20;
      *(undefined4 *)(param_1 + 0x174) = local_1c;
      *(undefined4 *)(param_1 + 0x180) = param_3;
      FUN_009323a0(&local_50,param_3);
    }
  }
  return;
}

// 00E75320  FUN_00e75320  size=121  [between]
undefined4 __thiscall FUN_00e75320(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3 + 0x164;
  param_1[0x16] = 0xbf800000;
  param_1[0x1e] = 0xbf800000;
  param_1[0x17] = 0xbf800000;
  param_1[0x1f] = 0xbf800000;
  param_1[0x18] = 0xbf800000;
  param_1[0x20] = 0xbf800000;
  param_1[0x19] = 0xbf800000;
  param_1[0x21] = 0xbf800000;
  param_1[0x1a] = 0xbf800000;
  param_1[0x22] = 0xbf800000;
  param_1[0x1b] = 0xbf800000;
  param_1[0x23] = 0xbf800000;
  param_1[0x1c] = 0xbf800000;
  param_1[0x24] = 0xbf800000;
  param_1[0x1d] = 0xbf800000;
  param_1[0x25] = 0xbf800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return 1;
}

// 00E753A0  FUN_00e753a0  size=79  [between]
void __fastcall FUN_00e753a0(undefined4 *param_1)

{
  uint uVar1;
  float *pfVar2;
  
  uVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x1e);
  do {
    if (3 < uVar1) break;
    if (*pfVar2 != -1.0) {
      FUN_00932020(uVar1,0x3f800000);
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (uVar1 < 8);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00E753F0  FUN_00e753f0  size=78  [between]
undefined4 * __fastcall FUN_00e753f0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  cEspControlerEvent::cEspControlerEvent_2();
  iVar1 = 0x1f;
  do {
    cEspControler::cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  return param_1;
}

// 00E75440  FUN_00e75440  size=67  [between]
void FUN_00e75440(void)

{
  int iVar1;
  
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  iVar1 = 0x1f;
  do {
    cEspControler::~cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControlerEvent::cEspControlerEvent();
  return;
}

// 00E75490  FUN_00e75490  size=198  [between]
undefined4 __thiscall FUN_00e75490(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3 + 0x1ec;
  param_1[2] = 0;
  if (*(int *)(param_3 + 0x230) != 0) {
    thunk_FUN_00e006f0(*(undefined4 *)(param_2 + 0x1a70),*(undefined4 *)(param_2 + 0x1a74),
                       *(int *)(param_3 + 0x230),*(undefined4 *)(param_3 + 0x234));
    param_1[2] = param_1[2] | 1;
  }
  iVar2 = ((int *)param_1[1])[5];
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (0 < iVar1) {
    puVar3 = (uint *)(iVar2 + 0x28);
    do {
      *puVar3 = *puVar3 & 0xfffffffb;
      puVar3 = puVar3 + 0xf;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((DAT_01dd9ed8 == 0) && (DAT_01dd9edc == 0)) {
    FUN_00dff980(1);
  }
  DAT_01dd9ed8 = DAT_01dd9ed8 + 1;
  param_1[3] = 0;
  param_1[0x60c] = (int)(param_1 + 0x5e0);
  if ((*(int *)(param_2 + 0x1a84) == 0) && ((*(byte *)(param_1[1] + 8) & 1) != 0)) {
    iVar2 = Event::EnvManager::getSurviveEspControler(param_3);
    param_1[0x60c] = iVar2;
  }
  return 1;
}

// 00E75560  FUN_00e75560  size=215  [between]
void __fastcall FUN_00e75560(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  (**(code **)(param_1[4] + 4))();
  iVar1 = 0x20;
  piVar2 = param_1 + 0x34;
  do {
    (**(code **)(*piVar2 + 4))();
    piVar2 = piVar2 + 0x2c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  (**(code **)(param_1[0x5b4] + 4))();
  if ((param_1[1] != 0) && ((*(byte *)(param_1[1] + 8) & 1) == 0)) {
    FUN_00eaa840();
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    iVar1 = *(int *)(param_1[1] + 0x44);
    if (iVar1 != 0) {
      thunk_FUN_00e00860(*(undefined4 *)(*param_1 + 0x1a70),*(undefined4 *)(*param_1 + 0x1a74),iVar1
                         ,*(undefined4 *)(param_1[1] + 0x48));
      param_1[2] = param_1[2] & 0xfffffffe;
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  DAT_01dd9ed8 = DAT_01dd9ed8 + -1;
  if ((DAT_01dd9ed8 == 0) && (DAT_01dd9edc == 0)) {
    FUN_00dff980(0);
  }
  if (param_1[3] != 0) {
    DAT_01dd9edc = DAT_01dd9edc + -1;
    if ((0 < DAT_01dd9ed8) && (DAT_01dd9edc == 0)) {
      FUN_00dff980(1);
    }
    param_1[3] = 0;
  }
  return;
}

// 00E75640  FUN_00e75640  size=71  [between]
undefined4 __thiscall FUN_00e75640(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = (*(int **)(param_1 + 4))[5];
  iVar4 = 0;
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (((char)psVar3[9] == '\x01') && (*psVar3 == param_2)) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x1e;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E75710  FUN_00e75710  size=100  [between]
undefined4 __thiscall FUN_00e75710(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3 + 0x240;
  if (*(int *)(param_3 + 0x284) != 0) {
    FUN_00eaf9d0(*(int *)(param_3 + 0x284),param_3);
  }
  FUN_00a488d0(*(undefined4 *)(param_1[1] + 0x4c),param_3);
  param_1[2] = 0xbf800000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return 1;
}

// 00E75780  FUN_00e75780  size=1231  [between]
void FUN_00e75780(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar6 = *(int *)(param_2 + 0x10);
  if ((iVar6 != 0x90000) && (iVar6 != -1)) {
    if (iVar6 == 0x7f0000) {
      pfVar5 = (float *)FUN_00e9fe70();
      local_30 = *pfVar5;
      local_2c = pfVar5[1];
      local_28 = pfVar5[2];
      local_24 = pfVar5[3];
      pfVar5 = (float *)FUN_00e9feb0();
      fVar1 = *pfVar5;
      fVar2 = pfVar5[1];
      fVar3 = pfVar5[2];
      fVar4 = pfVar5[3];
      pfVar5 = (float *)FUN_00e9fed0();
      local_50 = *pfVar5;
      local_4c = pfVar5[1];
      local_48 = pfVar5[2];
      local_44 = pfVar5[3];
      local_40 = fVar1 - local_30;
      local_3c = fVar2 - local_2c;
      local_38 = fVar3 - local_28;
      local_34 = fVar4 - local_24;
      fVar1 = local_3c * local_3c + local_40 * local_40 + local_38 * local_38;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
      fVar1 = local_4c * local_4c + local_50 * local_50 + local_48 * local_48;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_50,&local_50);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_50 = 0.0;
        local_4c = 1.0;
        local_48 = 0.0;
      }
      local_20 = local_4c * local_38 - local_48 * local_3c;
      local_1c = local_40 * local_48 - local_50 * local_38;
      local_18 = local_3c * local_50 - local_4c * local_40;
      fVar1 = local_1c * local_1c + local_20 * local_20 + local_18 * local_18;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_20 = 0.0;
        local_1c = 1.0;
        local_18 = 0.0;
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      param_1[3] = local_24;
      fVar1 = *(float *)(param_2 + 4);
      local_30 = fVar1 * local_20 + local_30;
      *param_1 = local_30;
      local_2c = local_1c * fVar1 + local_2c;
      param_1[1] = local_2c;
      local_28 = local_18 * fVar1 + local_28;
      param_1[2] = local_28;
      local_24 = fVar1 * local_14 + local_24;
      param_1[3] = local_24;
      fVar1 = *(float *)(param_2 + 8);
      local_30 = fVar1 * local_50 + local_30;
      *param_1 = local_30;
      local_2c = local_4c * fVar1 + local_2c;
      param_1[1] = local_2c;
      local_28 = local_48 * fVar1 + local_28;
      param_1[2] = local_28;
      local_24 = fVar1 * local_44 + local_24;
      param_1[3] = local_24;
      fVar1 = *(float *)(param_2 + 0xc);
      *param_1 = fVar1 * local_40 + local_30;
      param_1[1] = local_3c * fVar1 + local_2c;
      param_1[2] = local_28 + local_38 * fVar1;
      param_1[3] = local_24 + fVar1 * local_34;
      return;
    }
    iVar6 = FUN_00e86640(iVar6,*(undefined4 *)(param_2 + 0x14));
    if (iVar6 != 0) {
      if (*(int *)(param_2 + 0x18) != -1) {
        iVar6 = FUN_00a12210(*(int *)(param_2 + 0x18));
      }
      if (iVar6 != 0) {
        D3DXVec3TransformNormal(param_1,param_2 + 4,iVar6 + 0x10);
        *param_1 = *(float *)(iVar6 + 0x40) + *param_1;
        param_1[1] = *(float *)(iVar6 + 0x44) + param_1[1];
        param_1[2] = *(float *)(iVar6 + 0x48) + param_1[2];
        return;
      }
    }
  }
  *param_1 = *(float *)(param_2 + 4);
  param_1[1] = *(float *)(param_2 + 8);
  param_1[2] = *(float *)(param_2 + 0xc);
  param_1[3] = 1.0;
  return;
}

// 00E75C50  FUN_00e75c50  size=222  [between]
void __fastcall FUN_00e75c50(int *param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  if ((((DAT_01dd9ee0 != 0) && (iVar1 = *(int *)(*param_1 + 0x1a84), iVar1 != 5)) && (iVar1 != 6))
     && (iVar1 != 4)) {
    iVar1 = ((int *)param_1[1])[5];
    iVar4 = 0;
    iVar2 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iVar2) {
      pbVar3 = (byte *)(iVar1 + 0x1d);
      while ((*(int *)(pbVar3 + -5) != 2 || ((*pbVar3 & 1) == 0))) {
        iVar4 = iVar4 + 1;
        pbVar3 = pbVar3 + 0x38;
        if (iVar2 <= iVar4) {
          return;
        }
      }
      if (iVar4 != -1) {
        iVar1 = *(int *)(param_1[1] + 0x14) + 0x1c + iVar4 * 0x38;
        cFade::set(0xffffffff,
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5))
                                     ,*(undefined1 *)(iVar1 + 6)),*(undefined1 *)(iVar1 + 7)),
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9))
                                     ,*(undefined1 *)(iVar1 + 10)),*(undefined1 *)(iVar1 + 0xb)),
                   *(undefined2 *)(*(int *)(param_1[1] + 0x14) + 0x1e + iVar4 * 0x38),0,0,0x68);
      }
    }
  }
  return;
}

// 00E75DA0  FUN_00e75da0  size=37  [between]
void __fastcall FUN_00e75da0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_00dd48d0(param_1[2],0);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00E75DD0  FUN_00e75dd0  size=74  [between]
undefined4 __fastcall FUN_00e75dd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(*param_1 + 0x74) + 0x58);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd29b0(iVar1 * 0x18,0x20,0,0);
    param_1[3] = iVar1;
    param_1[2] = iVar2;
    return 1;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  return 1;
}

// 00E75E20  FUN_00e75e20  size=296  [between]
undefined4 __thiscall
FUN_00e75e20(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_6 + 0x18) & 1) == 0) {
    iVar2 = FUN_00e355e0(param_4);
  }
  else {
    iVar2 = FUN_00e6b580(*(undefined1 *)(param_6 + 0x26),*(undefined4 *)(param_6 + 0x28));
  }
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016d0134,param_4);
    return param_3;
  }
  if (*(int *)(*(int *)*param_1 + 0x1a70) != 0) {
    cVar1 = *(char *)(((int *)*param_1)[2] + 1);
    if (cVar1 == '\x01') {
      cVar1 = '\x1e';
      goto LAB_00e75ea5;
    }
    if (cVar1 != '\x02') {
      cVar1 = FUN_00e23840(iVar2);
      goto LAB_00e75ea5;
    }
  }
  cVar1 = '<';
LAB_00e75ea5:
  uVar3 = Animation::Unit::setAnimation
                    (iVar2,param_4,param_3,*(float *)(param_6 + 0x4c) / (float)(int)cVar1,0x3f800000
                     ,param_5,*(float *)(param_6 + 0x50) / (float)(int)cVar1,
                     *(undefined4 *)(param_6 + 0x54));
  if ((*(uint *)(iVar2 + 4) < 0x20120405) || (*(char *)(iVar2 + 0x15) == '\0')) {
    cVar1 = *(char *)(*(int *)(*param_1 + 8) + 1);
    if (cVar1 == '\x01') {
      uVar4 = 0x1e;
    }
    else {
      if (cVar1 != '\x02') {
        return uVar3;
      }
      uVar4 = 0x3c;
    }
    Animation::MotReader::setFps(uVar3,uVar4);
  }
  return uVar3;
}

// 00E75F50  FUN_00e75f50  size=212  [between]
void FUN_00e75f50(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e6a2c0(local_24,0x20,param_5,param_6);
  if ((*(byte *)(param_5 + 0x18) & 1) == 0) {
    iVar2 = FUN_00e355e0(local_24);
  }
  else {
    iVar2 = FUN_00e6b580(*(undefined1 *)(param_5 + 0x26),*(undefined4 *)(param_5 + 0x28),local_24);
  }
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016d0134,local_24);
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  iVar1 = param_5 + param_6 * 3;
  Animation::Unit::setBlendAnimation
            (0xffffffff,param_2,(int)*(char *)(iVar1 + 0x38),
             (int)*(char *)(param_5 + 0x39 + param_6 * 3),(int)*(char *)(iVar1 + 0x3a),iVar2,
             local_24,param_4,param_3 | 0x400);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E76030  FUN_00e76030  size=226  [between]
void __fastcall FUN_00e76030(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_60;
  undefined1 local_50 [76];
  
  iVar5 = 0;
  param_1[8] = 0;
  iVar3 = *param_1;
  iVar1 = *(int *)(*(int *)(iVar3 + 0x74) + 0x58);
  if (0 < iVar1) {
    local_60 = 0;
    while( true ) {
      if (((iVar5 < 0) || (*(int *)(iVar3 + 0x84) <= iVar5)) ||
         (iVar2 = *(int *)(iVar3 + 0x7c) + local_60, iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x20);
      }
      if (((iVar2 != 0) && (iVar2 = FUN_00a7c890(), iVar2 != 0)) &&
         (((*(byte *)(iVar2 + 0x33c) & 1) != 0 && (iVar2 = FUN_00e2ff90(), iVar2 != 0)))) break;
      local_60 = local_60 + 0x50;
      iVar5 = iVar5 + 1;
      if (iVar1 <= iVar5) {
        return;
      }
    }
    param_1[8] = 1;
    if ((((*(byte *)(*param_1 + 0x28) & 0x20) != 0) && (DAT_018d0268 != 0)) &&
       (iVar3 = FUN_00e38930(local_50), iVar3 != 0)) {
      uVar4 = FUN_00a7c800();
      Event::CameraModule::applyCameraParam(0,local_50,uVar4);
    }
  }
  return;
}

// 00E76120  Event::MovePosAct  size=445  [class]
undefined4
Event::MovePosAct(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5
                 )

{
  int iVar1;
  float10 fVar2;
  
  switch(*(undefined1 *)(param_5 + 0x1c)) {
  case 1:
    *param_1 = *(undefined4 *)(param_5 + 0x70);
    param_1[1] = *(undefined4 *)(param_5 + 0x74);
    param_1[2] = *(undefined4 *)(param_5 + 0x78);
    param_1[3] = 0x3f800000;
    *param_2 = *(undefined4 *)(param_5 + 0x7c);
    param_2[1] = *(undefined4 *)(param_5 + 0x80);
    param_2[2] = *(undefined4 *)(param_5 + 0x84);
    param_2[3] = 0x3f800000;
    return 3;
  case 2:
    *param_1 = *(undefined4 *)(param_5 + 0x70);
    param_1[1] = *(undefined4 *)(param_5 + 0x74);
    param_1[2] = *(undefined4 *)(param_5 + 0x78);
    param_1[3] = 0x3f800000;
    return 1;
  case 3:
    *param_2 = *(undefined4 *)(param_5 + 0x7c);
    param_2[1] = *(undefined4 *)(param_5 + 0x80);
    param_2[2] = *(undefined4 *)(param_5 + 0x84);
    param_2[3] = 0x3f800000;
    return 2;
  case 4:
    FUN_00a7c800();
    *param_2 = 0;
    fVar2 = (float10)FUN_00fdecda();
    param_2[1] = (float)fVar2;
    param_2[2] = 0;
    return 2;
  case 5:
    *param_1 = *(undefined4 *)(param_4 + 0x30);
    param_1[1] = *(undefined4 *)(param_4 + 0x34);
    param_1[2] = *(undefined4 *)(param_4 + 0x38);
    param_1[3] = 0x3f800000;
    *param_2 = *(undefined4 *)(param_4 + 0x3c);
    param_2[1] = *(undefined4 *)(param_4 + 0x40);
    param_2[2] = *(undefined4 *)(param_4 + 0x44);
    param_2[3] = 0x3f800000;
    return 3;
  case 6:
    iVar1 = FUN_00e86640(*(undefined4 *)(param_5 + 0x68),*(undefined4 *)(param_5 + 0x6c));
    if (iVar1 != 0) {
      *param_1 = *(undefined4 *)(iVar1 + 0x50);
      param_1[1] = *(undefined4 *)(iVar1 + 0x54);
      param_1[2] = *(undefined4 *)(iVar1 + 0x58);
      param_1[3] = *(undefined4 *)(iVar1 + 0x5c);
      *param_2 = *(undefined4 *)(iVar1 + 0x90);
      param_2[1] = *(undefined4 *)(iVar1 + 0x94);
      param_2[2] = *(undefined4 *)(iVar1 + 0x98);
      param_2[3] = *(undefined4 *)(iVar1 + 0x9c);
      return 3;
    }
    FUN_00dd5650(&DAT_016d0150);
  }
  return 0;
}

// 00E76300  FUN_00e76300  size=126  [between]
void __thiscall FUN_00e76300(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar3 + 0x18) + -1;
  if (((iVar2 < 0) || (*(int *)(iVar3 + 0x18) <= iVar2)) ||
     (piVar1 = (int *)(*(int *)(iVar3 + 0x10) + iVar2 * 4), piVar1 == (int *)0x0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  FUN_00931ea0();
  *param_2 = iVar2;
  iVar2 = FUN_00fdbc60();
  param_2[1] = (int)(float)(iVar3 - iVar2);
  return;
}

// 00E76380  FUN_00e76380  size=119  [between]
float10 __thiscall FUN_00e76380(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int local_4;
  
  piVar3 = param_2;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 0) {
    fVar2 = -1.0;
  }
  else {
    if (iVar1 < *(int *)(*(int *)(param_1 + 8) + 0x18)) {
      local_4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x24) + iVar1 * 4);
    }
    else {
      local_4 = 0;
    }
    fVar2 = *(float *)(param_1 + 0x18) + (float)local_4;
  }
  iVar1 = *param_2;
  if ((iVar1 < 0) || (*(int *)(*(int *)(param_1 + 8) + 0x18) <= iVar1)) {
    param_2 = (int *)0x0;
  }
  else {
    param_2 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 0x24) + iVar1 * 4);
  }
  return (float10)(fVar2 - ((float)piVar3[1] + (float)(int)param_2));
}

// 00E76400  FUN_00e76400  size=269  [between]
void __thiscall FUN_00e76400(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 fVar4;
  
  FUN_00931ea0();
  iVar1 = FUN_00fdbc60();
  iVar2 = *param_3;
  if ((iVar2 == 0) && ((float)param_3[1] == 0.0)) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar2;
    if ((float)iVar1 < (float)param_3[1] == ((float)iVar1 == (float)param_3[1])) {
      if (iVar2 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x4c);
        if (iVar3 == -1) {
          iVar3 = iVar2 + -1;
        }
      }
    }
  }
  iVar2 = FUN_00fdbc60();
  fVar4 = extraout_ST0;
  if (iVar2 % iVar1 != 0) {
    fVar4 = (float10)(float)(extraout_ST0 - (float10)(iVar2 % iVar1));
  }
  param_2[1] = (int)(float)fVar4;
  *param_2 = iVar3;
  return;
}

// 00E76510  Event::ProgressModule::jumpToFrame  size=47  [class]
void __thiscall Event::ProgressModule::jumpToFrame(int param_1,int param_2,undefined4 param_3)

{
  if ((-1 < param_2) && (param_2 < *(int *)(*(int *)(param_1 + 8) + 0x18))) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    *(undefined4 *)(param_1 + 0x30) = param_3;
    *(int *)(param_1 + 0x2c) = param_2;
    return;
  }
  FUN_00dd5650(&DAT_016d0184);
  return;
}

// 00E765A0  FUN_00e765a0  size=585  [between]
float10 __thiscall FUN_00e765a0(int *param_1,float param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if ((*(int *)(*param_1 + 0x1a84) != 0) || (param_1[3] == 0)) {
    return (float10)param_2;
  }
  iVar6 = param_1[5];
  FUN_00f96580(0x447a0000,(float)((float10)9.0 * (float10)0.0 + (float10)param_2),0x41100000,
               0xffffffff,0xffffffff,"DATA :%04x",*(undefined4 *)(param_1[1] + 4));
  FUN_00f96580(0x447a0000,param_2 + 9.0,0x41100000,0xffffffff,0xffffffff,"CUT  :%03d/%03d",iVar6,
               *(int *)(param_1[2] + 0x18) + -1);
  if (((iVar6 < 0) || (*(int *)(param_1[2] + 0x18) <= iVar6)) ||
     (puVar1 = (undefined4 *)(*(int *)(param_1[2] + 0x10) + iVar6 * 4), puVar1 == (undefined4 *)0x0)
     ) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  uVar5 = FUN_00fdbc60(uVar5);
  FUN_00f96580(0x447a0000,param_2 + 18.0,0x41100000,0xffffffff,0xffffffff,"FRAME:%6d/%6d",uVar5);
  iVar3 = param_1[2];
  iVar4 = *(int *)(iVar3 + 0x18);
  iVar6 = iVar4 + -1;
  if (iVar6 < 0) {
    iVar7 = 0;
  }
  else if (iVar6 < iVar4) {
    iVar7 = *(int *)(*(int *)(iVar3 + 0x24) + iVar6 * 4);
  }
  else {
    iVar7 = 0;
  }
  if (((iVar6 < 0) || (iVar4 <= iVar6)) ||
     (piVar2 = (int *)(*(int *)(iVar3 + 0x10) + iVar6 * 4), piVar2 == (int *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar2;
  }
  uVar5 = FUN_00fdbc60(iVar6 + iVar7);
  FUN_00f96580(0x447a0000,param_2 + 27.0,0x41100000,0xffffffff,0xffffffff,"ALL F:%6d/%6d",uVar5);
  if (param_1[3] != 0) {
    FUN_00f96580(0x447a0000,param_2 + 36.0,0x41100000,0xffffffff,0xffffffff,"MOVx2:%6d/%6d",
                 param_1[0x14] * 2,param_1[0x15] * 2);
    return (float10)(param_2 + 45.0);
  }
  return (float10)(param_2 + 36.0);
}

// 00E76830  FUN_00e76830  size=271  [between]
void __fastcall FUN_00e76830(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar3 = param_1[5];
  local_8 = iVar3;
  if (*(int *)(param_1[2] + 0x18) <= iVar3) {
    iVar3 = *(int *)(param_1[2] + 0x18) + -1;
    local_8 = iVar3;
  }
  while (local_8 = local_8 + 1, local_8 < *(int *)(param_1[2] + 0x18)) {
    if ((param_1[0x13] != -1) && (*(int *)(*param_1 + 0x1a84) == 4)) {
      piVar1 = *(int **)(*param_1 + 0x184);
      iVar6 = piVar1[5];
      iVar5 = 0;
      iVar2 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar2 < 1) break;
      psVar4 = (short *)(iVar6 + 10);
      while (((char)psVar4[9] != '\x01' || (*psVar4 != local_8))) {
        iVar5 = iVar5 + 1;
        psVar4 = psVar4 + 0x1e;
        if (iVar2 <= iVar5) goto LAB_00e7689e;
      }
    }
    iVar3 = iVar3 + 1;
  }
LAB_00e7689e:
  if (((iVar3 < 0) || (*(int *)(param_1[2] + 0x18) <= iVar3)) ||
     (piVar1 = (int *)(*(int *)(param_1[2] + 0x10) + iVar3 * 4), piVar1 == (int *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar1;
  }
  FUN_00931ea0();
  if ((-1 < iVar3) && (iVar3 < *(int *)(param_1[2] + 0x18))) {
    param_1[4] = param_1[4] | 0x10000000;
    param_1[0xb] = iVar3;
    iVar3 = FUN_00fdbc60();
    param_1[0xc] = (int)(float)(iVar6 - iVar3);
    return;
  }
  FUN_00dd5650(&DAT_016d022c);
  return;
}

// 00E76940  FUN_00e76940  size=209  [between]
void __fastcall FUN_00e76940(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 8);
  if (*(int *)(iVar4 + 0x18) <= iVar2) {
    FUN_00e76830();
    return;
  }
  if (((iVar2 < 0) || (*(int *)(iVar4 + 0x18) <= iVar2)) ||
     (piVar1 = (int *)(*(int *)(iVar4 + 0x10) + iVar2 * 4), piVar1 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  FUN_00931ea0();
  iVar3 = FUN_00fdbc60();
  if ((float)(iVar4 - iVar3) < *(float *)(param_1 + 0x18)) {
    if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(param_1 + 8) + 0x18))) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
      *(float *)(param_1 + 0x30) = (float)(iVar4 - iVar3);
      *(int *)(param_1 + 0x2c) = iVar2;
      return;
    }
    FUN_00dd5650(&DAT_016d022c);
    return;
  }
  return;
}

// 00E76AC0  Event::SeModule::updatePlaySeq  size=122  [class]
void __thiscall Event::SeModule::updatePlaySeq(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return;
  }
  if (*param_2 != 0x7f0000) {
    iVar1 = (int)(short)param_2[2];
    if ((((-1 < iVar1) && (iVar1 < *(int *)(*param_1 + 0x84))) &&
        (iVar1 = iVar1 * 0x50 + *(int *)(*param_1 + 0x7c), iVar1 != 0)) &&
       ((*(int *)(iVar1 + 0x20) != 0 && (iVar1 = FUN_00a7c800(), iVar1 != 0)))) {
      FUN_00e5e170(param_3,iVar1,param_2[7],0);
      return;
    }
    FUN_00dd5650(&DAT_016d026c);
    return;
  }
  FUN_00e5e100(param_3,0);
  return;
}

// 00E76BA0  FUN_00e76ba0  size=352  [between]
undefined4 __thiscall FUN_00e76ba0(int *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int local_8;
  
  iVar3 = *param_1;
  iVar4 = *(int *)(iVar3 + 0x2c);
  iVar7 = (int)*(short *)(param_2 + 10);
  fVar5 = (float)(int)*(short *)(param_2 + 0xc);
  fVar2 = *(float *)(iVar3 + 0x30);
  if ((*(uint *)(iVar3 + 0x28) & 0x8000000) == 0 && (*(uint *)(iVar3 + 0x28) & 4) == 0) {
    if (*(char *)(param_2 + 0x15) == '\x01') {
      if (((iVar4 < 0) || (*(int *)(*(int *)(iVar3 + 0x20) + 0x18) <= iVar4)) ||
         (piVar1 = (int *)(*(int *)(*(int *)(iVar3 + 0x20) + 0x10) + iVar4 * 4),
         piVar1 == (int *)0x0)) {
        local_8 = 0;
      }
      else {
        local_8 = *piVar1;
      }
      fVar6 = fVar5 + (float)local_8;
      if (fVar6 <= fVar2) {
        do {
          fVar5 = fVar6;
          fVar6 = fVar5 + (float)local_8;
        } while (fVar6 < fVar2 != (fVar6 == fVar2));
      }
    }
    if ((iVar7 != iVar4) || (fVar5 != fVar2)) {
      if (((iVar7 < *(int *)(iVar3 + 0x34)) ||
          ((iVar7 == *(int *)(iVar3 + 0x34) && (fVar5 <= *(float *)(iVar3 + 0x38))))) ||
         (iVar4 < iVar7)) {
        return 0;
      }
      if ((iVar7 == iVar4) && (fVar2 < fVar5)) {
        return 0;
      }
    }
  }
  else if ((iVar7 != iVar4) || (fVar5 != fVar2)) {
    return 0;
  }
  return 1;
}

// 00E76D30  FUN_00e76d30  size=48  [between]
void __thiscall FUN_00e76d30(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    iVar1 = FUN_00e71050(param_2);
    if (iVar1 == 0) {
      FUN_009322f0(1);
      param_1[3] = param_1[3] | 1;
    }
  }
  return;
}

// 00E76D80  FUN_00e76d80  size=34  [between]
undefined4 __thiscall FUN_00e76d80(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3 + 0x404;
  param_1[2] = 0;
  return 1;
}

// 00E76DB0  FUN_00e76db0  size=55  [between]
void __fastcall FUN_00e76db0(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_00dda360(0,0,0,0);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00E76E10  FUN_00e76e10  size=34  [between]
undefined4 __thiscall FUN_00e76e10(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3 + 0x3c0;
  param_1[2] = 0;
  return 1;
}

// 00E76E50  FUN_00e76e50  size=104  [between]
void __fastcall FUN_00e76e50(int param_1)

{
  FUN_00931f80(param_1 + 0x70,0);
  if (((*(byte *)(param_1 + 4) & 2) != 0) && (DAT_01dd9eec = DAT_01dd9eec + -1, DAT_01dd9eec < 1)) {
    DAT_01dd9eec = 0;
    if (DAT_01dd9ef0 != 0) {
      FUN_00dd48d0(DAT_01dd9ef0,0);
      DAT_01dd9ef0 = 0;
    }
  }
  FUN_00e71980(param_1 + 0x70);
  FUN_00e67f30();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E76EC0  thunk_FUN_00e76e50  size=5  [between]
void __fastcall thunk_FUN_00e76e50(int param_1)

{
  FUN_00931f80(param_1 + 0x70,0);
  if (((*(byte *)(param_1 + 4) & 2) != 0) && (DAT_01dd9eec = DAT_01dd9eec + -1, DAT_01dd9eec < 1)) {
    DAT_01dd9eec = 0;
    if (DAT_01dd9ef0 != 0) {
      FUN_00dd48d0(DAT_01dd9ef0,0);
      DAT_01dd9ef0 = 0;
    }
  }
  FUN_00e71980(param_1 + 0x70);
  FUN_00e67f30();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E76ED0  FUN_00e76ed0  size=85  [between]
undefined4 __fastcall FUN_00e76ed0(int param_1)

{
  int iVar1;
  
  FUN_00e67dc0(param_1 + 0x10,&DAT_016d02a4);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00e717f0(param_1 + 0x70);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 0;
  }
  iVar1 = FUN_00e718b0(param_1 + 0x70);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 5;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

// 00E76F30  FUN_00e76f30  size=61  [between]
void __fastcall FUN_00e76f30(int param_1)

{
  FUN_00931f80(param_1 + 0x10,0);
  FUN_00e71980(param_1 + 0x10);
  FUN_00e67f30();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E76F70  Event::ReadUnitExternal::vf18  size=61  [class]
void __fastcall Event::ReadUnitExternal::vf18(int param_1)

{
  FUN_00931f80(param_1 + 0x10,0);
  FUN_00e71980(param_1 + 0x10);
  FUN_00e67f30();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E76FB0  FUN_00e76fb0  size=65  [between]
undefined4 __fastcall FUN_00e76fb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00e717f0(param_1 + 0x10);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  iVar1 = FUN_00e718b0(param_1 + 0x10);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

// 00E77000  Event::ReadUnitNorm::vf04  size=620  [class]
void __thiscall Event::ReadUnitNorm::vf04(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_180 [4];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  char local_144 [64];
  char local_104 [64];
  char local_c4 [64];
  char local_84 [64];
  char local_44 [64];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_180;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00e67e40(param_2);
  _sprintf_s(local_c4,0x40,"movie/ev%04x.usm",*(undefined4 *)(param_2 + 4));
  _sprintf_s(local_44,0x40,"event/ev%04x.evn",*(undefined4 *)(param_2 + 4));
  _sprintf_s(local_84,0x40,"event/ev%04x.evt",*(undefined4 *)(param_2 + 4));
  local_104[0] = '\0';
  local_104[1] = '\0';
  _memset(local_104 + 2,0,0x3e);
  iVar2 = EventConfig::getMoviePath(local_c4,0x40,param_2,local_104);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
    local_17c = 0xbf800000;
    local_178 = 0xbf800000;
    local_174 = 0xbf800000;
    local_170 = 0xbf800000;
    local_148 = 0;
    local_14c = 7;
    local_16c = 0;
    local_144[0] = '\0';
    local_168 = 0;
    local_160 = 0;
    local_15c = 0;
    local_164 = 0x3f800000;
    local_158 = 0x3f800000;
    local_154 = 0x3f800000;
    local_150 = 0x3f800000;
    FUN_00dd5650("pContentPath %s",local_104);
    pcVar3 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != local_104 + 1) {
      _strcpy_s(local_144,0x40,local_104);
    }
    FUN_00dd5650("m_ContentPath %s",local_144);
    uVar4 = FUN_00931a20(param_2,2);
    if ((param_3 & 0x40000000) != 0) {
      local_14c = local_14c | 0x40000000;
    }
    uVar4 = thunk_FUN_00dfc8e0(local_c4,&local_17c,uVar4);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  iVar2 = FUN_00dec390(local_44);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  }
  if (((*(byte *)(param_1 + 4) & 2) != 0) && (iVar2 = FUN_00dec390(local_84), iVar2 != 0)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
  }
  if ((*(uint *)(param_1 + 4) & 10) == 0) {
    local_17c = 0xbf800000;
    local_178 = 0xbf800000;
    local_174 = 0xbf800000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000008;
    local_170 = 0xbf800000;
    local_148 = 0;
    local_144[0] = '\0';
    local_16c = 0;
    local_14c = 0x80000003;
    local_168 = 0;
    local_164 = 0x3f800000;
    local_158 = 0x3f800000;
    local_154 = 0x3f800000;
    local_150 = 0x3f800000;
    local_160 = 0;
    local_15c = 0;
    uVar4 = FUN_00931a20(param_2,2);
    uVar4 = thunk_FUN_00dfc8e0("movie/_dummyEvent.usm",&local_17c,uVar4);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
  }
  __security_check_cookie(local_4 ^ (uint)auStack_180);
  return;
}

// 00E77270  FUN_00e77270  size=121  [between]
void __fastcall FUN_00e77270(int param_1)

{
  FUN_00931f80(param_1 + 0x1c,*(int *)(param_1 + 0x10) != 0);
  FUN_00e71980(param_1 + 0x1c);
  FUN_00e67f30();
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_00dfbaa0(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E772F0  Event::ReadUnitNorm::thunk_vf18  size=5  [class]
void __fastcall Event::ReadUnitNorm::thunk_vf18(int param_1)

{
  FUN_00931f80(param_1 + 0x1c,*(int *)(param_1 + 0x10) != 0);
  FUN_00e71980(param_1 + 0x1c);
  FUN_00e67f30();
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_00dfbaa0(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E77300  FUN_00e77300  size=71  [callgraph]
undefined4 __fastcall FUN_00e77300(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_00e717f0(param_1 + 0x1c);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    iVar1 = FUN_00e718b0(param_1 + 0x1c);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

// 00E77350  FUN_00e77350  size=20  [callgraph]
void FUN_00e77350(void)

{
  DAT_01dd9ee0 = 0;
  FUN_00e72350();
  FUN_00e6c030();
  return;
}

// 00E77370  FUN_00e77370  size=38  [callgraph]
undefined4 FUN_00e77370(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e723d0(param_1,0);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x24);
  }
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x2c);
  }
  return 0xffffffff;
}

// 00E773A0  FUN_00e773a0  size=56  [callgraph]
float10 __thiscall FUN_00e773a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e723d0(param_2,0,param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x24);
  }
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0x30);
  }
  return (float10)-1.0;
}

// 00E773E0  FUN_00e773e0  size=104  [callgraph]
float10 __thiscall FUN_00e773e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00e723d0(param_2,0,param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x24);
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x2c);
    if ((-1 < iVar1) && (iVar1 < *(int *)(*(int *)(iVar2 + 0x20) + 0x18))) {
      return (float10)(*(float *)(iVar2 + 0x30) +
                      (float)*(int *)(*(int *)(*(int *)(iVar2 + 0x20) + 0x24) + iVar1 * 4));
    }
    return (float10)(*(float *)(iVar2 + 0x30) + 0.0);
  }
  return (float10)-1.0;
}

// 00E77450  FUN_00e77450  size=43  [callgraph]
undefined4 FUN_00e77450(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e723d0(param_1,0);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x20) + 0x20))();
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x448);
    }
  }
  return 0;
}

// 00E77480  FUN_00e77480  size=40  [callgraph]
int FUN_00e77480(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e723d0(param_1,0);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x20) + 0x20))();
    if (iVar1 != 0) {
      return iVar1 + 0x28;
    }
  }
  return 0;
}

// 00E774B0  FUN_00e774b0  size=84  [callgraph]
undefined4 FUN_00e774b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00e723d0(param_3,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x24);
  }
  if (iVar2 != 0) {
    sVar1 = FUN_00e86520(param_1,param_2);
    iVar3 = (int)sVar1;
    if (((-1 < iVar3) && (iVar3 < *(int *)(iVar2 + 0x84))) &&
       (iVar2 = iVar3 * 0x50 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      return *(undefined4 *)(iVar2 + 0x20);
    }
    return 0;
  }
  return 0;
}

// 00E77510  FUN_00e77510  size=94  [callgraph]
undefined4 FUN_00e77510(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00e723d0(param_3,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x24);
  }
  if (iVar2 != 0) {
    sVar1 = FUN_00e86520(param_1,param_2);
    iVar3 = (int)sVar1;
    if ((((-1 < iVar3) && (iVar3 < *(int *)(iVar2 + 0x84))) &&
        (iVar2 = iVar3 * 0x50 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x20) != 0)) {
      uVar4 = FUN_00a7c800();
      return uVar4;
    }
    return 0;
  }
  return 0;
}

// 00E779A0  FUN_00e779a0  size=83  [callgraph]
void FUN_00e779a0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)FUN_00e723d0(param_1,param_2);
  if (puVar3 == (uint *)0x0) {
    return;
  }
  uVar1 = puVar3[5];
  *puVar3 = *puVar3 & 0xfffffff9;
  if (uVar1 != 2) {
    if (uVar1 == 3) {
      uVar1 = puVar3[9];
      puVar3 = (uint *)(uVar1 + 0x28);
      *puVar3 = *puVar3 | 0x20000;
      iVar2 = *(int *)(uVar1 + 0x24);
      if (iVar2 == 0) {
        return;
      }
      thunk_FUN_00dfbaa0(iVar2);
      return;
    }
    if (uVar1 != 5) {
      return;
    }
  }
  puVar3[5] = 4;
  puVar3[6] = 0;
  return;
}

// 00E77A20  FUN_00e77a20  size=58  [callgraph]
undefined4 __thiscall FUN_00e77a20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  iVar1 = FUN_00e6cc70(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00e76940();
  return 1;
}

// 00E77A60  FUN_00e77a60  size=53  [callgraph]
undefined4 __thiscall FUN_00e77a60(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  iVar1 = FUN_00e68190(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00e76940();
  return 1;
}

// 00E77AA0  FUN_00e77aa0  size=53  [callgraph]
undefined4 __thiscall FUN_00e77aa0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  iVar1 = FUN_00e68270(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00e76940();
  return 1;
}

// 00E77D60  Event::ActorDataHolder::debugAddActor  size=303  [class]
int __thiscall Event::ActorDataHolder::debugAddActor(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  
  iVar4 = *(int *)(param_1 + 0x58);
  if (0x7f < iVar4) {
    FUN_00dd5650(&DAT_016d0570);
    return -1;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    piVar7 = *(int **)(param_1 + 0x50);
    do {
      if (((((param_2[7] != 0) && (piVar7[7] != 0)) && (*piVar7 == *param_2)) &&
          ((piVar7[7] == param_2[7] && (piVar7[8] == param_2[8])))) &&
         ((piVar7[9] == param_2[9] && ((piVar7[10] == param_2[10] && (piVar7[0xb] == param_2[0xb])))
          ))) {
        pbVar5 = (byte *)(param_2 + 0x11);
        pbVar2 = (byte *)(piVar7 + 0x11);
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00e77df4:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00e77df9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00e77df4;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00e77df9:
        if (iVar3 == 0) {
          FUN_00dd5650(&DAT_016d0538);
          return -1;
        }
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 0x19;
    } while (iVar6 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 <= *(int *)(param_1 + 0x58)) {
    if (iVar4 < 1) {
      iVar4 = 4;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    iVar4 = FUN_00e85160(iVar4);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
      goto LAB_00e77e64;
    }
  }
  iVar4 = *(int *)(param_1 + 0x58) * 100;
  piVar7 = (int *)(*(int *)(param_1 + 0x50) + iVar4);
  if (piVar7 != (int *)0x0) {
    for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *param_2;
      param_2 = param_2 + 1;
      piVar7 = piVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  iVar4 = *(int *)(param_1 + 0x50) + iVar4;
LAB_00e77e64:
  if (iVar4 == *(int *)(param_1 + 0x4c)) {
    FUN_00dd5650(&DAT_016d04fc);
    return -1;
  }
  return *(int *)(param_1 + 0x58) + -1;
}

// 00E77F00  Event::DataHolderBase::DataHolderBase_3  size=94  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_3(undefined4 *param_1)

{
  *param_1 = CutDataHolder::vftable;
  CutDataHolder::vf0C();
  if (param_1[9] != 0) {
    param_1[0xb] = 0;
    if (param_1[0xc] != 0) {
      FUN_00dd48d0(param_1[9],0);
      param_1[0xc] = 0;
    }
    param_1[9] = 0;
    param_1[10] = 0;
  }
  if (param_1[4] != 0) {
    param_1[6] = 0;
    if (param_1[7] != 0) {
      FUN_00dd48d0(param_1[4],0);
      param_1[7] = 0;
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E77F60  FUN_00e77f60  size=90  [between]
undefined4 __fastcall FUN_00e77f60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x28) < iVar1) {
    iVar2 = FUN_00e85090(iVar1);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016cdba0);
      return 0;
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      *(int *)(*(int *)(param_1 + 0x24) + iVar2 * 4) = iVar3;
      iVar3 = iVar3 + *(int *)(*(int *)(param_1 + 0x10) + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

// 00E77FC0  Event::CutDataHolder::vf10  size=145  [class]
bool __thiscall Event::CutDataHolder::vf10(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = **(int **)(param_1 + 4);
  *(undefined1 *)(param_1 + 8) = 0x3c;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 9) = 0x1e;
LAB_00e77fda:
    *(undefined1 *)(param_1 + 10) = 0x3c;
  }
  else {
    if (iVar1 != 3) {
      *(undefined1 *)(param_1 + 9) = 0x3c;
      goto LAB_00e77fda;
    }
    *(undefined1 *)(param_1 + 9) = 0xff;
    *(undefined1 *)(param_1 + 10) = 0xff;
  }
  *(undefined1 *)(param_1 + 8) = 0x3c;
  *(undefined1 *)(param_1 + 9) = 0x3c;
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar1 = FUN_00e84fc0(1);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016cdba0);
      goto LAB_00e78023;
    }
  }
  if (*(int *)(param_1 + 0x18) != 1) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
LAB_00e78023:
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x10) = 100;
  iVar1 = FUN_00e77f60();
  if (iVar1 == 0) {
    return false;
  }
  return param_2 == 0;
}

// 00E78060  Event::CutDataHolder::vf18  size=44  [class]
bool __thiscall Event::CutDataHolder::vf18(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x18))) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 4) = param_3;
    iVar1 = FUN_00e77f60();
    return iVar1 != 0;
  }
  return false;
}

// 00E78090  Event::CutDataHolder::vf1C  size=96  [class]
bool __thiscall Event::CutDataHolder::vf1C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 100;
  if (param_2 < *(int *)(param_1 + 0x18)) {
    piVar1 = (int *)FUN_00e86850(&param_2,param_2,&local_4);
    if (*piVar1 == *(int *)(param_1 + 0xc)) {
      return false;
    }
  }
  else {
    piVar1 = (int *)FUN_00e868d0(&param_2,&local_4);
    if (*piVar1 == *(int *)(param_1 + 0xc)) {
      return false;
    }
  }
  iVar2 = FUN_00e77f60();
  return iVar2 != 0;
}

// 00E780F0  Event::CutDataHolder::vf20  size=45  [class]
bool __thiscall Event::CutDataHolder::vf20(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    return false;
  }
  FUN_00e820c0(param_2);
  iVar1 = FUN_00e77f60();
  return iVar1 != 0;
}

// 00E78120  Event::StateDataHolder::vf08  size=88  [class]
undefined4 __fastcall Event::StateDataHolder::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = FUN_00e03ea0("StateData.bxm");
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 != 0) {
    iVar2 = cXmlBinary::cXmlBinary_40(iVar2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00E781C0  FUN_00e781c0  size=43  [between]
void __fastcall FUN_00e781c0(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 00E78200  FUN_00e78200  size=77  [between]
void __fastcall FUN_00e78200(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  if (0 < iVar1) {
    do {
      FUN_00e741d0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_1[3] != 0) {
    param_1[5] = 0;
    if (param_1[6] != 0) {
      FUN_00dd48d0(param_1[3],0);
      param_1[6] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00E78250  FUN_00e78250  size=133  [between]
void __fastcall FUN_00e78250(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = ((int *)param_1[1])[5];
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (0 < iVar1) {
    puVar3 = (undefined1 *)(iVar2 + 0x14);
    do {
      if ((-1 < (int)*(uint *)(puVar3 + -4)) && ((*(uint *)(puVar3 + -4) & 1) == 0)) {
        if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
          iVar2 = FUN_00e76ba0(puVar3 + -0x14);
          if (iVar2 != 0) {
            switch(*puVar3) {
            default:
switchD_00e7829d_caseD_0:
              FUN_00e73d70(puVar3 + -0x14);
              break;
            case 3:
              break;
            }
          }
        }
        else {
          iVar2 = FUN_00e76ba0(puVar3 + -0x14);
          if (iVar2 != 0) {
            switch(*puVar3) {
            default:
              goto switchD_00e7829d_caseD_0;
            case 2:
              break;
            }
          }
        }
      }
      puVar3 = puVar3 + 0x1c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 00E78300  FUN_00e78300  size=187  [between]
undefined4 __fastcall FUN_00e78300(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar1 = param_1[1];
  iVar3 = *(int *)(iVar1 + 0x58);
  if (iVar3 != 0) {
    iVar3 = FUN_00e86d30(iVar3);
    if (iVar3 == 0) {
      return 0;
    }
    uVar2 = *param_1;
    iVar3 = param_1[5];
    iVar7 = 0;
    if (0 < iVar3) {
      iVar5 = 0;
      puVar6 = (undefined4 *)(param_1[3] + 0x10);
      do {
        puVar6[-3] = iVar1;
        puVar6[-4] = uVar2;
        puVar6[-2] = 0xffffffff;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[3] = 0;
        puVar6[6] = 0xffffffff;
        puVar6[7] = 0;
        if (iVar7 < 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else if (iVar7 < *(int *)(puVar6[-3] + 0x58)) {
          puVar4 = (undefined4 *)(*(int *)(puVar6[-3] + 0x50) + iVar5);
        }
        else {
          puVar4 = (undefined4 *)0x0;
        }
        puVar6[-2] = iVar7;
        puVar6[2] = *puVar4;
        puVar6[3] = puVar4 + 7;
        Event::ActorWork::createEntity(0);
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 100;
        puVar6 = puVar6 + 0x14;
      } while (iVar7 < iVar3);
    }
  }
  return 1;
}

// 00E784B0  FUN_00e784b0  size=87  [between]
void __thiscall FUN_00e784b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00e742a0(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00e74360();
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0x20) != 0) && ((*(uint *)(param_1 + 0x2c) & 4) == 0)) {
        *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 4;
        FUN_009322d0(*(int *)(param_1 + 0x20),1);
      }
      FUN_009322c0(*(undefined4 *)(param_1 + 0x20),0,0);
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff7;
    }
  }
  return;
}

// 00E78530  FUN_00e78530  size=43  [between]
void __fastcall FUN_00e78530(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 00E78560  FUN_00e78560  size=213  [between]
undefined4 __fastcall FUN_00e78560(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  local_8 = param_1;
  iVar1 = FUN_00e6f690();
  if (iVar1 < 0) {
    FUN_00dd5650(&DAT_016d062c);
    return 0;
  }
  if (0 < iVar1) {
    FUN_00e86d30(iVar1);
  }
  iVar1 = *(int *)(param_1 + 4);
  local_4 = *(int *)(iVar1 + 0x58);
  local_c = 0;
  local_14 = 0;
  if (0 < local_4) {
    local_10 = 0;
    do {
      if (local_14 < 0) {
        piVar4 = (int *)0x0;
      }
      else if (local_14 < *(int *)(iVar1 + 0x58)) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x50) + local_10);
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (0 < *(int *)(iVar1 + 0x6c)) {
        piVar2 = *(int **)(iVar1 + 100);
        iVar3 = 0;
        do {
          if ((*piVar2 == *piVar4) && (piVar2[1] == piVar4[2])) {
            iVar3 = FUN_00e744d0(piVar2,piVar4[1],&local_c);
            if (iVar3 == 0) {
              return 0;
            }
            break;
          }
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 4;
        } while (iVar3 < *(int *)(iVar1 + 0x6c));
      }
      local_10 = local_10 + 100;
      local_14 = local_14 + 1;
    } while (local_14 < local_4);
  }
  return 1;
}

// 00E78640  FUN_00e78640  size=148  [between]
void __fastcall FUN_00e78640(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = ((int *)param_1[1])[5];
  iVar2 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (0 < iVar2) {
    puVar4 = (undefined1 *)(iVar3 + 0x14);
    do {
      if ((-1 < (int)*(uint *)(puVar4 + -4)) && ((*(uint *)(puVar4 + -4) & 1) == 0)) {
        uVar1 = *(uint *)(*param_1 + 0x28);
        if ((uVar1 & 0x2000) == 0) {
          iVar3 = FUN_00e76ba0(puVar4 + -0x14);
          if (iVar3 != 0) {
            switch(*puVar4) {
            default:
switchD_00e7868f_caseD_0:
              if (((uVar1 & 0x40) == 0) && (*(int *)(puVar4 + 4) != 0)) {
                FUN_00e5e1e0(*(int *)(puVar4 + 4));
              }
              break;
            case 3:
              break;
            }
          }
        }
        else {
          iVar3 = FUN_00e76ba0(puVar4 + -0x14);
          if (iVar3 != 0) {
            switch(*puVar4) {
            default:
              goto switchD_00e7868f_caseD_0;
            case 2:
              break;
            }
          }
        }
      }
      puVar4 = puVar4 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00E78700  FUN_00e78700  size=36  [between]
bool __thiscall FUN_00e78700(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3 + 0x6c;
  param_1[2] = *(undefined4 *)(param_3 + 0xb8);
  iVar1 = FUN_00e746e0();
  return iVar1 != 0;
}

// 00E78740  FUN_00e78740  size=152  [between]
void FUN_00e78740(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  
  iVar1 = FUN_00e749d0(param_2,param_3);
  if (iVar1 != 0) {
    if (*(char *)(param_3 + 0x61) == '\x03') {
      iVar3 = *(int *)(param_3 + 0x6c);
    }
    else {
      iVar3 = *(int *)(param_3 + 0x78);
    }
    if (-1 < iVar3) {
      iVar1 = FUN_00a12210(iVar3);
    }
    if (iVar1 != 0) {
      cVar2 = *(char *)(param_3 + 0x61);
      if (cVar2 == '\x03') {
        cVar2 = *(char *)(param_3 + 0x60);
      }
      if (cVar2 == '\x01') {
        *(float *)(param_1 + 0x10) = *(float *)(iVar1 + 0x40) + *(float *)(param_1 + 0x10);
        *(float *)(param_1 + 0x14) = *(float *)(iVar1 + 0x44) + *(float *)(param_1 + 0x14);
        *(float *)(param_1 + 0x18) = *(float *)(iVar1 + 0x48) + *(float *)(param_1 + 0x18);
      }
      else if (cVar2 == '\x02') {
        pfVar4 = (float *)(param_1 + 0x10);
        D3DXVec3TransformNormal(pfVar4,pfVar4,iVar1 + 0x10);
        *pfVar4 = *(float *)(iVar1 + 0x40) + *pfVar4;
        *(float *)(param_1 + 0x14) = *(float *)(iVar1 + 0x44) + *(float *)(param_1 + 0x14);
        *(float *)(param_1 + 0x18) = *(float *)(iVar1 + 0x48) + *(float *)(param_1 + 0x18);
        return;
      }
    }
  }
  return;
}

// 00E787E0  FUN_00e787e0  size=629  [between]
void FUN_00e787e0(float *param_1,float *param_2,int param_3)

{
  int iVar1;
  float unaff_EDI;
  float10 fVar2;
  float *pfStack_d8;
  undefined1 *puStack_d4;
  undefined4 uStack_d0;
  float *pfStack_cc;
  float *pfStack_c8;
  undefined1 *puStack_c4;
  float **ppfStack_c0;
  float **ppfStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  float fStack_b0;
  float *pfStack_ac;
  float *pfStack_a8;
  float fStack_a4;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 auStack_8c [4];
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [36];
  uint uStack_54;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_98;
  fStack_a4 = (float)param_3;
  pfStack_a8 = param_2;
  pfStack_ac = (float *)0xe7880c;
  iVar1 = FUN_00e74960();
  if (iVar1 != 0) {
    if (*(char *)(param_3 + 0x60) == '\x01') {
      *param_1 = *(float *)(iVar1 + 0x40) + *param_1;
      param_1[1] = *(float *)(iVar1 + 0x44) + param_1[1];
      param_1[2] = *(float *)(iVar1 + 0x48) + param_1[2];
    }
    else if (*(char *)(param_3 + 0x60) == '\x02') {
      pfStack_a8 = param_1;
      pfStack_ac = param_1;
      fStack_b0 = 2.126286e-38;
      fStack_a4 = (float)(iVar1 + 0x10);
      D3DXVec3TransformNormal();
      puStack_b8 = &stack0xffffff64;
      *param_1 = *param_1 + *(float *)(iVar1 + 0x40);
      param_1[1] = *(float *)(iVar1 + 0x44) + param_1[1];
      param_1[2] = *(float *)(iVar1 + 0x48) + param_1[2];
      fStack_98 = 1.0;
      fStack_94 = 0.0;
      ppfStack_bc = (float **)0xe7886b;
      puStack_b4 = puStack_b8;
      fStack_b0 = (float)(iVar1 + 0x10);
      D3DXVec3TransformNormal();
      pfStack_ac = (float *)(fStack_a4 * fStack_a4 + (float)pfStack_a8 * (float)pfStack_a8 +
                            unaff_EDI * unaff_EDI);
      if ((float)pfStack_ac < 0.0 == ((float)pfStack_ac == 0.0)) {
        ppfStack_c0 = &pfStack_a8;
        puStack_c4 = (undefined1 *)0xe788d8;
        ppfStack_bc = ppfStack_c0;
        FUN_00ddf460();
      }
      else {
        ppfStack_bc = (float **)&DAT_0163d0ac;
        ppfStack_c0 = (float **)0xe788ed;
        FUN_00dd5650();
        pfStack_a8 = (float *)0x0;
        fStack_a4 = 1.0;
      }
      fStack_98 = param_1[4] - *param_1;
      fStack_94 = param_1[5] - param_1[1];
      fStack_90 = param_1[6] - param_1[2];
      uStack_88 = (double)fStack_94;
      pfStack_ac = (float *)(fStack_98 * fStack_98 + fStack_90 * fStack_90);
      ppfStack_bc = (float **)0xe78952;
      fVar2 = (float10)FUN_00fdef70();
      pfStack_ac = (float *)(float)fVar2;
      ppfStack_bc = (float **)0xe78963;
      fVar2 = (float10)FUN_00fdecda();
      pfStack_ac = (float *)(float)fVar2;
      uStack_88 = (double)CONCAT44(uStack_88._4_4_,pfStack_ac);
      ppfStack_bc = (float **)0xe78980;
      fVar2 = (float10)FUN_00fdecda();
      pfStack_ac = (float *)(float)fVar2;
      uStack_88 = (double)CONCAT44(pfStack_ac,(undefined4)uStack_88);
      ppfStack_c0 = (float **)auStack_78;
      ppfStack_bc = (float **)-(float)pfStack_ac;
      puStack_c4 = (undefined1 *)0xe789a0;
      D3DXMatrixRotationY();
      puStack_c4 = auStack_80;
      pfStack_cc = &fStack_b0;
      uStack_d0 = 0xe789b2;
      pfStack_c8 = pfStack_cc;
      D3DXVec3TransformNormal();
      uStack_d0 = 0x80000000;
      puStack_d4 = auStack_8c;
      pfStack_d8 = (float *)0xe789c6;
      D3DXMatrixRotationX();
      pfStack_d8 = &fStack_94;
      D3DXVec3TransformNormal(&puStack_c4,&puStack_c4);
      fVar2 = (float10)FUN_00fdecda();
      pfStack_a8 = (float *)(float)fVar2;
      puStack_d4 = (undefined1 *)(param_1[0xc] + (float)pfStack_a8);
      param_1[0xc] = (float)puStack_d4;
      fVar2 = (float10)FUN_00ddba30(puStack_d4);
      param_1[0xc] = (float)fVar2;
      __security_check_cookie(uStack_54 ^ (uint)&pfStack_d8);
      return;
    }
  }
  __security_check_cookie(local_14 ^ (uint)&fStack_98);
  return;
}

// 00E78A60  FUN_00e78a60  size=192  [between]
void __fastcall FUN_00e78a60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  FUN_00e76300(param_1 + 2);
  param_1[4] = 1;
  iVar2 = ((int *)param_1[1])[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (iVar1 < 1) {
    return;
  }
  puVar4 = (uint *)(iVar2 + 0x10);
  do {
    if ((-1 < (int)*puVar4) && ((*puVar4 & 1) == 0)) {
      iVar2 = *(int *)(*param_1 + 0x2c);
      if ((iVar2 <= *(short *)((int)puVar4 + -6)) &&
         (((iVar2 < *(short *)((int)puVar4 + -6) ||
           (*(float *)(*param_1 + 0x30) <= (float)(int)(short)puVar4[-1])) &&
          (iVar2 = FUN_00e69ac0(puVar4 + -4), iVar2 != 0)))) {
        param_1[2] = (int)*(short *)((int)puVar4 + -6);
        param_1[3] = (int)(float)(int)(short)puVar4[-1];
        param_1[4] = (uint)(iVar2 == 2);
        return;
      }
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x30;
    if (iVar1 <= iVar3) {
      return;
    }
  } while( true );
}

// 00E78B20  FUN_00e78b20  size=111  [between]
undefined4 __fastcall FUN_00e78b20(int param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      return 0;
    }
    iVar2 = FUN_00e6a490();
    if (-1 < iVar2) {
      if ((double)iVar2 < 60.0) {
        return 0;
      }
      return 1;
    }
    fVar3 = (float10)FUN_00e76380(param_1 + 8);
    uVar1 = (uint)(ushort)((ushort)(fVar3 < (float10)-60.0) << 8 |
                          (ushort)(fVar3 == (float10)-60.0) << 0xe);
  }
  else {
    if (iVar2 == 1) {
      return 1;
    }
    uVar1 = iVar2 - 2;
  }
  if (uVar1 != 0) {
    return 1;
  }
  return 0;
}

// 00E78B90  FUN_00e78b90  size=142  [between]
void __thiscall FUN_00e78b90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + 0x1a84) != 0) && (*(int *)(iVar2 + 0x1a84) != 2)) {
    return;
  }
  if ((*(uint *)(iVar2 + 0x28) & 0x2000) == 0) {
    iVar1 = FUN_00e76ba0(param_2);
    if (iVar1 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 3:
LAB_00e78c19:
      return;
    }
  }
  else {
    iVar1 = FUN_00e76ba0(param_2);
    if (iVar1 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 2:
      goto LAB_00e78c19;
    }
  }
  iVar2 = FUN_00932520(iVar2 + 0x1a70,(void *)(param_2 + 0x1c));
  if (iVar2 != 0) {
    return;
  }
  param_1[7] = 1;
  FID_conflict__memcpy(param_1 + 9,(void *)(param_2 + 0x1c),0x34);
  return;
}

// 00E78C40  Event::ProgressModule::jumpToFrame_2  size=148  [class]
void __thiscall Event::ProgressModule::jumpToFrame_2(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((*(int *)(iVar1 + 0x1a84) != 0) && (*(int *)(iVar1 + 0x1a84) != 2)) {
    return;
  }
  if ((*(uint *)(iVar1 + 0x28) & 0x2000) == 0) {
    iVar2 = FUN_00e76ba0(param_2);
    if (iVar2 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 3:
LAB_00e78cd0:
      return;
    }
  }
  else {
    iVar2 = FUN_00e76ba0(param_2);
    if (iVar2 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 2:
      goto LAB_00e78cd0;
    }
  }
  if ((*(uint *)(iVar1 + 0x28) & 0x40) != 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(iVar1 + 0x20) + 0x18))) {
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 1;
    *(int *)(iVar1 + 0x44) = iVar2;
    return;
  }
  FUN_00dd5650(&DAT_016d0184);
  return;
}

// 00E78D00  FUN_00e78d00  size=102  [between]
void __thiscall FUN_00e78d00(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x28);
  if ((uVar2 & 0x40) != 0) {
    return;
  }
  if ((uVar2 & 0x2000) == 0) {
    iVar3 = FUN_00e76ba0(param_2);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 3:
LAB_00e78d62:
      return;
    }
  }
  else {
    iVar3 = FUN_00e76ba0(param_2);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 2:
      goto LAB_00e78d62;
    }
  }
  FUN_009325b0(iVar1 + 0x1a70,param_2 + 0x1c);
  return;
}

// 00E78D90  FUN_00e78d90  size=152  [between]
void __thiscall FUN_00e78d90(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(*param_1 + 0x1a84) != 0) {
    return;
  }
  if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
    iVar3 = FUN_00e76ba0(param_2);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 3:
LAB_00e78e24:
      return;
    }
  }
  else {
    iVar3 = FUN_00e76ba0(param_2);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 2:
      goto LAB_00e78e24;
    }
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    return;
  }
  iVar3 = (int)*(char *)(param_2 + 0x1d);
  uVar1 = *(ushort *)(param_2 + 0x1e);
  if (iVar3 == 1) {
    uVar4 = FUN_00932710();
  }
  else if (iVar3 == 2) {
    uVar4 = FUN_00932720();
  }
  else {
    uVar4 = 0xffffffff;
  }
  iVar2 = *param_1;
  *(uint *)(iVar2 + 0x28) = *(uint *)(iVar2 + 0x28) | 0x8000;
  *(int *)(iVar2 + 0x58) = iVar3;
  *(uint *)(iVar2 + 0x5c) = (uint)uVar1;
  *(undefined4 *)(iVar2 + 0x60) = uVar4;
  return;
}

// 00E78E50  FUN_00e78e50  size=291  [between]
void __fastcall FUN_00e78e50(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_154 [12];
  undefined4 local_148;
  undefined4 local_144;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [284];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_154;
  iVar4 = *param_1;
  if ((*(int *)(iVar4 + 0x1a84) != 4) && ((*(byte *)(param_1 + 2) & 1) != 0)) {
    local_148 = 0;
    local_144 = 0;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    local_134 = 0;
    if (((*(uint *)(iVar4 + 0x28) & 0x8000000) != 0) || ((*(uint *)(iVar4 + 0x28) & 0x40) == 0)) {
      iVar1 = *(int *)(iVar4 + 0x2c);
      local_148 = 0x7f0000;
      local_144 = 0;
      local_140 = iVar1 << 0x10;
      iVar2 = FUN_00e76ba0(&local_148);
      if (iVar2 != 0) {
        uVar3 = FUN_00e00210(*(undefined4 *)(iVar4 + 0x1a70),*(undefined4 *)(iVar4 + 0x1a74));
        iVar4 = thunk_FUN_00e00f00(uVar3,iVar1);
        if (iVar4 != 0) {
          iVar4 = *param_1;
          param_1[0x30] = *(int *)(iVar4 + 0x1a70);
          param_1[0x31] = *(int *)(iVar4 + 0x1a74);
          param_1[0x32] = *(int *)(iVar4 + 0x1a78);
          FUN_00e01ca0();
          FUN_00dffb30(param_1 + 4);
          FUN_00dffaf0(0x10);
          FUN_00e00fb0(uVar3,iVar1,local_130);
        }
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_154);
  return;
}

// 00E78F80  FUN_00e78f80  size=160  [between]
bool __fastcall FUN_00e78f80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar3 = *param_1;
  if ((*(int *)(iVar3 + 0x1a84) == 4) || ((*(byte *)(param_1 + 2) & 1) == 0)) {
    return false;
  }
  if (((*(uint *)(iVar3 + 0x28) & 0x40) == 0) && ((*(uint *)(iVar3 + 0x28) & 0x2000) == 0)) {
    iVar2 = ((int *)param_1[1])[5];
    iVar5 = 0;
    iVar1 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iVar1) {
      puVar4 = (uint *)(iVar2 + 0x10);
      do {
        if ((((-1 < (int)*puVar4) && ((*puVar4 & 1) == 0)) &&
            (iVar2 = FUN_00e86ea0(puVar4 + -4), iVar2 != 0)) && ((char)puVar4[2] == '\x03')) {
          return true;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 0xf;
      } while (iVar5 < iVar1);
    }
  }
  if (*(int *)(iVar3 + 0x2c) != *(int *)(iVar3 + 0x34)) {
    iVar3 = FUN_00e75640(*(int *)(iVar3 + 0x2c));
    return iVar3 == 0;
  }
  return false;
}

// 00E79020  FUN_00e79020  size=406  [between]
void __thiscall FUN_00e79020(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_144 [8];
  int local_13c;
  undefined4 local_138;
  int local_134;
  undefined1 local_130 [284];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_144;
  iVar4 = *param_1;
  sVar2 = FUN_00e86520(*param_2,param_2[1]);
  iVar3 = (int)sVar2;
  if (((iVar3 < 0) || (*(int *)(iVar4 + 0x84) <= iVar3)) ||
     (iVar4 = iVar3 * 0x50 + *(int *)(iVar4 + 0x7c), iVar4 == 0)) {
    local_13c = 0;
  }
  else {
    local_13c = *(int *)(iVar4 + 0x20);
  }
  local_134 = FUN_00e69d70(param_2);
  local_138 = param_2[0xd];
  uVar1 = param_2[10];
  iVar4 = -1;
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 1) == 0) {
      if (*(byte *)((int)param_2 + 0x1e) < 0x20) {
        param_1 = param_1 + (uint)*(byte *)((int)param_2 + 0x1e) * 0x2c + 0x34;
      }
      else {
        param_1 = (int *)0x0;
      }
    }
    else {
      param_1 = (int *)param_1[0x60c];
      iVar4 = *(byte *)((int)param_2 + 0x1e) + 0x80000;
    }
  }
  else {
    if ((uVar1 & 4) != 0) goto LAB_00e7919f;
    param_2[10] = uVar1 | 4;
    param_1 = param_1 + 0x5b4;
  }
  if (local_134 == 0xfff) {
    FUN_00dd5650(&DAT_016d0650);
    __security_check_cookie(local_14 ^ (uint)auStack_144);
    return;
  }
  FUN_00e01ca0();
  if (iVar4 != -1) {
    FUN_00dffad0(iVar4);
  }
  if (param_1 != (int *)0x0) {
    FUN_00dffb30(param_1);
  }
  iVar4 = local_13c;
  if (*(char *)((int)param_2 + 0x1a) == '\0') {
    if (local_13c == 0) {
      puVar5 = &DAT_01be9454;
    }
    else {
      puVar5 = (undefined *)FUN_00a7c910();
    }
  }
  else {
    puVar5 = &DAT_01be9454;
  }
  FUN_00dffac0(puVar5);
  if (iVar4 != 0) {
    if (*(char *)((int)param_2 + 0x19) == '\0') {
      FUN_00e020f0(iVar4);
    }
    else {
      FUN_00e02040(iVar4,param_2[0xb]);
    }
  }
  FUN_00e00fb0(local_134,local_138,local_130);
LAB_00e7919f:
  __security_check_cookie(local_14 ^ (uint)auStack_144);
  return;
}

// 00E791C0  FUN_00e791c0  size=109  [between]
void __fastcall FUN_00e791c0(int *param_1)

{
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0x44) != 0)) {
    FUN_00eb3d80();
  }
  FUN_00a43860();
  if (param_1[3] != 0) {
    FUN_009324e0(0);
    param_1[3] = 0;
  }
  if (((param_1[5] == 0) && (*(int *)(*param_1 + 0x1a84) == 0)) && (param_1[4] != 0)) {
    FUN_00ebdd50(0xffffffff);
    param_1[4] = 0;
  }
  if (*param_1 != 0) {
    FUN_00e75c50();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00E79230  FUN_00e79230  size=107  [between]
void __thiscall FUN_00e79230(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x28);
  if ((uVar2 & 0x40) != 0) {
    return;
  }
  if ((uVar2 & 0x2000) == 0) {
    iVar3 = FUN_00e76ba0(param_3);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_3 + 0x14)) {
    case 3:
LAB_00e79297:
      return;
    }
  }
  else {
    iVar3 = FUN_00e76ba0(param_3);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_3 + 0x14)) {
    case 2:
      goto LAB_00e79297;
    }
  }
  FUN_00932620(iVar1 + 0x1a70,param_3 + 0x1c,param_2);
  return;
}

// 00E792C0  FUN_00e792c0  size=138  [between]
void __thiscall FUN_00e792c0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((*(uint *)(iVar1 + 0x28) & 0x40) != 0) {
    return;
  }
  if ((*(uint *)(iVar1 + 0x28) & 0x2000) == 0) {
    iVar2 = FUN_00e76ba0(param_3);
    if (iVar2 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_3 + 0x14)) {
    case 3:
LAB_00e79346:
      return;
    }
  }
  else {
    iVar2 = FUN_00e76ba0(param_3);
    if (iVar2 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_3 + 0x14)) {
    case 2:
      goto LAB_00e79346;
    }
  }
  iVar2 = (int)*(short *)(param_3 + 8);
  if (iVar2 < 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x84) <= iVar2) {
    return;
  }
  if (iVar2 * 0x50 + *(int *)(iVar1 + 0x7c) == 0) {
    return;
  }
  if (*(char *)(param_3 + 0x1c) != '\x01') {
    if (*(char *)(param_3 + 0x1c) != '\x02') {
      return;
    }
    FUN_00e69600(0);
    return;
  }
  FUN_00e69600(1);
  return;
}

// 00E79370  FUN_00e79370  size=116  [between]
undefined4 __thiscall FUN_00e79370(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3 + 0x1a8;
  param_1[2] = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x74) + 0x58);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd29b0(iVar1 * 0x18,0x20,0,0);
    param_1[3] = iVar1;
    param_1[2] = iVar2;
    param_1[8] = 0;
    return 1;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  return 1;
}

// 00E793F0  FUN_00e793f0  size=329  [between]
undefined4 __thiscall
FUN_00e793f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(byte *)(param_6 + 0x18) & 1) == 0) {
    iVar3 = FUN_00e355e0(param_4);
  }
  else {
    iVar3 = FUN_00e6b580(*(undefined1 *)(param_6 + 0x26),*(undefined4 *)(param_6 + 0x28),param_4);
  }
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016d0134,param_4);
    return param_3;
  }
  if (*(int *)(*(int *)*param_1 + 0x1a70) != 0) {
    cVar2 = *(char *)(((int *)*param_1)[2] + 1);
    if (cVar2 == '\x01') {
      cVar2 = '\x1e';
      goto LAB_00e7947c;
    }
    if (cVar2 != '\x02') {
      cVar2 = FUN_00e23840(iVar3);
      goto LAB_00e7947c;
    }
  }
  cVar2 = '<';
LAB_00e7947c:
  fVar1 = *(float *)(param_6 + 0x4c) / (float)(int)cVar2;
  uVar4 = FUN_00e6a080(param_2,param_3,param_5,fVar1,param_6);
  uVar5 = Animation::Unit::setBlendAnimation
                    (0xffffffff,uVar4,(int)*(char *)(param_6 + 0x38),(int)*(char *)(param_6 + 0x39),
                     (int)*(char *)(param_6 + 0x3a),iVar3,param_4,fVar1,param_5);
  FUN_00e75f50(param_2,uVar4,param_5,fVar1,param_6,1);
  if (*(char *)(param_6 + 0x20) != '\x06') {
    FUN_00e75f50(param_2,uVar4,param_5,fVar1,param_6,2);
    if (*(char *)(param_6 + 0x20) != '\a') {
      FUN_00e75f50(param_2,uVar4,param_5,fVar1,param_6,3);
    }
  }
  return uVar5;
}

// 00E79540  FUN_00e79540  size=104  [between]
void FUN_00e79540(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    bVar2 = Event::MovePosAct(local_30,local_20,param_1,param_2,param_3);
    uVar4 = -(uint)((bVar2 & 1) != 0) & (uint)local_30;
    uVar3 = -(uint)((bVar2 & 2) != 0) & (uint)local_20;
    if ((uVar4 != 0) || (uVar3 != 0)) {
      FUN_009321d0(iVar1,uVar4,uVar3);
    }
  }
  return;
}

// 00E795B0  FUN_00e795b0  size=485  [between]
undefined4 FUN_00e795b0(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    uVar4 = Event::MovePosAct(&local_50,&local_70,param_1,param_2,*param_3);
    uVar5 = Event::MovePosAct(&local_60,&local_30,param_1,param_2,param_3[1]);
    uVar5 = uVar5 & uVar4;
    if (uVar5 != 0) {
      iVar3 = *param_3;
      fVar8 = (float10)FUN_00e71a60(*(undefined1 *)(iVar3 + 0x1e),param_4,
                                    *(undefined4 *)(iVar3 + 0x58),*(undefined4 *)(iVar3 + 0x5c));
      fVar1 = (float)fVar8;
      if ((uVar5 & 1) == 0) {
        pfVar7 = (float *)0x0;
      }
      else {
        pfVar7 = &local_40;
        local_40 = local_50 + fVar1 * (local_60 - local_50);
        local_3c = local_4c + fVar1 * (local_5c - local_4c);
        local_38 = local_48 + fVar1 * (local_58 - local_48);
        local_34 = local_44 + (local_54 - local_44) * fVar1;
      }
      if ((uVar5 & 2) == 0) {
        pfVar6 = (float *)0x0;
      }
      else {
        fVar8 = (float10)FUN_00ddba30(local_30 - local_70);
        fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)fVar1) + local_70);
        local_20 = (float)fVar8;
        fVar8 = (float10)FUN_00ddba30(local_2c - local_6c);
        fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)fVar1) + local_6c);
        local_1c = (float)fVar8;
        fVar8 = (float10)FUN_00ddba30(local_28 - local_68);
        fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)fVar1) + local_68);
        local_18 = (float)fVar8;
        pfVar6 = &local_20;
      }
      if ((pfVar7 != (float *)0x0) || (pfVar6 != (float *)0x0)) {
        FUN_009321d0(iVar2,pfVar7,pfVar6);
      }
      return 1;
    }
  }
  return 0;
}

// 00E797A0  FUN_00e797a0  size=450  [between]
void FUN_00e797a0(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  float10 fVar5;
  undefined1 auStack_e4 [12];
  float local_d8;
  int local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_e4;
  local_d4 = *(int *)(param_2 + 0x20);
  if (local_d4 != 0) {
    local_d0 = Event::MovePosAct(local_a0,local_60,param_1,param_2,*param_3);
    local_cc = Event::MovePosAct(local_90,local_50,param_1,param_2,param_3[1]);
    local_c8 = Event::MovePosAct(local_80,local_40,param_1,param_2,param_3[2]);
    uVar2 = Event::MovePosAct(local_70,local_30,param_1,param_2,param_3[3]);
    uVar2 = uVar2 & local_c8 & local_cc & local_d0;
    if (uVar2 != 0) {
      iVar1 = param_3[1];
      fVar5 = (float10)FUN_00e71a60(*(undefined1 *)(iVar1 + 0x1e),param_4,
                                    *(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x5c));
      local_d8 = (float)fVar5;
      if ((uVar2 & 1) == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        FUN_00e71b30(local_c0,local_a0,local_90,local_80,local_70,0x3f000000,local_d8);
        puVar4 = local_c0;
      }
      if ((uVar2 & 2) == 0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        FUN_00e71b30(local_b0,local_60,local_50,local_40,local_30,0x3f000000,local_d8);
        puVar3 = local_b0;
      }
      if ((puVar4 != (undefined1 *)0x0) || (puVar3 != (undefined1 *)0x0)) {
        FUN_009321d0(local_d4,puVar4,puVar3);
      }
      __security_check_cookie(local_14 ^ (uint)auStack_e4);
      return;
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_e4);
  return;
}

// 00E79970  FUN_00e79970  size=312  [between]
void __thiscall FUN_00e79970(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  if (*param_3 < 0) {
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  fVar2 = *(float *)(*param_1 + 0x14);
  iVar4 = FUN_00931ea0();
  iVar3 = *param_3;
  if (((iVar3 < 0) || (*(int *)(param_1[2] + 0x18) <= iVar3)) ||
     (piVar1 = (int *)(*(int *)(param_1[2] + 0x10) + iVar3 * 4), piVar1 == (int *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar1;
  }
  *param_2 = iVar3;
  iVar3 = iVar3 + 1;
  fVar7 = (float10)FUN_00932000(param_1[0xf]);
  param_2[1] = (int)((float)param_1[0xe] * (float)fVar7 * fVar2 + (float)param_3[1]);
  if (iVar3 < *(int *)(param_1[2] + 0x18)) {
    if ((param_1[0x13] != -1) && (*(int *)(*param_1 + 0x1a84) == 4)) {
      iVar5 = FUN_00e75640(iVar3);
      if (iVar5 == 0) goto LAB_00e79a2c;
    }
    fVar2 = (float)iVar6 - fVar2;
    if (fVar2 < (float)param_2[1]) {
      if (fVar2 <= (float)param_3[1]) {
        *param_2 = iVar3;
        fVar2 = 0.0;
      }
      param_2[1] = (int)fVar2;
      return;
    }
  }
  else {
LAB_00e79a2c:
    if ((float)(iVar6 - iVar4) < (float)param_2[1]) {
      param_2[1] = (int)(float)(iVar6 - iVar4);
      return;
    }
  }
  return;
}

// 00E79AB0  FUN_00e79ab0  size=189  [between]
undefined4 __thiscall FUN_00e79ab0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00931ea0();
  iVar3 = FUN_00fdbc60();
  iVar4 = *param_2;
  iVar2 = param_1[2];
  if (((iVar4 < 0) || (*(int *)(iVar2 + 0x18) <= iVar4)) ||
     (piVar1 = (int *)(*(int *)(iVar2 + 0x10) + iVar4 * 4), piVar1 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  if (((float)(iVar5 - iVar3) <= (float)param_2[1]) &&
     ((*(int *)(iVar2 + 0x18) <= iVar4 + 1 ||
      (((param_1[0x13] != -1 && (*(int *)(*param_1 + 0x1a84) == 4)) &&
       (iVar4 = FUN_00e75640(iVar4 + 1), iVar4 == 0)))))) {
    return 1;
  }
  return 0;
}

// 00E79B70  FUN_00e79b70  size=182  [between]
void __thiscall FUN_00e79b70(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 2) {
    iVar1 = FUN_00e79ab0((int *)(param_1 + 0x14));
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if ((-1 < iVar1) && (iVar1 < *(int *)(*(int *)(param_1 + 8) + 0x18))) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2000000;
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x18);
        *(int *)(param_1 + 0x2c) = iVar1;
        return;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == -1) {
        if (0 < *(int *)(*(int *)(param_1 + 8) + 0x18)) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2000000;
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x2c) = 0;
          return;
        }
      }
      else if ((-1 < iVar1) && (iVar1 < *(int *)(*(int *)(param_1 + 8) + 0x18))) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2000000;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(int *)(param_1 + 0x2c) = iVar1;
        return;
      }
    }
    FUN_00dd5650(&DAT_016d022c);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x2000000;
  }
  return;
}

// 00E79D00  FUN_00e79d00  size=86  [between]
void __fastcall FUN_00e79d00(int param_1)

{
  int local_8;
  undefined4 local_4;
  
  FUN_00e76400(&local_8,param_1 + 0x14);
  if (local_8 < 0) {
    local_8 = 0;
    local_4 = 0;
  }
  if (local_8 < *(int *)(*(int *)(param_1 + 8) + 0x18)) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
    *(undefined4 *)(param_1 + 0x30) = local_4;
    *(int *)(param_1 + 0x2c) = local_8;
    return;
  }
  FUN_00dd5650(&DAT_016d022c);
  return;
}

// 00E79DE0  FUN_00e79de0  size=213  [between]
void __fastcall FUN_00e79de0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_00931ea0();
  iVar3 = FUN_00fdbc60();
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(param_1 + 0x14);
  if (((iVar4 == -1) && (iVar4 = iVar2 + 1, *(int *)(*(int *)(param_1 + 8) + 0x18) <= iVar4)) ||
     (iVar2 == iVar4)) {
    iVar4 = *(int *)(param_1 + 8);
    if (((iVar2 < 0) || (*(int *)(iVar4 + 0x18) <= iVar2)) ||
       (piVar1 = (int *)(*(int *)(iVar4 + 0x10) + iVar2 * 4), piVar1 == (int *)0x0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
    if ((-1 < iVar2) && (iVar2 < *(int *)(iVar4 + 0x18))) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
      *(int *)(param_1 + 0x2c) = iVar2;
      *(float *)(param_1 + 0x30) = (float)(iVar5 - iVar3);
      return;
    }
  }
  else if ((-1 < iVar4) && (iVar4 < *(int *)(*(int *)(param_1 + 8) + 0x18))) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000000;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(int *)(param_1 + 0x2c) = iVar4;
    return;
  }
  FUN_00dd5650(&DAT_016d022c);
  return;
}

// 00E79EC0  FUN_00e79ec0  size=139  [between]
void __thiscall FUN_00e79ec0(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  
  if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
    iVar4 = FUN_00e76ba0(param_2);
    if (iVar4 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 3:
switchD_00e79ee3_caseD_3:
      return;
    }
  }
  else {
    iVar4 = FUN_00e76ba0(param_2);
    if (iVar4 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 2:
      goto switchD_00e79ee3_caseD_3;
    }
  }
  iVar4 = 0;
  puVar5 = (undefined2 *)(param_2 + 0x20);
  do {
    cVar1 = *(char *)(iVar4 + 0x1c + param_2);
    if (cVar1 == '\x01') {
      uVar2 = *(undefined1 *)(iVar4 + 0x28 + param_2);
      uVar3 = *puVar5;
      uVar6 = 1;
LAB_00e79f34:
      FUN_00932360(uVar3,uVar2,uVar6);
    }
    else if (cVar1 == '\x02') {
      uVar2 = *(undefined1 *)(iVar4 + 0x28 + param_2);
      uVar3 = *puVar5;
      uVar6 = 0;
      goto LAB_00e79f34;
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}

// 00E79F70  FUN_00e79f70  size=140  [between]
void __thiscall FUN_00e79f70(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  Event::SeModule::updatePlaySeq(param_2,*(undefined4 *)(param_2 + 0x18));
  if ((*(byte *)(param_2 + 0x20) & 1) != 0) {
    FUN_00e4ad10((int)*(char *)(param_2 + 0x25),(float)(int)*(short *)(param_2 + 0x26));
  }
  cVar1 = *(char *)(param_2 + 0x24);
  if (cVar1 != '\0') {
    iVar2 = (int)*(short *)(param_2 + 8);
    if (((iVar2 < 0) || (*(int *)(*param_1 + 0x84) <= iVar2)) ||
       (iVar2 = iVar2 * 0x50 + *(int *)(*param_1 + 0x7c), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x20);
    }
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c890();
      if (iVar2 != 0) {
        FUN_00e36b50(0xffffffff,2,cVar1 == '\x01');
      }
    }
  }
  return;
}

// 00E7A000  FUN_00e7a000  size=92  [between]
int __thiscall FUN_00e7a000(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*param_1 + 0x20);
  iVar2 = (int)*(short *)(param_2 + 10);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 < *(int *)(iVar1 + 0x18)) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + iVar2 * 4);
  }
  else {
    iVar2 = 0;
  }
  iVar2 = *(short *)(param_2 + 0xc) + iVar2;
  iVar3 = (int)*(short *)(param_3 + 10);
  if ((-1 < iVar3) && (iVar3 < *(int *)(iVar1 + 0x18))) {
    return (iVar2 - *(short *)(param_3 + 0xc)) - *(int *)(*(int *)(iVar1 + 0x24) + iVar3 * 4);
  }
  return iVar2 - *(short *)(param_3 + 0xc);
}

// 00E7A060  FUN_00e7a060  size=113  [between]
float10 __thiscall FUN_00e7a060(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x2c);
  if (iVar2 < 0) {
    local_4 = 0;
  }
  else if (iVar2 < *(int *)(*(int *)(iVar1 + 0x20) + 0x18)) {
    local_4 = *(int *)(*(int *)(*(int *)(iVar1 + 0x20) + 0x24) + iVar2 * 4);
  }
  else {
    local_4 = 0;
  }
  iVar2 = (int)*(short *)(param_2 + 10);
  if ((iVar2 < 0) || (*(int *)(*(int *)(iVar1 + 0x20) + 0x18) <= iVar2)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x20) + 0x24) + iVar2 * 4);
  }
  return (float10)((*(float *)(iVar1 + 0x30) + (float)local_4) -
                  (float)(*(short *)(param_2 + 0xc) + iVar2));
}

// 00E7A0E0  FUN_00e7a0e0  size=112  [between]
undefined4 __thiscall FUN_00e7a0e0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_3 + 0x1c;
  param_1[3] = 0;
  FUN_00e6a840();
  FUN_00931970();
  if (*(int *)(param_2 + 0x1a70) == 0) {
    DAT_01dd9ed4 = DAT_01dd9ed4 + 1;
  }
  else {
    DAT_01dd9ecc = DAT_01dd9ecc + 1;
  }
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    iVar1 = FUN_00e71050(param_3);
    if (iVar1 == 0) {
      FUN_009322f0(1);
      param_1[3] = param_1[3] | 1;
    }
  }
  return 1;
}

// 00E7A150  FUN_00e7a150  size=180  [between]
void __fastcall FUN_00e7a150(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  int iStack_4;
  
  iVar3 = ((int *)param_1[1])[5];
  iStack_4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (0 < iStack_4) {
    puVar4 = (undefined1 *)(iVar3 + 0x14);
    do {
      if ((-1 < (int)*(uint *)(puVar4 + -4)) && ((*(uint *)(puVar4 + -4) & 1) == 0)) {
        iVar3 = *param_1;
        if ((*(uint *)(iVar3 + 0x28) & 0x2000) == 0) {
          iVar2 = FUN_00e76ba0(puVar4 + -0x14);
          if (iVar2 != 0) {
            switch(*puVar4) {
            default:
switchD_00e7a1a1_caseD_0:
              uVar1 = *(uint *)(iVar3 + 0x28);
              if (((uVar1 & 0x40) == 0) || ((uVar1 & 0x200000) != 0)) {
                param_1[2] = 1;
                piVar5 = (int *)(puVar4 + -0x14);
                piVar6 = param_1 + 3;
                for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar6 = *piVar5;
                  piVar5 = piVar5 + 1;
                  piVar6 = piVar6 + 1;
                }
                param_1[0x12] = 0;
                param_1[0x13] = 0;
              }
              break;
            case 3:
              break;
            }
          }
        }
        else {
          iVar2 = FUN_00e76ba0(puVar4 + -0x14);
          if (iVar2 != 0) {
            switch(*puVar4) {
            default:
              goto switchD_00e7a1a1_caseD_0;
            case 2:
              break;
            }
          }
        }
      }
      puVar4 = puVar4 + 0x3c;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  }
  return;
}

// 00E7A230  FUN_00e7a230  size=183  [between]
void __fastcall FUN_00e7a230(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar3 = ((int *)param_1[1])[5];
  iVar2 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (0 < iVar2) {
    puVar4 = (undefined1 *)(iVar3 + 0x14);
    do {
      if ((-1 < (int)*(uint *)(puVar4 + -4)) && ((*(uint *)(puVar4 + -4) & 1) == 0)) {
        uVar1 = *(uint *)(*param_1 + 0x28);
        if ((uVar1 & 0x2000) == 0) {
          iVar3 = FUN_00e76ba0(puVar4 + -0x14);
          if (iVar3 != 0) {
            switch(*puVar4) {
            default:
switchD_00e7a283_caseD_0:
              if (((uVar1 & 0x40) == 0) && (iVar3 = *(int *)(puVar4 + 4), -1 < iVar3)) {
                if (iVar3 < 2) {
                  FUN_009324f0(iVar3,puVar4 + 8);
                }
                else if (iVar3 == 2) {
                  Event::UiModule::setWaitUi(puVar4 + 8);
                }
              }
              break;
            case 3:
              break;
            }
          }
        }
        else {
          iVar3 = FUN_00e76ba0(puVar4 + -0x14);
          if (iVar3 != 0) {
            switch(*puVar4) {
            default:
              goto switchD_00e7a283_caseD_0;
            case 2:
              break;
            }
          }
        }
      }
      puVar4 = puVar4 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 00E7A310  FUN_00e7a310  size=222  [between]
int __fastcall FUN_00e7a310(int param_1)

{
  int iVar1;
  int iVar2;
  
  while (iVar1 = *(int *)(param_1 + 8), iVar1 == 1) {
    iVar1 = FUN_00e6cae0(param_1 + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 != 1) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 8) = 5;
      return iVar1 + -2;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (iVar1 == 2) {
    FUN_00e67dc0(param_1 + 0x10,&DAT_016d02a4);
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar1 = FUN_00e717f0(param_1 + 0x70);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      return iVar1;
    }
    iVar1 = FUN_00e718b0(param_1 + 0x70);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 5;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    iVar1 = iVar1 + -3;
    if (iVar1 == 0) {
      FUN_00e67dc0(param_1 + 0x10,&DAT_016cfac4);
      if (*(int *)(param_1 + 0xc) == 0) {
        iVar1 = FUN_00931f30(param_1 + 0x70);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        return iVar1;
      }
      iVar2 = FUN_00931f50(param_1 + 0x70,0);
      iVar1 = 0;
      if (iVar2 != 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(undefined4 *)(param_1 + 0xc) = 0;
        return iVar2;
      }
    }
  }
  return iVar1;
}

// 00E7A3F0  Event::ReadUnitExternal::vf08  size=214  [class]
void __fastcall Event::ReadUnitExternal::vf08(int *param_1)

{
  int iVar1;
  undefined1 local_10 [12];
  
  while( true ) {
    while (iVar1 = param_1[2], iVar1 != 1) {
      if (iVar1 == 2) {
        if (param_1[3] == 0) {
          FUN_00e717f0(param_1 + 4);
          param_1[3] = param_1[3] + 1;
        }
        iVar1 = FUN_00e718b0(param_1 + 4);
        if (iVar1 == 0) {
          return;
        }
        param_1[2] = param_1[2] + 1;
        param_1[3] = 0;
      }
      else {
        if (iVar1 != 3) {
          return;
        }
        if (param_1[3] == 0) {
          FUN_00931f30(param_1 + 4,0);
          param_1[3] = param_1[3] + 1;
        }
        iVar1 = FUN_00931f50(param_1 + 4,0);
        if (iVar1 == 0) {
          return;
        }
        param_1[2] = param_1[2] + 1;
        param_1[3] = 0;
      }
    }
    FUN_00de3530();
    iVar1 = (**(code **)(*param_1 + 0x34))(local_10,param_1 + 4);
    if (iVar1 == 0) break;
    iVar1 = FUN_00e6c5d0(local_10,0);
    param_1[3] = 0;
    if (iVar1 == 0) goto LAB_00e7a4b7;
    param_1[2] = param_1[2] + 1;
  }
  param_1[3] = 0;
LAB_00e7a4b7:
  param_1[2] = 5;
  return;
}

// 00E7A4D0  Event::ReadUnitNorm::vf08  size=245  [class]
void __fastcall Event::ReadUnitNorm::vf08(int param_1)

{
  int iVar1;
  bool bVar2;
  
LAB_00e7a4e0:
  switch(*(int *)(param_1 + 8)) {
  case 1:
    if ((*(byte *)(param_1 + 4) & 8) != 0) {
      iVar1 = FUN_00dfbfb0(*(undefined4 *)(param_1 + 0x10));
      if (iVar1 == 1) {
        return;
      }
      if (iVar1 != 2) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 8) = 8;
        return;
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    break;
  case 2:
    iVar1 = FUN_00e715e0();
    goto LAB_00e7a4fd;
  case 3:
    iVar1 = FUN_00e71680();
    goto LAB_00e7a4fd;
  case 4:
    iVar1 = FUN_00e71720();
LAB_00e7a4fd:
    if (iVar1 == 0) {
      return;
    }
    goto LAB_00e7a4e0;
  case 5:
    if ((*(byte *)(param_1 + 4) & 8) != 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      goto LAB_00e7a4e0;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_00e717f0(param_1 + 0x1c);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    iVar1 = FUN_00e718b0(param_1 + 0x1c);
    if (iVar1 != 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      goto LAB_00e7a4e0;
    }
    break;
  case 6:
    bVar2 = *(int *)(param_1 + 0x10) != 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_00931f30(param_1 + 0x1c,bVar2);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    iVar1 = FUN_00931f50(param_1 + 0x1c,bVar2);
    if (iVar1 != 0) {
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      *(undefined4 *)(param_1 + 0xc) = 0;
      goto LAB_00e7a4e0;
    }
  }
  return;
}

// 00E7A5E0  FUN_00e7a5e0  size=16  [between]
void FUN_00e7a5e0(undefined4 param_1)

{
  FUN_00e779a0(param_1,0);
  return;
}

// 00E7A5F0  FUN_00e7a5f0  size=48  [between]
undefined4 FUN_00e7a5f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e723d0(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  switch(uVar2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    return 1;
  default:
    return 0;
  }
}

// 00E7A640  FUN_00e7a640  size=48  [between]
undefined4 FUN_00e7a640(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e723d0(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  switch(uVar2) {
  case 1:
    return 1;
  default:
    return 0;
  }
}

// 00E7A690  FUN_00e7a690  size=48  [between]
undefined4 FUN_00e7a690(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e723d0(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  switch(uVar2) {
  default:
    return 0;
  case 2:
  case 3:
    return 1;
  }
}

// 00E7A6E0  FUN_00e7a6e0  size=48  [between]
undefined4 FUN_00e7a6e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e723d0(param_1,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  switch(uVar2) {
  default:
    return 0;
  case 3:
    return 1;
  }
}

// 00E7A960  Event::ActorDataHolder::ActorDataHolder  size=153  [class]
undefined4 * __fastcall Event::ActorDataHolder::ActorDataHolder(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  FUN_00de3530();
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  FUN_00de3540(0,0);
  return param_1;
}

// 00E7ABB0  Event::ActorDataHolder::vf0C  size=268  [class]
void __fastcall Event::ActorDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    if (*(int *)(param_1 + 0x98) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x8c),0);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x78),0);
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    if (*(int *)(param_1 + 0x70) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 100),0);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(int *)(param_1 + 0x5c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x50),0);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  FUN_00de3540(0,0);
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0xa0),0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E7ACF0  Event::BgmDataHolder::vf08  size=19  [class]
bool Event::BgmDataHolder::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e8f5a0(param_1);
  return iVar1 != 0;
}

// 00E7AD10  Event::BgmDataHolder::vf0C  size=98  [class]
void __fastcall Event::BgmDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00dd48d0(*(undefined4 *)(param_1 + 0x44),0);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 00E7AD80  Event::CameraDataHolder::CameraDataHolder  size=69  [class]
undefined4 * __fastcall Event::CameraDataHolder::CameraDataHolder(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  FUN_00de3530();
  param_1[0x13] = 0;
  FUN_00de3540(0,0);
  return param_1;
}

// 00E7ADD0  Event::CameraDataHolder::vf08  size=108  [class]
undefined4 __thiscall Event::CameraDataHolder::vf08(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return 1;
  }
  uVar1 = FUN_00e03ea0("CameraList.bxm");
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 != 0) {
    iVar2 = cXmlBinary::cXmlBinary_80(iVar2);
    if (iVar2 != 0) {
      iVar2 = FUN_00e897c0(param_2);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x44) = *param_2;
        *(undefined4 *)(param_1 + 0x48) = param_2[1];
        return 1;
      }
    }
  }
  return 0;
}

// 00E7AE40  Event::CameraDataHolder::vf0C  size=84  [class]
void __fastcall Event::CameraDataHolder::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_00de3540(0,0);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E7AED0  Event::ControlDataHolder::vf0C  size=71  [class]
void __fastcall Event::ControlDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E7B110  FUN_00e7b110  size=165  [callgraph]
bool __thiscall FUN_00e7b110(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dfc030(param_2);
  if (iVar1 == 0) {
    return false;
  }
  *(undefined2 *)(param_1 + 8) = 0x1e3c;
  *(undefined1 *)(param_1 + 10) = 0x3c;
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar1 = FUN_00e84fc0(1);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016cdba0);
      return false;
    }
  }
  if (*(int *)(param_1 + 0x18) != 1) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  **(undefined4 **)(param_1 + 0x10) = 0;
  uVar2 = FUN_00fdbc60();
  **(undefined4 **)(param_1 + 0x10) = uVar2;
  FUN_00e72f50();
  iVar1 = FUN_00e77f60();
  return iVar1 != 0;
}

// 00E7B1F0  Event::EffectDataHolder::vf08  size=92  [class]
undefined4 __thiscall Event::EffectDataHolder::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return 1;
  }
  iVar1 = FUN_00e8c240(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00de3d30(0,&DAT_016ca67c,0);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00de3d30(1,&DAT_016ca678,0);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  return 1;
}

// 00E7B250  Event::EffectDataHolder::vf0C  size=130  [class]
void __fastcall Event::EffectDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x44),0);
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00a27fe0(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0x48),0);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E7B310  Event::GraphicDataHolder::vf08  size=92  [class]
undefined4 __thiscall Event::GraphicDataHolder::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return 1;
  }
  iVar1 = FUN_00e8cc80(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00de3d30(1,&DAT_01661eec,0);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00de3d30(0,&DAT_01661ee4,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  return 1;
}

// 00E7B370  Event::GraphicDataHolder::vf0C  size=143  [class]
void __fastcall Event::GraphicDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00a27fe0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0x44),0);
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      FUN_00a27fe0(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0x4c),0);
    }
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E7B440  Event::ModelControlDataHolder::vf08  size=39  [class]
bool __thiscall Event::ModelControlDataHolder::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return true;
  }
  iVar1 = FUN_00e8d700(param_2);
  return iVar1 != 0;
}

// 00E7B4B0  Event::MoveDataHolder::vf08  size=39  [class]
bool __thiscall Event::MoveDataHolder::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return true;
  }
  iVar1 = FUN_00e8b7e0(param_2);
  return iVar1 != 0;
}

// 00E7B520  Event::ScrDataHolder::vf08  size=39  [class]
bool __thiscall Event::ScrDataHolder::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return true;
  }
  iVar1 = FUN_00e8e130(param_2);
  return iVar1 != 0;
}

// 00E7B580  Event::SeDataHolder::vf08  size=19  [class]
bool Event::SeDataHolder::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e8eb40(param_1);
  return iVar1 != 0;
}

// 00E7B5A0  Event::SeDataHolder::vf0C  size=98  [class]
void __fastcall Event::SeDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00dd48d0(*(undefined4 *)(param_1 + 0x44),0);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

// 00E7B640  Event::VibDataHolder::vf08  size=19  [class]
bool Event::VibDataHolder::vf08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e90a10(param_1);
  return iVar1 != 0;
}

// 00E7B660  Event::VibDataHolder::vf0C  size=71  [class]
void __fastcall Event::VibDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E7B6E0  Event::UiDataHolder::vf08  size=39  [class]
bool __thiscall Event::UiDataHolder::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return true;
  }
  iVar1 = FUN_00e8ffb0(param_2);
  return iVar1 != 0;
}

// 00E7B710  Event::UiDataHolder::vf0C  size=71  [class]
void __fastcall Event::UiDataHolder::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E7B760  FUN_00e7b760  size=270  [between]
int __fastcall FUN_00e7b760(int param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 3;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 2;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  FUN_00e753f0();
  *(undefined4 *)(param_1 + 0x19c0) = 0;
  *(undefined4 *)(param_1 + 0x19c4) = 0;
  *(undefined4 *)(param_1 + 0x19d8) = 0;
  *(undefined4 *)(param_1 + 0x19dc) = 0;
  *(undefined4 *)(param_1 + 0x19e0) = 0;
  *(undefined4 *)(param_1 + 0x19e4) = 0;
  *(undefined4 *)(param_1 + 0x19e8) = 0;
  *(undefined4 *)(param_1 + 0x19ec) = 0;
  *(undefined4 *)(param_1 + 0x19f0) = 0;
  *(undefined4 *)(param_1 + 0x19f4) = 0;
  *(undefined4 *)(param_1 + 0x19f8) = 0;
  *(undefined4 *)(param_1 + 0x19fc) = 0;
  *(undefined4 *)(param_1 + 0x1a14) = 0;
  *(undefined4 *)(param_1 + 0x1a18) = 0;
  *(undefined4 *)(param_1 + 0x1a74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a78) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a70) = 3;
  return param_1;
}

// 00E7B870  FUN_00e7b870  size=118  [between]
void __fastcall FUN_00e7b870(int param_1)

{
  FUN_00e75440();
  if (*(int *)(param_1 + 0x98) != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x98),0);
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x7c),0);
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}

// 00E7B920  Event::PlayUnit  size=176  [class]
void __thiscall Event::PlayUnit(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1a84) != param_2) {
    if (param_2 == 0) {
      FUN_00dd5650(&DAT_016d1230);
      return;
    }
    FUN_00e79b70(param_2,*(int *)(param_1 + 0x1a84));
    if (*(int *)(param_1 + 0x1a84) == 2) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      FUN_009319b0(0);
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
    FUN_00e69ed0(param_2,*(undefined4 *)(param_1 + 0x1a84));
    if ((param_2 == 5) || (param_2 == 6)) {
      FUN_00a28a20(0x3f800000);
      *(undefined4 *)(param_1 + 0x19c8) = 0xbf800000;
    }
    *(undefined4 *)(param_1 + 0x1a00) = 0;
    FUN_00932510();
    *(int *)(param_1 + 0x1a84) = param_2;
  }
  return;
}

// 00E7BA50  FUN_00e7ba50  size=304  [between]
void __fastcall FUN_00e7ba50(int *param_1)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1[9] == 0) {
    return;
  }
  if ((*(int *)(*param_1 + 0x1a84) == 0) || (*(int *)(*param_1 + 0x1a84) == 2)) {
    if ((*(byte *)(param_1 + 0xb) & 2) == 0) {
      return;
    }
  }
  else if (((param_1[0xb] & 2U) == 0) && (param_1[8] != 0)) {
    param_1[0xb] = param_1[0xb] | 2;
    FUN_009321a0(param_1[8],1);
    param_1[10] = -1;
  }
  fVar1 = *(float *)(*param_1 + 0x30);
  iVar4 = *(int *)(*param_1 + 0x2c);
  if (iVar4 != param_1[10]) {
    FUN_00e784b0(iVar4);
    param_1[10] = iVar4;
  }
  if ((*(byte *)(param_1 + 0xb) & 8) == 0) {
    FUN_009322c0(param_1[8],0,0);
    return;
  }
  uVar3 = FUN_00e6cea0(param_1[2],iVar4);
  if (*(int *)(*(int *)*param_1 + 0x1a70) != 0) {
    cVar2 = *(char *)(((int *)*param_1)[2] + 1);
    if (cVar2 == '\x01') {
      cVar2 = '\x1e';
      goto LAB_00e7bb04;
    }
    if (cVar2 != '\x02') {
      cVar2 = FUN_00e23840(uVar3);
      goto LAB_00e7bb04;
    }
  }
  cVar2 = '<';
LAB_00e7bb04:
  FUN_009322c0(param_1[8],uVar3,fVar1);
  if (((*(byte *)(param_1[9] + 0x94) & 1) != 0) && (iVar4 = FUN_00e26e90(), iVar4 != 0)) {
    Animation::Motion::Unit::setCurrentTime(0,fVar1 / (float)(int)cVar2);
    return;
  }
  return;
}

// 00E7BBB0  FUN_00e7bbb0  size=356  [between]
void __fastcall FUN_00e7bbb0(int *param_1)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    local_8 = param_1[5];
    if (0 < local_8) {
      puVar6 = (uint *)(param_1[3] + 0x2c);
      do {
        if (puVar6[-2] != 0) {
          if ((*(int *)(puVar6[-0xb] + 0x1a84) == 0) || (*(int *)(puVar6[-0xb] + 0x1a84) == 2)) {
            if ((*puVar6 & 2) == 0) goto LAB_00e7bcff;
          }
          else if (((*puVar6 & 2) == 0) && (puVar6[-3] != 0)) {
            *puVar6 = *puVar6 | 2;
            FUN_009321a0(puVar6[-3],1);
            puVar6[-1] = 0xffffffff;
          }
          uVar2 = *(uint *)(puVar6[-0xb] + 0x2c);
          fVar1 = *(float *)(puVar6[-0xb] + 0x30);
          if (uVar2 != puVar6[-1]) {
            FUN_00e784b0(uVar2);
            puVar6[-1] = uVar2;
          }
          if ((*puVar6 & 8) == 0) {
            FUN_009322c0(puVar6[-3],0,0);
          }
          else {
            uVar4 = FUN_00e6cea0(puVar6[-9],uVar2);
            if (*(int *)(*(int *)puVar6[-0xb] + 0x1a70) == 0) {
LAB_00e7bc6e:
              cVar3 = '<';
            }
            else {
              cVar3 = *(char *)(((int *)puVar6[-0xb])[2] + 1);
              if (cVar3 == '\x01') {
                cVar3 = '\x1e';
              }
              else {
                if (cVar3 == '\x02') goto LAB_00e7bc6e;
                cVar3 = FUN_00e23840(uVar4);
              }
            }
            FUN_009322c0(puVar6[-3],uVar4,fVar1);
            if (((*(byte *)(puVar6[-2] + 0x94) & 1) != 0) && (iVar5 = FUN_00e26e90(), iVar5 != 0)) {
              Animation::Motion::Unit::setCurrentTime(0,fVar1 / (float)(int)cVar3);
            }
          }
        }
LAB_00e7bcff:
        puVar6 = puVar6 + 0x14;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}

// 00E7BD30  FUN_00e7bd30  size=152  [between]
void FUN_00e7bd30(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  *param_1 = *(undefined4 *)(param_3 + 0x40);
  param_1[1] = *(undefined4 *)(param_3 + 0x44);
  param_1[2] = *(undefined4 *)(param_3 + 0x48);
  param_1[3] = 0x3f800000;
  param_1[4] = *(undefined4 *)(param_3 + 0x4c);
  param_1[5] = *(undefined4 *)(param_3 + 0x50);
  param_1[6] = *(undefined4 *)(param_3 + 0x54);
  param_1[7] = 0x3f800000;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  param_1[0xb] = local_14;
  param_1[0xc] = *(undefined4 *)(param_3 + 0x58);
  param_1[0x11] = *(undefined4 *)(param_3 + 0x34);
  param_1[0x12] = *(undefined4 *)(param_3 + 0x38);
  param_1[0x10] = *(undefined4 *)(param_3 + 0x30);
  if ((*(byte *)(param_3 + 0x3c) & 1) == 0) {
    uVar1 = 0x3f5f66f3;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x5c);
  }
  param_1[0xd] = uVar1;
  FUN_00e78740(param_1,param_2,param_3);
  FUN_00e787e0(param_1,param_2,param_3);
  return;
}

// 00E7BDD0  FUN_00e7bdd0  size=142  [between]
float10 FUN_00e7bdd0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    fVar1 = (float10)FUN_00e7a060(param_1);
    fVar1 = (float10)(float)(fVar1 - (float10)*(ushort *)(param_1 + 0x20));
    if (fVar1 < (float10)0) {
      return (float10)0;
    }
    fVar2 = (float10)*(ushort *)(param_1 + 0x22);
    if (fVar2 < fVar1 == (fVar2 == fVar1)) {
      fVar1 = (float10)FUN_00e71a60(*(undefined1 *)(param_1 + 0x1e),(float)(fVar1 / fVar2),
                                    *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28))
      ;
      return fVar1;
    }
  }
  return (float10)1;
}

// 00E7BE60  FUN_00e7be60  size=304  [between]
float10 FUN_00e7be60(int param_1,undefined4 param_2)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 fVar6;
  float10 extraout_ST1;
  
  uVar2 = *(ushort *)(param_1 + 0x20);
  fVar4 = (float10)FUN_00e7a060(param_1);
  fVar1 = (float)(fVar4 - (float10)uVar2);
  if (*(char *)(param_1 + 0x1f) == '\0') {
    fVar4 = (float10)fVar1;
    if (fVar4 < (float10)0) {
      return (float10)0;
    }
    if (*(ushort *)(param_1 + 0x22) == 0) {
      iVar3 = FUN_00e7a000(param_2,param_1);
      fVar5 = (float10)iVar3 - extraout_ST1;
      fVar4 = extraout_ST0;
    }
    else {
      fVar5 = (float10)*(ushort *)(param_1 + 0x22);
    }
    fVar5 = (float10)(float)fVar5;
    if (fVar5 < fVar4 == (fVar5 == fVar4)) {
      fVar4 = (float10)FUN_00e71a60(*(undefined1 *)(param_1 + 0x1e),(float)(fVar4 / fVar5),
                                    *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28))
      ;
      return fVar4;
    }
  }
  else {
    fVar4 = (float10)0;
    fVar5 = (float10)fVar1;
    if (fVar4 <= fVar5) {
      fVar6 = (float10)*(ushort *)(param_1 + 0x22);
      if ((fVar4 != fVar6) && (fVar6 < fVar5 == (fVar6 == fVar5))) {
        fVar4 = (float10)FUN_00e748e0((float)((float10)1 - fVar5 / fVar6),param_1);
        return fVar4;
      }
      return fVar4;
    }
  }
  return (float10)1;
}

// 00E7BF90  FUN_00e7bf90  size=1075  [between]
void __thiscall FUN_00e7bf90(int *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  undefined4 uVar6;
  double dStack_f4;
  undefined1 *puStack_f0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [12];
  float local_a0;
  float local_9c;
  float local_98 [2];
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_d4;
  param_2[0x10] = 0.0;
  param_2[0x11] = 0.0;
  param_2[0x12] = 0.0;
  local_d4 = (float)FUN_00e6f8e0();
  if (local_d4 == 0.0) {
    FUN_00dd5650();
  }
  else {
    Animation::MotReader();
    if (((*(uint *)(param_1[4] + 4) < 0x20120405) || (*(char *)(param_1[4] + 0x15) == '\0')) &&
       ((cVar2 = *(char *)(*(int *)(*param_1 + 8) + 1), cVar2 == '\x01' || (cVar2 == '\x02')))) {
      Animation::MotReader::setFps_2();
    }
    fVar4 = (float10)FUN_00e6a8c0();
    local_d4 = (float)fVar4;
    fVar4 = (float10)FUN_00e7a060();
    local_d4 = (float)((fVar4 - (float10)*(float *)(param_3 + 0x50)) * (float10)local_d4);
    if (local_d4 < 0.0) {
      local_d4 = 0.0;
    }
    FUN_00e24230();
    iVar3 = Animation::MotReader::pullCameraParam();
    if (iVar3 != 0) {
      if (((*(byte *)(param_3 + 0x3c) & 1) != 0) && (iVar3 = FUN_00e86640(), iVar3 != 0)) {
        dStack_f4 = (double)CONCAT44(0xe7c0ca,uVar6);
        FID_conflict__memcpy(&local_a0,(void *)(iVar3 + 0x10),0x40);
        if ((*(byte *)(param_3 + 0x3c) & 2) != 0) {
          local_d4 = local_9c * local_9c + local_a0 * local_a0 + local_98[0] * local_98[0];
          fVar4 = (float10)FUN_00fdef70();
          local_d0 = (float)fVar4;
          local_d4 = local_8c * local_8c + local_90 * local_90 + local_88 * local_88;
          fVar4 = (float10)FUN_00fdef70();
          local_cc = (float)fVar4;
          local_d4 = local_7c * local_7c + local_80 * local_80 + local_78 * local_78;
          fVar4 = (float10)FUN_00fdef70();
          local_d4 = (float)fVar4;
          local_d0 = 1.0 / local_d0;
          local_cc = 1.0 / local_cc;
          local_c8 = 1.0 / local_d4;
          FUN_00ddd140();
          dStack_f4 = (double)CONCAT44(0xe7c20a,uVar6);
          D3DXMatrixMultiply();
        }
        dStack_f4 = (double)CONCAT44(0xe7c216,uVar6);
        D3DXVec3TransformNormal();
        pfVar1 = param_2 + 4;
        *param_2 = *param_2 + local_7c;
        dStack_f4 = (double)CONCAT44(auStack_ac,pfVar1);
        param_2[1] = local_78 + param_2[1];
        param_2[2] = param_2[2] + fStack_74;
        D3DXVec3TransformNormal(pfVar1,pfVar1);
        *pfVar1 = local_88 + *pfVar1;
        param_2[5] = param_2[5] + fStack_84;
        param_2[6] = param_2[6] + local_80;
        local_d4 = 1.0;
        local_d0 = 0.0;
        D3DXVec3TransformNormal(param_2 + 8,&stack0xffffff28,auStack_b8);
        dStack_f4 = (double)(param_2[5] - param_2[1]);
        FUN_00fdef70();
        fVar4 = (float10)FUN_00fdecda();
        dStack_f4 = (double)CONCAT44(puStack_f0,(float)fVar4);
        fVar4 = (float10)FUN_00fdecda();
        dStack_f4 = (double)CONCAT44((float)fVar4,uVar6);
        local_d4 = param_2[8];
        local_d0 = param_2[9];
        local_cc = param_2[10];
        local_c8 = param_2[0xb];
        fVar5 = -(float)fVar4;
        D3DXMatrixRotationY(&fStack_84,fVar5);
        D3DXVec3TransformNormal(&stack0xffffff24,&stack0xffffff24,&local_8c);
        D3DXMatrixRotationX(local_98,-fVar5);
        D3DXVec3TransformNormal(&puStack_f0,&puStack_f0,&local_a0);
        fVar4 = (float10)FUN_00fdecda();
        local_d4 = (float)fVar4;
        param_2[0xc] = param_2[0xc] + local_d4;
        local_c8 = local_d4;
      }
      __security_check_cookie(local_14 ^ (uint)&local_d4);
      return;
    }
  }
  FUN_00e864a0();
  __security_check_cookie(local_14 ^ (uint)&local_d4);
  return;
}

// 00E7C3D0  FUN_00e7c3d0  size=155  [between]
void __thiscall FUN_00e7c3d0(int param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  float10 fVar3;
  
  uVar2 = *(ushort *)(param_2 + 0x20);
  if (uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x78 + *(char *)(param_2 + 0x1f) * 4) =
         *(undefined4 *)(param_2 + 0x24);
    return;
  }
  fVar3 = (float10)FUN_00e7a060(param_2);
  fVar1 = (float)(fVar3 / (float10)uVar2);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x78 + *(char *)(param_2 + 0x1f) * 4) =
       (1.0 - fVar1) * *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x28) * fVar1;
  return;
}

// 00E7C470  FUN_00e7c470  size=31  [between]
void __fastcall FUN_00e7c470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00e78f80();
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x10) + 4))();
  }
  FUN_00e78e50();
  return;
}

// 00E7C490  FUN_00e7c490  size=204  [between]
void __thiscall FUN_00e7c490(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
    if (*(char *)(param_2 + 0x18) == '\x01') {
      FUN_00e79020(param_2);
    }
    else if (*(char *)(param_2 + 0x18) == '\x02') {
      FUN_00e70450(param_2);
    }
  }
  cVar1 = *(char *)(param_2 + 0x1b);
  if (cVar1 == '\x01') {
    FUN_009318c0(*(undefined4 *)(param_2 + 0x38),*(undefined2 *)(param_2 + 0x24));
  }
  else if (cVar1 == '\x02') {
    FUN_009318e0(*(undefined4 *)(param_2 + 0x38),*(undefined2 *)(param_2 + 0x24));
  }
  else if (cVar1 == '\x03') {
    EffectAreaScrSystem::SetEffectAreaEnable_2
              (*(undefined4 *)(param_2 + 0x38),*(undefined2 *)(param_2 + 0x24),0);
  }
  cVar1 = *(char *)(param_2 + 0x1f);
  if (cVar1 != '\0') {
    iVar2 = (int)*(short *)(param_2 + 8);
    if (((iVar2 < 0) || (*(int *)(*param_1 + 0x84) <= iVar2)) ||
       (iVar2 = iVar2 * 0x50 + *(int *)(*param_1 + 0x7c), iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x20);
    }
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c890(), iVar2 != 0)) {
      FUN_00e36b50(0xffffffff,1,cVar1 == '\x01');
    }
  }
  FUN_00e69ca0(param_2);
  return;
}

// 00E7C560  FUN_00e7c560  size=620  [between]
void __fastcall FUN_00e7c560(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  float10 fVar7;
  float fStack_c;
  short *local_8;
  
  if ((*(int *)(*param_1 + 0x1a84) != 5) && (*(int *)(*param_1 + 0x1a84) != 6)) {
    iVar2 = ((int *)param_1[1])[5];
    iVar6 = 0;
    local_8 = (short *)0x0;
    iVar4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (3 < iVar4) {
      psVar5 = (short *)(iVar2 + 0x42);
      do {
        if (*(int *)(psVar5 + -0x15) == 0) {
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < psVar5[-0x1c]) ||
             ((iVar3 <= psVar5[-0x1c] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar5[-0x1b])))
             ) goto LAB_00e7c718;
          if ((char)psVar5[-0x13] != '\0') {
            local_8 = psVar5 + -0x21;
          }
        }
        if (*(int *)(psVar5 + 7) == 0) {
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < *psVar5) ||
             ((iVar3 <= *psVar5 && (*(float *)(*param_1 + 0x30) < (float)(int)psVar5[1]))))
          goto LAB_00e7c718;
          if ((char)psVar5[9] != '\0') {
            local_8 = psVar5 + -5;
          }
        }
        if (*(int *)(psVar5 + 0x23) == 0) {
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < psVar5[0x1c]) ||
             ((iVar3 <= psVar5[0x1c] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar5[0x1d]))))
          goto LAB_00e7c718;
          if ((char)psVar5[0x25] != '\0') {
            local_8 = psVar5 + 0x17;
          }
        }
        if (*(int *)(psVar5 + 0x3f) == 0) {
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < psVar5[0x38]) ||
             ((iVar3 <= psVar5[0x38] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar5[0x39]))))
          goto LAB_00e7c718;
          if ((char)psVar5[0x41] != '\0') {
            local_8 = psVar5 + 0x33;
          }
        }
        iVar6 = iVar6 + 4;
        psVar5 = psVar5 + 0x70;
      } while (iVar6 < iVar4 + -3);
    }
    if (iVar6 < iVar4) {
      psVar5 = (short *)(iVar2 + 10 + iVar6 * 0x38);
      do {
        if (*(int *)(psVar5 + 7) == 0) {
          iVar2 = *(int *)(*param_1 + 0x2c);
          if ((iVar2 < *psVar5) ||
             ((iVar2 <= *psVar5 && (*(float *)(*param_1 + 0x30) < (float)(int)psVar5[1])))) break;
          if ((char)psVar5[9] != '\0') {
            local_8 = psVar5 + -5;
          }
        }
        iVar6 = iVar6 + 1;
        psVar5 = psVar5 + 0x1c;
      } while (iVar6 < iVar4);
    }
LAB_00e7c718:
    fStack_c = 1.0;
    if (local_8 != (short *)0x0) {
      sVar1 = local_8[0xf];
      fStack_c = 1.0;
      if (0 < sVar1) {
        fVar7 = (float10)FUN_00e7a060(local_8);
        fStack_c = (float)(fVar7 / (float10)(int)sVar1);
        if (fStack_c < 0.0) {
          fStack_c = 0.0;
        }
        else if (1.0 < fStack_c) {
          fStack_c = 1.0;
        }
      }
      if ((char)local_8[0xe] == '\x02') {
        fStack_c = 1.0 - fStack_c;
      }
    }
    if (fStack_c != (float)param_1[2]) {
      FUN_00a28a20(fStack_c);
      param_1[2] = (int)fStack_c;
      return;
    }
  }
  return;
}

// 00E7C7D0  FUN_00e7c7d0  size=800  [between]
void __fastcall FUN_00e7c7d0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  float *pfVar10;
  int local_50;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((*(int *)(*param_1 + 0x1a84) != 5) && (*(int *)(*param_1 + 0x1a84) != 6)) {
    iVar5 = ((int *)param_1[1])[5];
    local_50 = -1;
    iVar8 = 0;
    iVar4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (3 < iVar4) {
      psVar6 = (short *)(iVar5 + 0x42);
      do {
        iVar3 = local_50;
        if (*(int *)(psVar6 + -0x15) == 1) {
          iVar2 = *(int *)(*param_1 + 0x2c);
          if ((iVar2 < psVar6[-0x1c]) ||
             ((iVar3 = iVar8, iVar2 <= psVar6[-0x1c] &&
              (*(float *)(*param_1 + 0x30) < (float)(int)psVar6[-0x1b])))) goto LAB_00e7c972;
        }
        local_50 = iVar3;
        if (*(int *)(psVar6 + 7) == 1) {
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < *psVar6) ||
             ((iVar3 <= *psVar6 && (*(float *)(*param_1 + 0x30) < (float)(int)psVar6[1]))))
          goto LAB_00e7c972;
          local_50 = iVar8 + 1;
        }
        if (*(int *)(psVar6 + 0x23) == 1) {
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < psVar6[0x1c]) ||
             ((iVar3 <= psVar6[0x1c] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar6[0x1d]))))
          goto LAB_00e7c972;
          local_50 = iVar8 + 2;
        }
        if (*(int *)(psVar6 + 0x3f) == 1) {
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < psVar6[0x38]) ||
             ((iVar3 <= psVar6[0x38] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar6[0x39]))))
          goto LAB_00e7c972;
          local_50 = iVar8 + 3;
        }
        iVar8 = iVar8 + 4;
        psVar6 = psVar6 + 0x70;
      } while (iVar8 < iVar4 + -3);
    }
    if (iVar8 < iVar4) {
      psVar6 = (short *)(iVar5 + 10 + iVar8 * 0x38);
      do {
        iVar3 = local_50;
        if (*(int *)(psVar6 + 7) == 1) {
          iVar2 = *(int *)(*param_1 + 0x2c);
          if ((iVar2 < *psVar6) ||
             ((iVar3 = iVar8, iVar2 <= *psVar6 &&
              (*(float *)(*param_1 + 0x30) < (float)(int)psVar6[1])))) break;
        }
        local_50 = iVar3;
        iVar8 = iVar8 + 1;
        psVar6 = psVar6 + 0x1c;
      } while (iVar8 < iVar4);
    }
LAB_00e7c972:
    if (local_50 != -1) {
      iVar4 = *(int *)(param_1[1] + 0x14) + local_50 * 0x38;
      if (*(char *)(iVar4 + 0x1c) != '\x01') {
        FUN_00e75780(&fStack_40,iVar4 + 0x1c);
        if (*(char *)(iVar4 + 0x1d) == '\0') {
LAB_00e7c9cb:
          pfVar10 = &fStack_40;
        }
        else {
          local_50 = local_50 + 1;
          iVar8 = (**(code **)(*(int *)param_1[1] + 0x2c))();
          if (local_50 < iVar8) {
            piVar7 = (int *)(iVar5 + 0x18 + local_50 * 0x38);
            do {
              if (*piVar7 == 1) {
                if (local_50 == -1) goto LAB_00e7ca10;
                iVar5 = *(int *)(param_1[1] + 0x14) + local_50 * 0x38;
                if (*(char *)(iVar5 + 0x1c) == '\x01') goto LAB_00e7c9cb;
                FUN_00e75780(&fStack_30,iVar5 + 0x1c);
                iVar5 = FUN_00e7a000(iVar5,iVar4);
                if ((float)iVar5 <= 0.0) {
                  fVar9 = (float10)1;
                }
                else {
                  fVar9 = (float10)FUN_00e7a060(iVar4);
                  fVar9 = fVar9 / (float10)iVar5;
                }
                fVar1 = (float)fVar9;
                pfVar10 = &fStack_20;
                fStack_20 = fVar1 * (fStack_30 - fStack_40) + fStack_40;
                fStack_1c = fStack_3c + fVar1 * (fStack_2c - fStack_3c);
                fStack_18 = fStack_38 + fVar1 * (fStack_28 - fStack_38);
                fStack_14 = fStack_34 + (fStack_24 - fStack_34) * fVar1;
                goto LAB_00e7cada;
              }
              local_50 = local_50 + 1;
              piVar7 = piVar7 + 0xe;
            } while (local_50 < iVar8);
            pfVar10 = &fStack_40;
          }
          else {
LAB_00e7ca10:
            pfVar10 = &fStack_40;
          }
        }
LAB_00e7cada:
        FUN_009324e0(pfVar10);
        param_1[3] = 1;
        return;
      }
    }
    if (param_1[3] != 0) {
      FUN_009324e0(0);
      param_1[3] = 0;
      return;
    }
  }
  return;
}

// 00E7CAF0  FUN_00e7caf0  size=539  [between]
void __thiscall FUN_00e7caf0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined1 local_14;
  
  fVar8 = (float10)FUN_00e7a060(param_2);
  fVar1 = (float)(fVar8 / (float10)*(ushort *)(param_2 + 0x1e));
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar3 = 1.0 - fVar1;
  fVar2 = ((float)*(byte *)(param_2 + 0x20) * fVar3 + (float)*(byte *)(param_2 + 0x24) * fVar1) /
          255.0;
  if (fVar2 == 0.0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00ebdd50(0xffffffff);
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
  }
  else {
    local_14 = (undefined1)
               (int)ROUND((((float)*(byte *)(param_2 + 0x21) * fVar3 +
                           (float)*(byte *)(param_2 + 0x25) * fVar1) / 255.0) * 255.0);
    uVar4 = local_14;
    local_14 = (undefined1)
               (int)ROUND((((float)*(byte *)(param_2 + 0x22) * fVar3 +
                           (float)*(byte *)(param_2 + 0x26) * fVar1) / 255.0) * 255.0);
    uVar5 = local_14;
    local_14 = (undefined1)
               (int)ROUND((((float)*(byte *)(param_2 + 0x27) * fVar1 +
                           (float)*(byte *)(param_2 + 0x23) * fVar3) / 255.0) * 255.0);
    uVar6 = local_14;
    local_14 = (undefined1)(int)ROUND(fVar2 * 255.0);
    uVar7 = CONCAT31(CONCAT21(CONCAT11(local_14,uVar4),uVar5),uVar6);
    cFade::set(0xffffffff,uVar7,uVar7,2,1,0,0x68);
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(uint *)(param_1 + 0x14) = *(byte *)(param_2 + 0x1d) & 2;
  }
  return;
}

// 00E7CD10  FUN_00e7cd10  size=166  [between]
void __fastcall FUN_00e7cd10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_4;
  
  iVar1 = *param_1;
  iVar4 = ((int *)param_1[1])[5];
  iStack_4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (0 < iStack_4) {
    do {
      if ((-1 < (int)*(uint *)(iVar4 + 0x10)) && ((*(uint *)(iVar4 + 0x10) & 1) == 0)) {
        iVar2 = (int)*(short *)(iVar4 + 8);
        if ((iVar2 < 0) ||
           ((*(int *)(iVar1 + 0x84) <= iVar2 ||
            (iVar2 = iVar2 * 0x50 + *(int *)(iVar1 + 0x7c), iVar2 == 0)))) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar2 + 0x20);
        }
        if ((iVar2 != 0) && (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
          switch(*(undefined4 *)(iVar4 + 0x18)) {
          case 0:
            FUN_00e704c0(iVar3,iVar4);
            break;
          case 1:
            FUN_00e79230(iVar2,iVar4);
            break;
          case 2:
            FUN_00e705e0(iVar3,iVar4);
            break;
          case 3:
            FUN_00e792c0(iVar3,iVar4);
          }
        }
      }
      iVar4 = iVar4 + 0x3c;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  }
  return;
}

// 00E7CDD0  FUN_00e7cdd0  size=614  [between]
void __fastcall FUN_00e7cdd0(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  int iStack_3c;
  int iStack_2c;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  iVar3 = *(int *)(*(int *)(*param_1 + 0x74) + 0x58);
  if (iVar3 != param_1[3]) {
    if (param_1[2] != 0) {
      FUN_00dd48d0(param_1[2],0);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    iVar6 = *(int *)(*(int *)(*param_1 + 0x74) + 0x58);
    if (iVar6 == 0) {
      param_1[2] = 0;
    }
    else {
      iVar5 = FUN_00dd29b0(iVar6 * 0x18,0x20,0,0);
      param_1[2] = iVar5;
    }
    param_1[3] = iVar6;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((void *)param_1[2] != (void *)0x0) {
    _memset((void *)param_1[2],0,iVar3 * 0x18);
    iVar3 = ((int *)param_1[1])[5];
    iVar6 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iVar6) {
      puVar9 = (uint *)(iVar3 + 0x10);
      do {
        if (((-1 < (int)*puVar9) && ((*puVar9 & 1) == 0)) && ((char)puVar9[3] != '\0')) {
          puVar1 = (undefined4 *)(param_1[2] + (short)puVar9[-2] * 0x18);
          iVar3 = *(int *)(*param_1 + 0x2c);
          if ((iVar3 < *(short *)((int)puVar9 + -6)) ||
             ((iVar3 <= *(short *)((int)puVar9 + -6) &&
              (*(float *)(*param_1 + 0x30) < (float)(int)(short)puVar9[-1])))) {
            if (puVar1[2] == 0) {
              puVar1[2] = puVar9 + -4;
            }
            else if (puVar1[3] == 0) {
              puVar1[3] = puVar9 + -4;
            }
          }
          else {
            *puVar1 = puVar1[1];
            puVar1[1] = puVar9 + -4;
          }
        }
        puVar9 = puVar9 + 0x25;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar3 = *(int *)(*(int *)(*param_1 + 0x74) + 0x58);
    uVar10 = 0;
    if (0 < iVar3) {
      iStack_2c = 0;
      iStack_3c = 0;
      do {
        piVar7 = (int *)(iStack_2c + param_1[2]);
        iVar6 = piVar7[1];
        if (((iVar6 != 0) && (*(char *)(iVar6 + 0x1d) != '\0')) && (iVar5 = piVar7[2], iVar5 != 0))
        {
          fVar11 = (float10)FUN_00e7a060(iVar6);
          fVar12 = (float10)FUN_00e7a060(iVar5);
          iVar4 = *param_1;
          fVar2 = (float)((float10)(float)fVar11 / ((float10)(float)fVar11 - fVar12));
          if ((int)uVar10 < 0) {
            iVar8 = 0;
          }
          else if ((int)uVar10 < *(int *)(iVar4 + 0x84)) {
            iVar8 = *(int *)(iVar4 + 0x7c) + iStack_3c;
          }
          else {
            iVar8 = 0;
          }
          if (*(char *)(iVar6 + 0x1d) == '\x01') {
            iStack_20 = iVar6;
            iStack_1c = iVar5;
            iVar6 = FUN_00e795b0(iVar4,iVar8,&iStack_20,fVar2);
          }
          else {
            if (*(char *)(iVar6 + 0x1d) != '\x02') goto LAB_00e7d013;
            iStack_18 = *piVar7;
            if (*piVar7 == 0) {
              iStack_18 = iVar6;
            }
            iStack_c = piVar7[3];
            if (piVar7[3] == 0) {
              iStack_c = iVar5;
            }
            iStack_14 = iVar6;
            iStack_10 = iVar5;
            iVar6 = FUN_00e797a0(*param_1,iVar8,&iStack_18,fVar2);
          }
          if (iVar6 != 0) {
            param_1[(uVar10 >> 5) + 4] =
                 param_1[(uVar10 >> 5) + 4] | 0x80000000U >> ((byte)uVar10 & 0x1f);
          }
        }
LAB_00e7d013:
        iStack_3c = iStack_3c + 0x50;
        uVar10 = uVar10 + 1;
        iStack_2c = iStack_2c + 0x18;
      } while ((int)uVar10 < iVar3);
    }
  }
  return;
}

// 00E7D0E0  FUN_00e7d0e0  size=367  [between]
void __fastcall FUN_00e7d0e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_01dd9ee4 == 0) {
    param_1[4] = param_1[4] & 0xffffffef;
  }
  else {
    param_1[4] = param_1[4] | 0x10;
  }
  uVar3 = param_1[4];
  if (((uVar3 & 1) != 0) || ((uVar3 & 0x10000000) != 0)) {
    param_1[4] = uVar3 & 0xfffbffff;
  }
  if (((param_1[4] & 0x40000U) != 0) && (*(int *)(*param_1 + 0x1a84) != 0)) {
    param_1[4] = param_1[4] | 8;
  }
  param_1[4] = param_1[4] & 0xffffbfff;
  iVar1 = FUN_00931f00();
  iVar2 = FUN_00931ed0(1);
  if (iVar2 != 0) {
    uVar3 = param_1[4];
    if ((uVar3 & 0x18) == 0) {
      uVar3 = uVar3 & 0xffffffdf;
    }
    else {
      uVar3 = uVar3 | 0x20;
    }
    param_1[4] = uVar3;
    if ((uVar3 & 0x40000000) == 0) {
      uVar3 = uVar3 & 0x7fffffff;
    }
    else {
      uVar3 = uVar3 | 0x80000000;
    }
    param_1[4] = uVar3;
    param_1[4] = param_1[4] & 0xbfffffff;
  }
  if (iVar1 != 0) {
    uVar3 = param_1[4];
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar3 & 0xfffffffd;
    }
    else {
      uVar3 = uVar3 | 2;
    }
    param_1[4] = uVar3;
    if ((uVar3 & 0x80000) == 0) {
      uVar3 = uVar3 & 0xffefffff;
    }
    else {
      uVar3 = uVar3 | 0x100000;
    }
    param_1[4] = uVar3;
    if ((uVar3 & 0x8000) == 0) {
      uVar3 = uVar3 & 0xfffeffff;
    }
    else {
      uVar3 = uVar3 | 0x10000;
    }
    param_1[4] = uVar3;
    if ((uVar3 & 0x100) == 0) {
      uVar3 = uVar3 & 0xfffffdff;
    }
    else {
      uVar3 = uVar3 | 0x200;
    }
    param_1[4] = uVar3;
    if ((uVar3 & 0x10000000) == 0) {
      uVar3 = uVar3 & 0xdfffffff;
    }
    else {
      uVar3 = uVar3 | 0x20000000;
    }
    param_1[4] = uVar3;
    if ((uVar3 & 0x2000000) == 0) {
      uVar3 = uVar3 & 0xfbffffff;
    }
    else {
      uVar3 = uVar3 | 0x4000000;
    }
    param_1[4] = uVar3;
    if ((uVar3 & 0x400) != 0) {
      iVar1 = *param_1;
      param_1[0xb] = *(int *)(iVar1 + 0xb0);
      param_1[0xc] = *(int *)(iVar1 + 0xb4);
      iVar2 = *(int *)(iVar1 + 0xb8);
      param_1[4] = uVar3 | 0x1000;
      if ((iVar2 != 0) && (*(int *)(iVar1 + 0x1a84) == 0)) {
        param_1[4] = uVar3 | 0x1080;
      }
      param_1[4] = param_1[4] & 0xfffffbff;
    }
    param_1[4] = param_1[4] & 0xedff7efe;
  }
  return;
}

// 00E7D250  FUN_00e7d250  size=241  [between]
void __fastcall FUN_00e7d250(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  param_1[4] = param_1[4] & 0xffdfffff;
  iVar3 = FUN_00e70ba0();
  uVar2 = param_1[4];
  if ((uVar2 & 0x4000000) != 0) {
    param_1[6] = param_1[0xc];
    param_1[5] = param_1[0xb];
    FUN_00e76400(param_1 + 7,param_1 + 5);
    goto LAB_00e7d30b;
  }
  if (((uVar2 & 2) == 0) && ((uVar2 & 0x20001000) == 0)) {
    piVar1 = param_1 + 5;
    if (-1 < (int)uVar2) {
      if (*piVar1 < 0) {
        *piVar1 = 0;
        param_1[6] = 0;
      }
      else if ((uVar2 & 0x20) == 0) {
        if ((uVar2 & 0x110000) == 0) {
          if (iVar3 != 0) {
            param_1[4] = uVar2 | 0x200000;
            goto LAB_00e7d30b;
          }
          *piVar1 = param_1[9];
          param_1[6] = param_1[10];
          if (((uVar2 & 0x40000) == 0) || (*(int *)(*param_1 + 0x1a84) != 0)) goto LAB_00e7d30b;
        }
        param_1[4] = uVar2 | 0x80;
      }
      goto LAB_00e7d30b;
    }
    iVar3 = param_1[9];
    iVar4 = param_1[10];
  }
  else {
    iVar3 = param_1[0xb];
    iVar4 = param_1[0xc];
  }
  param_1[6] = iVar4;
  param_1[5] = iVar3;
LAB_00e7d30b:
  iVar3 = FUN_00e79ab0(param_1 + 5);
  if (iVar3 != 0) {
    param_1[4] = param_1[4] | 0x4000;
    param_1[4] = param_1[4] | 0x40000;
    return;
  }
  param_1[4] = param_1[4] & 0xffffbfff;
  param_1[4] = param_1[4] & 0xfffbffff;
  return;
}

// 00E7D350  FUN_00e7d350  size=31  [between]
void __fastcall FUN_00e7d350(int *param_1)

{
  if (*(int *)(*param_1 + 0x1a84) == 0) {
    param_1[4] = param_1[4] | 0x80000;
  }
  else if (*(int *)(*param_1 + 0x1a84) == 2) {
    param_1[4] = param_1[4] | 8;
    return;
  }
  return;
}

// 00E7D370  FUN_00e7d370  size=72  [between]
void __fastcall FUN_00e7d370(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  if ((*(byte *)(*param_1 + 0x28) & 0x40) == 0) {
    iVar1 = ((int *)param_1[1])[5];
    iVar2 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iVar2) {
      puVar3 = (uint *)(iVar1 + 0x10);
      do {
        if (((-1 < (int)*puVar3) && ((*puVar3 & 1) == 0)) && (puVar3[2] == 0)) {
          FUN_00e79ec0(puVar3 + -4);
        }
        puVar3 = puVar3 + 0xb;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

// 00E7D3C0  FUN_00e7d3c0  size=145  [between]
void __fastcall FUN_00e7d3c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iStack_4;
  
  iVar2 = ((int *)param_1[1])[5];
  iStack_4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
  if (0 < iStack_4) {
    puVar3 = (undefined1 *)(iVar2 + 0x14);
    do {
      if ((-1 < (int)*(uint *)(puVar3 + -4)) && ((*(uint *)(puVar3 + -4) & 1) == 0)) {
        uVar1 = *(uint *)(*param_1 + 0x28);
        if ((uVar1 & 0x2000) == 0) {
          iVar2 = FUN_00e76ba0(puVar3 + -0x14);
          if (iVar2 != 0) {
            switch(*puVar3) {
            default:
switchD_00e7d410_caseD_0:
              if ((uVar1 & 0x40) == 0) {
                FUN_00e79f70(puVar3 + -0x14);
              }
              break;
            case 3:
              break;
            }
          }
        }
        else {
          iVar2 = FUN_00e76ba0(puVar3 + -0x14);
          if (iVar2 != 0) {
            switch(*puVar3) {
            default:
              goto switchD_00e7d410_caseD_0;
            case 2:
              break;
            }
          }
        }
      }
      puVar3 = puVar3 + 0x28;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  }
  return;
}

// 00E7D4C0  FUN_00e7d4c0  size=60  [between]
void __fastcall FUN_00e7d4c0(int *param_1)

{
  if ((*(uint *)(*param_1 + 0x28) & 0x8000000) != 0) {
    FUN_00dda360(0,0,0,0);
    param_1[2] = 0;
  }
  FUN_00e7a150();
  FUN_00e710f0();
  return;
}

// 00E7D500  FUN_00e7d500  size=94  [between]
void __fastcall FUN_00e7d500(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((*(uint *)(iVar1 + 0x28) & 0x88000000) != 0) ||
     (((*(uint *)(iVar1 + 0x1a68) & 0x40000000) != 0 &&
      ((*(uint *)(iVar1 + 0x1a6c) & 0x40000000) == 0)))) {
    param_1[2] = 0;
    FUN_00932510();
  }
  if (((*(uint *)(*param_1 + 0x1a68) & 0x40000000) == 0) &&
     (((iVar1 = *(int *)(*param_1 + 0x1a84), iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 2)))) {
    FUN_00e7a230();
    return;
  }
  return;
}

// 00E7D560  FUN_00e7d560  size=209  [between]
undefined4 __thiscall FUN_00e7d560(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = FUN_00931fa0(*param_2);
  puVar1 = param_2 + 7;
  param_1 = param_1 + 0x70;
  uVar3 = FUN_00931fc0(param_1,uVar2,puVar1);
  FUN_00a00a60(uVar2,uVar3);
  uVar2 = FUN_00931fa0(*param_2);
  uVar3 = FUN_00931fc0(param_1,uVar2,puVar1);
  iVar4 = FUN_00a00f80(uVar2,uVar3);
  while( true ) {
    if (iVar4 != 0) {
      uVar2 = Event::ActorDataHolder::debugAddActor(param_2);
      return uVar2;
    }
    uVar2 = FUN_00931fa0(*param_2);
    uVar3 = FUN_00931fc0(param_1,uVar2,puVar1);
    iVar4 = FUN_00a00ca0(uVar2,uVar3);
    if (iVar4 != 0) break;
    FUN_00dd89a0(1);
    uVar2 = FUN_00931fa0(*param_2);
    uVar3 = FUN_00931fc0(param_1,uVar2,puVar1);
    iVar4 = FUN_00a00f80(uVar2,uVar3);
  }
  return 0xffffffff;
}

// 00E7D700  FUN_00e7d700  size=89  [between]
void FUN_00e7d700(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (((((*(uint *)((int)&DAT_01dda500 + uVar3) & 1) != 0) &&
         (-1 < (int)*(uint *)((int)&DAT_01dda500 + uVar3))) &&
        (*(int *)((int)&DAT_01dda514 + uVar3) == 3)) &&
       ((iVar1 = *(int *)((int)&DAT_01dda524 + uVar3), iVar1 != 0 &&
        ((*(int *)(iVar1 + 0x1a84) == 0 || (*(int *)(iVar1 + 0x1a84) == 2)))))) {
      iVar2 = FUN_00e78b20();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x400;
      }
    }
    uVar3 = uVar3 + 0x34;
  } while (uVar3 < 0x1a0);
  return;
}

// 00E7D760  FUN_00e7d760  size=112  [between]
void FUN_00e7d760(void)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  float10 fVar4;
  float local_4;
  
  local_4 = 200.0;
  puVar2 = PTR_DAT_018d0400;
  piVar3 = (int *)PTR_DAT_018d0400;
  if (PTR_DAT_018d0400 != PTR_DAT_018d0400 + DAT_018d0404 * 4) {
    do {
      uVar1 = *(uint *)*piVar3;
      if (((-1 < (int)uVar1) && ((uVar1 & 1) != 0)) && (((uint *)*piVar3)[9] != 0)) {
        fVar4 = (float10)FUN_00e765a0(local_4);
        local_4 = (float)fVar4;
        puVar2 = PTR_DAT_018d0400;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)(puVar2 + DAT_018d0404 * 4));
  }
  return;
}

// 00E7D880  FUN_00e7d880  size=138  [between]
undefined4 __thiscall FUN_00e7d880(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  piVar4 = *(int **)(iVar2 + 0x110);
  iVar3 = 0;
  if (0 < *(int *)(iVar2 + 0x118)) {
    do {
      if ((*piVar4 == param_2) && (piVar4[1] == param_3)) {
        sVar1 = (short)iVar3;
        goto LAB_00e7d8c4;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x19;
    } while (iVar3 < *(int *)(iVar2 + 0x118));
  }
  sVar1 = -1;
LAB_00e7d8c4:
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x30))(param_2,param_3,(int)sVar1);
  if (iVar2 != 0) {
    FUN_00e741d0();
    FUN_00e84c00((int)sVar1);
    return 1;
  }
  return 0;
}

// 00E7D910  Event::ActorDataHolder::~ActorDataHolder  size=189  [class]
void __fastcall Event::ActorDataHolder::~ActorDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  vf0C();
  if (param_1[0x23] != 0) {
    param_1[0x25] = 0;
    if (param_1[0x26] != 0) {
      FUN_00dd48d0(param_1[0x23],0);
      param_1[0x26] = 0;
    }
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  if (param_1[0x1e] != 0) {
    param_1[0x20] = 0;
    if (param_1[0x21] != 0) {
      FUN_00dd48d0(param_1[0x1e],0);
      param_1[0x21] = 0;
    }
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  if (param_1[0x19] != 0) {
    param_1[0x1b] = 0;
    if (param_1[0x1c] != 0) {
      FUN_00dd48d0(param_1[0x19],0);
      param_1[0x1c] = 0;
    }
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  if (param_1[0x14] != 0) {
    param_1[0x16] = 0;
    if (param_1[0x17] != 0) {
      FUN_00dd48d0(param_1[0x14],0);
      param_1[0x17] = 0;
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  DataHolderBase::DataHolderBase_6();
  return;
}

// 00E7D9D0  Event::ActorDataHolder::vf08  size=196  [class]
undefined4 __thiscall Event::ActorDataHolder::vf08(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1[0x112] != 0) {
    return 1;
  }
  uVar2 = FUN_00e03ea0("ObjList.bxm");
  iVar3 = FUN_00de3e90(0,uVar2);
  if ((iVar3 != 0) && (iVar3 = cXmlBinary::cXmlBinary_51(iVar3,*puVar1), iVar3 != 0)) {
    uVar2 = FUN_00e03ea0("ObjSubInfo.bxm");
    iVar3 = FUN_00de3e90(0,uVar2);
    if ((iVar3 != 0) && (iVar3 = cXmlBinary::cXmlBinary_106(iVar3,*puVar1), iVar3 == 0)) {
      return 0;
    }
    uVar2 = FUN_00e03ea0("AttachList.bxm");
    iVar3 = FUN_00de3e90(0,uVar2);
    if ((iVar3 != 0) && (iVar3 = cXmlBinary::cXmlBinary_5(iVar3), iVar3 == 0)) {
      return 0;
    }
    iVar3 = FUN_00e8a240(param_2);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x44) = *param_2;
      *(undefined4 *)(param_1 + 0x48) = param_2[1];
      return 1;
    }
  }
  return 0;
}

// 00E7DAA0  Event::BgmDataHolder::BgmDataHolder  size=22  [class]
void __fastcall Event::BgmDataHolder::BgmDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_9();
  return;
}

// 00E7DAC0  Event::CameraDataHolder::~CameraDataHolder  size=96  [class]
void __fastcall Event::CameraDataHolder::~CameraDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[0x13] = 0;
  FUN_00de3540(0,0);
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  DataHolderBase::DataHolderBase_7();
  return;
}

// 00E7DB20  Event::ControlDataHolder::ControlDataHolder  size=83  [class]
void __fastcall Event::ControlDataHolder::ControlDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  DataHolderBase::DataHolderBase_5();
  return;
}

// 00E7DB80  Event::ControlDataHolder::vf08  size=39  [class]
bool __thiscall Event::ControlDataHolder::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x448) != 0) {
    return true;
  }
  iVar1 = FUN_00e90e70(param_2);
  return iVar1 != 0;
}

// 00E7DBB0  Event::CutDataHolder::vf08  size=91  [class]
bool __fastcall Event::CutDataHolder::vf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar1 = FUN_00e03ea0("CutList.bxm");
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 != 0) {
    iVar3 = cXmlBinary::cXmlBinary_9(iVar2);
    return iVar3 != 0;
  }
  iVar3 = *(int *)(iVar3 + 0x448);
  if (iVar3 != 0) {
    iVar3 = FUN_00e7b110(iVar3);
    return iVar3 != 0;
  }
  return false;
}

// 00E7DC10  Event::EffectDataHolder::EffectDataHolder  size=22  [class]
void __fastcall Event::EffectDataHolder::EffectDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_14();
  return;
}

// 00E7DC30  Event::GraphicDataHolder::GraphicDataHolder  size=22  [class]
void __fastcall Event::GraphicDataHolder::GraphicDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_13();
  return;
}

// 00E7DC50  Event::SeDataHolder::SeDataHolder  size=22  [class]
void __fastcall Event::SeDataHolder::SeDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_10();
  return;
}

// 00E7DC70  Event::VibDataHolder::VibDataHolder  size=83  [class]
void __fastcall Event::VibDataHolder::VibDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  DataHolderBase::DataHolderBase_2();
  return;
}

// 00E7DCD0  Event::UiDataHolder::UiDataHolder  size=83  [class]
void __fastcall Event::UiDataHolder::UiDataHolder(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  DataHolderBase::DataHolderBase_8();
  return;
}

// 00E7DD30  FUN_00e7dd30  size=408  [between]
undefined4 __thiscall
FUN_00e7dd30(int param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1a70) = *param_2;
  *(undefined4 *)(param_1 + 0x1a74) = param_2[1];
  uVar1 = param_2[2];
  *(undefined4 *)(param_1 + 0x1a7c) = param_3;
  *(undefined4 *)(param_1 + 0x1a78) = uVar1;
  *(int *)(param_1 + 0x1a80) = param_4;
  *(undefined4 *)(param_1 + 0x1a84) = param_5;
  FUN_00e6c750();
  iVar2 = FUN_00e7a0e0(param_1,param_4);
  if (iVar2 != 0) {
    iVar2 = FUN_00e70ae0(param_1,param_4);
    if (iVar2 != 0) {
      iVar2 = FUN_00e75320(param_1,param_4);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x70) = param_1;
        *(int *)(param_1 + 0x74) = param_4 + 0xc0;
        iVar2 = FUN_00e78300();
        if (iVar2 != 0) {
          *(int *)(param_1 + 0x8c) = param_1;
          *(int *)(param_1 + 0x90) = param_4 + 0xc0;
          iVar2 = FUN_00e78560();
          if (iVar2 != 0) {
            iVar2 = FUN_00e79370(param_1,param_4);
            if (iVar2 != 0) {
              iVar2 = FUN_00e78700(param_1,param_4);
              if (iVar2 != 0) {
                iVar2 = FUN_00e75490(param_1,param_4);
                if (iVar2 != 0) {
                  iVar2 = FUN_00e75710(param_1,param_4);
                  if (iVar2 != 0) {
                    *(int *)(param_1 + 0x19d8) = param_1;
                    *(int *)(param_1 + 0x19dc) = param_4 + 0x298;
                    *(int *)(param_1 + 0x19e0) = param_1;
                    *(int *)(param_1 + 0x19e4) = param_4 + 0x2dc;
                    *(int *)(param_1 + 0x19e8) = param_1;
                    *(int *)(param_1 + 0x19ec) = param_4 + 800;
                    *(int *)(param_1 + 0x19f0) = param_1;
                    *(int *)(param_1 + 0x19f4) = param_4 + 0x370;
                    iVar2 = FUN_00e76e10(param_1,param_4);
                    if (iVar2 != 0) {
                      iVar2 = FUN_00e76d80(param_1,param_4);
                      if (iVar2 != 0) {
                        *(int *)(param_1 + 0x1a64) = param_1;
                        *(undefined4 *)(param_1 + 0x1a68) = 0;
                        *(undefined4 *)(param_1 + 0x1a6c) = 0;
                        FUN_00931ca0(param_1 + 0x1a70);
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

// 00E7DED0  FUN_00e7ded0  size=356  [between]
void __fastcall FUN_00e7ded0(int *param_1)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  if (*(int *)(*param_1 + 0x1a70) == 0) {
    local_8 = param_1[5];
    if (0 < local_8) {
      puVar6 = (uint *)(param_1[3] + 0x2c);
      do {
        if (puVar6[-2] != 0) {
          if ((*(int *)(puVar6[-0xb] + 0x1a84) == 0) || (*(int *)(puVar6[-0xb] + 0x1a84) == 2)) {
            if ((*puVar6 & 2) == 0) goto LAB_00e7e01f;
          }
          else if (((*puVar6 & 2) == 0) && (puVar6[-3] != 0)) {
            *puVar6 = *puVar6 | 2;
            FUN_009321a0(puVar6[-3],1);
            puVar6[-1] = 0xffffffff;
          }
          uVar2 = *(uint *)(puVar6[-0xb] + 0x2c);
          fVar1 = *(float *)(puVar6[-0xb] + 0x30);
          if (uVar2 != puVar6[-1]) {
            FUN_00e784b0(uVar2);
            puVar6[-1] = uVar2;
          }
          if ((*puVar6 & 8) == 0) {
            FUN_009322c0(puVar6[-3],0,0);
          }
          else {
            uVar4 = FUN_00e6cea0(puVar6[-9],uVar2);
            if (*(int *)(*(int *)puVar6[-0xb] + 0x1a70) == 0) {
LAB_00e7df8e:
              cVar3 = '<';
            }
            else {
              cVar3 = *(char *)(((int *)puVar6[-0xb])[2] + 1);
              if (cVar3 == '\x01') {
                cVar3 = '\x1e';
              }
              else {
                if (cVar3 == '\x02') goto LAB_00e7df8e;
                cVar3 = FUN_00e23840(uVar4);
              }
            }
            FUN_009322c0(puVar6[-3],uVar4,fVar1);
            if (((*(byte *)(puVar6[-2] + 0x94) & 1) != 0) && (iVar5 = FUN_00e26e90(), iVar5 != 0)) {
              Animation::Motion::Unit::setCurrentTime(0,fVar1 / (float)(int)cVar3);
            }
          }
        }
LAB_00e7e01f:
        puVar6 = puVar6 + 0x14;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}

// 00E7E050  FUN_00e7e050  size=1319  [between]
void __fastcall FUN_00e7e050(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_178;
  float local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_80 [64];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_194;
  iVar2 = *param_1;
  local_194 = *(float *)(iVar2 + 0x30);
  if (*(int *)(iVar2 + 0x2c) != *(int *)(iVar2 + 0x34)) {
    _sprintf_s((char *)&local_40,0x1c,"camera_%02d_%03d.mot",param_1[2],*(int *)(iVar2 + 0x2c));
    uVar1 = FUN_00de45a0(&local_40);
    Animation::MotReader(uVar1);
  }
  iVar2 = FUN_00e849b0(0x7f0000,0);
  if (((iVar2 != -1) &&
      (((*(byte *)(*(int *)(param_1[1] + 0x14) + 0x18 + iVar2 * 0x7c) & 1) != 0 ||
       ((*(byte *)(param_1 + 3) & 1) != 0)))) &&
     ((*(int *)(*param_1 + 0x1a84) == 0 || (*(int *)(*param_1 + 0x1a84) == 2)))) {
    FUN_00e69960(param_1 + 0x40);
    param_1[99] = 0;
    __security_check_cookie(local_14 ^ (uint)&local_194);
    return;
  }
  if (param_1[4] == 0) goto LAB_00e7e562;
  FUN_00e24230(local_194);
  iVar3 = Animation::MotReader::pullCameraParam(local_80,0);
  if (iVar3 == 0) goto LAB_00e7e562;
  if (iVar2 == -1) {
switchD_00e7e3bc_default:
    FUN_00e864a0(local_80);
  }
  else {
    iVar2 = iVar2 * 0x7c + *(int *)(param_1[1] + 0x14);
    fVar4 = (float10)FUN_00e7bdd0(iVar2);
    local_194 = (float)fVar4;
    FUN_00e864a0(param_1 + 0x40);
    FUN_00e864a0(local_80);
    local_190 = local_110 - local_120;
    local_18c = local_10c - local_11c;
    local_188 = local_108 - local_118;
    local_184 = local_104 - local_114;
    local_40 = local_c0 - local_d0;
    local_3c = local_bc - local_cc;
    local_38 = local_b8 - local_c8;
    local_178 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    fVar4 = (float10)FUN_00fdef70();
    local_174 = (float)fVar4;
    local_178 = local_190 * local_190 + local_18c * local_18c + local_188 * local_188;
    if (local_178 < 0.0 == (local_178 == 0.0)) {
      FUN_00ddf460(&local_190,&local_190);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_190 = 0.0;
      local_18c = 1.0;
      local_188 = 0.0;
    }
    local_190 = local_174 * local_190;
    local_18c = local_18c * local_174;
    local_188 = local_188 * local_174;
    local_184 = local_174 * local_184;
    local_110 = local_190 + local_120;
    local_10c = local_11c + local_18c;
    local_108 = local_188 + local_118;
    local_104 = local_184 + local_114;
    local_40 = local_110;
    local_3c = local_10c;
    local_38 = local_108;
    local_34 = local_104;
    switch(*(undefined1 *)(iVar2 + 0x1d)) {
    case 1:
      FUN_00e697d0(&local_170,&local_120,local_194);
      break;
    case 2:
      FUN_00e697d0(&local_170,&local_120,local_194);
      break;
    case 3:
      local_40 = 0.0;
      local_38 = 0.0;
      local_3c = 1.0;
      FUN_00e74c40(&local_170,&local_120,&local_40,local_194);
      break;
    case 4:
      local_40 = 0.0;
      local_38 = 0.0;
      local_3c = 1.0;
      FUN_00e74e40(&local_170,&local_120,&local_40,local_194);
      break;
    default:
      goto switchD_00e7e3bc_default;
    }
  }
  if (DAT_018d0268 != 0) {
    param_1[0x50] = local_170;
    param_1[0x51] = local_16c;
    param_1[0x52] = local_168;
    param_1[0x53] = local_164;
    param_1[0x54] = local_160;
    param_1[0x55] = local_15c;
    param_1[0x56] = local_158;
    param_1[0x57] = local_154;
    param_1[0x58] = local_150;
    param_1[0x59] = local_14c;
    param_1[0x5a] = local_148;
    param_1[0x5b] = local_144;
    param_1[0x5c] = local_140;
    param_1[0x5d] = local_13c;
    param_1[0x60] = 0;
    FUN_009323a0(&local_170,0);
  }
  param_1[99] = 1;
LAB_00e7e562:
  __security_check_cookie(local_14 ^ (uint)&local_194);
  return;
}

// 00E7E590  FUN_00e7e590  size=152  [between]
void __thiscall FUN_00e7e590(int *param_1,int param_2,int param_3)

{
  if ((((*(byte *)(param_3 + 0x18) & 1) == 0) && ((*(byte *)(param_1 + 3) & 1) == 0)) ||
     ((*(int *)(*param_1 + 0x1a84) != 0 && (*(int *)(*param_1 + 0x1a84) != 2)))) {
    switch(*(undefined1 *)(param_3 + 0x1c)) {
    case 0:
      FUN_00e7bd30(param_2,*param_1,param_3);
      return;
    case 1:
      FUN_00e7bf90();
      return;
    case 2:
      FUN_00e864a0(param_1 + 0x30);
      return;
    case 3:
      *(undefined4 *)(param_2 + 0x40) = 0;
      *(undefined4 *)(param_2 + 0x44) = 0;
      *(undefined4 *)(param_2 + 0x48) = 0;
      FUN_00932460(param_2);
      return;
    case 4:
      FUN_00e7e640();
      return;
    }
  }
  else {
    FUN_00e864a0(param_1 + 0x40);
  }
  return;
}

// 00E7E640  FUN_00e7e640  size=141  [between]
void __thiscall FUN_00e7e640(int param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  float local_64;
  undefined1 local_60 [92];
  
  fVar2 = (float10)FUN_00e7a060(param_3);
  local_64 = (float)fVar2;
  if (local_64 < 0.0) {
    local_64 = 0.0;
  }
  iVar1 = FUN_00e846d0(param_3);
  if (iVar1 == 0) {
    FUN_00e864a0(param_1 + 0xc0);
  }
  else {
    FUN_00e7e590(local_60,iVar1);
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  FUN_009324c0(param_2,0,*(undefined4 *)(param_3 + 0x3c),local_64,local_60);
  return;
}

// 00E7E6D0  FUN_00e7e6d0  size=223  [between]
void __thiscall FUN_00e7e6d0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + 0x1a84) != 0) && (*(int *)(iVar2 + 0x1a84) != 2)) {
    return;
  }
  if ((*(uint *)(iVar2 + 0x28) & 0x2000) == 0) {
    iVar3 = FUN_00e76ba0(param_2);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 3:
      return;
    }
  }
  else {
    iVar3 = FUN_00e76ba0(param_2);
    if (iVar3 == 0) {
      return;
    }
    switch(*(undefined1 *)(param_2 + 0x14)) {
    case 2:
      return;
    }
  }
  if ((*(byte *)(iVar2 + 0x28) & 0x40) != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    FUN_00e7d350();
  }
  cVar1 = *(char *)(param_2 + 0x1d);
  if (cVar1 == '\x01') {
    param_1[5] = 0;
  }
  else if (cVar1 == '\x02') {
    param_1[5] = 1;
  }
  else if (cVar1 == '\x03') {
    param_1[5] = 2;
  }
  if (*(char *)(param_2 + 0x1e) == '\x01') {
    param_1[6] = 1;
    uVar4 = 1;
  }
  else {
    if (*(char *)(param_2 + 0x1e) != '\x02') goto LAB_00e7e795;
    param_1[6] = 0;
    uVar4 = 0;
  }
  FUN_009319b0(uVar4);
LAB_00e7e795:
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    FUN_00931a10(*(undefined4 *)(param_2 + 0x20));
  }
  return;
}

// 00E7E7D0  FUN_00e7e7d0  size=162  [between]
undefined4 __thiscall FUN_00e7e7d0(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  
  if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
    iVar2 = FUN_00e76ba0(param_2);
    if (iVar2 != 0) {
      switch(*(undefined1 *)(param_2 + 0x14)) {
      default:
switchD_00e7e7f7_caseD_0:
        return 1;
      case 3:
        break;
      }
    }
  }
  else {
    iVar2 = FUN_00e76ba0(param_2);
    if (iVar2 != 0) {
      switch(*(undefined1 *)(param_2 + 0x14)) {
      default:
        goto switchD_00e7e7f7_caseD_0;
      case 2:
        break;
      }
    }
  }
  uVar1 = *(ushort *)(param_2 + 0x1e);
  if (uVar1 != 0) {
    fVar3 = (float10)FUN_00e7a060(param_2);
    if ((0.0 <= (float)fVar3) && ((float)fVar3 < (float)uVar1)) {
      return 1;
    }
  }
  return 0;
}

// 00E7E8A0  FUN_00e7e8a0  size=94  [between]
void __thiscall FUN_00e7e8a0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((int)*(short *)(param_2 + 10) <= *(int *)(iVar1 + 0x2c)) &&
     (((int)*(short *)(param_2 + 10) < *(int *)(iVar1 + 0x2c) ||
      ((float)(int)*(short *)(param_2 + 0xc) <= *(float *)(iVar1 + 0x30))))) {
    if (*(char *)(param_2 + 0x1c) == '\x01') {
      *(int *)(iVar1 + 0x54) = (int)*(char *)(param_2 + 0x1d);
    }
    else if (*(char *)(param_2 + 0x1c) == '\x02') {
      *(undefined4 *)(iVar1 + 0x54) = 0xffffffff;
    }
    if (*(char *)(param_2 + 0x1e) == '\x01') {
      FUN_00e7c3d0();
      return;
    }
  }
  return;
}

// 00E7E900  FUN_00e7e900  size=150  [between]
void __fastcall FUN_00e7e900(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if ((*(int *)(*param_1 + 0x1a84) != 4) && ((*(byte *)(*param_1 + 0x28) & 0x40) == 0)) {
    iVar2 = ((int *)param_1[1])[5];
    iVar1 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iVar1) {
      puVar3 = (undefined1 *)(iVar2 + 0x14);
      do {
        if ((-1 < (int)*(uint *)(puVar3 + -4)) && ((*(uint *)(puVar3 + -4) & 1) == 0)) {
          if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
            iVar2 = FUN_00e76ba0(puVar3 + -0x14);
            if (iVar2 != 0) {
              switch(*puVar3) {
              default:
switchD_00e7e95e_caseD_0:
                FUN_00e7c490(puVar3 + -0x14);
                break;
              case 3:
                break;
              }
            }
          }
          else {
            iVar2 = FUN_00e76ba0(puVar3 + -0x14);
            if (iVar2 != 0) {
              switch(*puVar3) {
              default:
                goto switchD_00e7e95e_caseD_0;
              case 2:
                break;
              }
            }
          }
        }
        puVar3 = puVar3 + 0x3c;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

// 00E7E9C0  FUN_00e7e9c0  size=527  [between]
void __fastcall FUN_00e7e9c0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int local_c;
  
  iVar1 = *(int *)(*param_1 + 0x1a84);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 4)) {
    iVar1 = ((int *)param_1[1])[5];
    local_c = -1;
    iVar5 = 0;
    iVar3 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (3 < iVar3) {
      psVar4 = (short *)(iVar1 + 0x42);
      do {
        if (*(int *)(psVar4 + -0x15) == 2) {
          iVar2 = *(int *)(*param_1 + 0x2c);
          if ((iVar2 < psVar4[-0x1c]) ||
             ((iVar2 <= psVar4[-0x1c] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar4[-0x1b])))
             ) goto LAB_00e7eb7f;
          if ((*(byte *)((int)psVar4 + -0x25) & 1) == 0) {
            local_c = iVar5;
          }
        }
        if (*(int *)(psVar4 + 7) == 2) {
          iVar2 = *(int *)(*param_1 + 0x2c);
          if ((iVar2 < *psVar4) ||
             ((iVar2 <= *psVar4 && (*(float *)(*param_1 + 0x30) < (float)(int)psVar4[1]))))
          goto LAB_00e7eb7f;
          if ((*(byte *)((int)psVar4 + 0x13) & 1) == 0) {
            local_c = iVar5 + 1;
          }
        }
        if (*(int *)(psVar4 + 0x23) == 2) {
          iVar2 = *(int *)(*param_1 + 0x2c);
          if ((iVar2 < psVar4[0x1c]) ||
             ((iVar2 <= psVar4[0x1c] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar4[0x1d]))))
          goto LAB_00e7eb7f;
          if ((*(byte *)((int)psVar4 + 0x4b) & 1) == 0) {
            local_c = iVar5 + 2;
          }
        }
        if (*(int *)(psVar4 + 0x3f) == 2) {
          iVar2 = *(int *)(*param_1 + 0x2c);
          if ((iVar2 < psVar4[0x38]) ||
             ((iVar2 <= psVar4[0x38] && (*(float *)(*param_1 + 0x30) < (float)(int)psVar4[0x39]))))
          goto LAB_00e7eb7f;
          if ((*(byte *)((int)psVar4 + 0x83) & 1) == 0) {
            local_c = iVar5 + 3;
          }
        }
        iVar5 = iVar5 + 4;
        psVar4 = psVar4 + 0x70;
      } while (iVar5 < iVar3 + -3);
    }
    if (iVar5 < iVar3) {
      psVar4 = (short *)(iVar1 + 10 + iVar5 * 0x38);
      do {
        if (*(int *)(psVar4 + 7) == 2) {
          iVar1 = *(int *)(*param_1 + 0x2c);
          if ((iVar1 < *psVar4) ||
             ((iVar1 <= *psVar4 && (*(float *)(*param_1 + 0x30) < (float)(int)psVar4[1])))) break;
          if ((*(byte *)((int)psVar4 + 0x13) & 1) == 0) {
            local_c = iVar5;
          }
        }
        iVar5 = iVar5 + 1;
        psVar4 = psVar4 + 0x1c;
      } while (iVar5 < iVar3);
    }
LAB_00e7eb7f:
    if ((local_c == -1) ||
       (*(char *)(*(int *)(param_1[1] + 0x14) + 0x1c + local_c * 0x38) == '\x01')) {
      if (param_1[4] != 0) {
        FUN_00ebdd50(0xffffffff);
        param_1[4] = 0;
        return;
      }
    }
    else {
      FUN_00e7caf0(*(int *)(param_1[1] + 0x14) + local_c * 0x38);
    }
  }
  return;
}

// 00E7EBE0  FUN_00e7ebe0  size=536  [between]
void FUN_00e7ebe0(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_40;
  int local_3c;
  int local_38;
  char local_34 [32];
  undefined1 local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_40;
  local_3c = param_1;
  iVar2 = FUN_00a7c890();
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016d12d8);
    __security_check_cookie(local_4 ^ (uint)&local_40);
    return;
  }
  uVar5 = param_2[0xc];
  if ((param_2[6] & 2) == 0) {
    if ((param_2[6] & 1) == 0) {
      _sprintf_s(local_34,0x20,"%04x",(uint)(ushort)uVar5);
      goto LAB_00e7ec8a;
    }
    uVar3 = *param_2;
  }
  else {
    uVar3 = param_2[0xb];
  }
  FUN_009f8ea0(local_14,0x10,uVar3 & 0xffffff,0);
  _sprintf_s(local_34,0x20,"%s_%04x",local_14,(uint)(ushort)uVar5);
LAB_00e7ec8a:
  uVar5 = 0x400000;
  local_40 = 0x400000;
  if ((param_2[6] & 4) == 0) {
    uVar5 = 0x8400000;
    local_40 = 0x8400000;
  }
  if ((param_2[6] & 8) != 0) {
    uVar5 = uVar5 | 0x40;
    local_40 = uVar5;
  }
  if ((char)param_2[8] == '\x04') {
    uVar5 = uVar5 | 0x10;
    local_40 = uVar5;
  }
  if ((byte)(*(char *)((int)param_2 + 0x23) - 1U) < 2) {
    uVar5 = uVar5 | 0x400;
    local_40 = uVar5;
  }
  local_38 = FUN_00e706a0(iVar2,param_2);
  if (local_38 != 0) {
    uVar5 = local_40 | 0x400;
  }
  local_40 = uVar5 & 0x10;
  iVar1 = -(uint)(local_40 != 0);
  switch((char)param_2[8]) {
  default:
    uVar4 = FUN_00e75e20(iVar2,iVar1,local_34,uVar5,param_2);
    break;
  case '\x06':
  case '\b':
    uVar4 = FUN_00e793f0(iVar2,iVar1,local_34,uVar5,param_2);
    break;
  case '\a':
    uVar4 = FUN_00e793f0(iVar2,iVar1,local_34,uVar5,param_2);
  }
  if (*(char *)((int)param_2 + 0x23) == '\x01') {
    FUN_00e70700(iVar2,uVar4,local_34,param_2);
  }
  else if (local_38 != 0) {
    FUN_00e707a0(iVar2,uVar4,local_34,param_2);
  }
  FUN_00e6a1d0(iVar2,param_2);
  if ((param_2[6] & 0x20) == 0) {
    *(undefined4 *)(iVar2 + 0x340) = 0;
    *(undefined4 *)(iVar2 + 0x33c) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x340) = 1;
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00932410();
  }
  iVar2 = local_3c;
  if (((local_40 == 0) && (*(int *)(local_3c + 0x20) != 0)) &&
     ((*(uint *)(local_3c + 0x2c) & 2) == 0)) {
    *(uint *)(local_3c + 0x2c) = *(uint *)(local_3c + 0x2c) | 2;
    FUN_009321a0(*(int *)(local_3c + 0x20),1);
    *(undefined4 *)(iVar2 + 0x28) = 0xffffffff;
  }
  __security_check_cookie(local_4 ^ (uint)&local_40);
  return;
}

// 00E7EE10  FUN_00e7ee10  size=85  [between]
void __fastcall FUN_00e7ee10(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  FUN_00e7d0e0();
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00e70d10(param_1 + 0x24);
    FUN_00e7d250();
    FUN_00e70c30();
    return;
  }
  FUN_00e79970(param_1 + 0x24,param_1 + 0x14);
  FUN_00e7d250();
  FUN_00e70c30();
  return;
}

// 00E7EEA0  thunk_FUN_00e7d700  size=5  [between]
void thunk_FUN_00e7d700(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (((((*(uint *)((int)&DAT_01dda500 + uVar3) & 1) != 0) &&
         (-1 < (int)*(uint *)((int)&DAT_01dda500 + uVar3))) &&
        (*(int *)((int)&DAT_01dda514 + uVar3) == 3)) &&
       ((iVar1 = *(int *)((int)&DAT_01dda524 + uVar3), iVar1 != 0 &&
        ((*(int *)(iVar1 + 0x1a84) == 0 || (*(int *)(iVar1 + 0x1a84) == 2)))))) {
      iVar2 = FUN_00e78b20();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 0x400;
      }
    }
    uVar3 = uVar3 + 0x34;
  } while (uVar3 < 0x1a0);
  return;
}

// 00E7EF20  Event::StateDataHolder::StateDataHolder  size=890  [class]
undefined4 * __fastcall Event::StateDataHolder::StateDataHolder(undefined4 *param_1)

{
  *param_1 = 3;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  FUN_00de3530();
  param_1[5] = vftable;
  param_1[6] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = CutDataHolder::vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0x3c;
  *(undefined1 *)((int)param_1 + 0x41) = 0xff;
  *(undefined1 *)((int)param_1 + 0x42) = 0xff;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = CameraDataHolder::vftable;
  FUN_00de3530();
  param_1[0x2e] = 0;
  FUN_00de3540(0,0);
  ActorDataHolder::ActorDataHolder();
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = ControlDataHolder::vftable;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = MoveDataHolder::vftable;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7b] = EffectDataHolder::vftable;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0xa1] = 0;
  param_1[0xa3] = 0;
  param_1[0xa5] = 0;
  param_1[0x90] = GraphicDataHolder::vftable;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xa6] = ModelControlDataHolder::vftable;
  param_1[0xb8] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = ScrDataHolder::vftable;
  param_1[0xc9] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xd9] = 0;
  param_1[0xdb] = 0;
  param_1[200] = SeDataHolder::vftable;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xed] = 0;
  param_1[0xef] = 0;
  param_1[0xdc] = BgmDataHolder::vftable;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf0] = UiDataHolder::vftable;
  param_1[0x102] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x101] = VibDataHolder::vftable;
  return param_1;
}

// 00E7F2A0  Event::DataHolderBase::DataHolderBase  size=590  [class]
void __fastcall Event::DataHolderBase::DataHolderBase(int param_1)

{
  *(undefined ***)(param_1 + 0x404) = VibDataHolder::vftable;
  if (*(int *)(param_1 + 0x428) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x428),0);
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  if (*(int *)(param_1 + 0x418) != 0) {
    *(undefined4 *)(param_1 + 0x420) = 0;
    if (*(int *)(param_1 + 0x424) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x418),0);
      *(undefined4 *)(param_1 + 0x424) = 0;
    }
    *(undefined4 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
  }
  *(undefined4 *)(param_1 + 0x40c) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  DataHolderBase_2();
  *(undefined ***)(param_1 + 0x3c0) = UiDataHolder::vftable;
  if (*(int *)(param_1 + 0x3e4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x3e4),0);
    *(undefined4 *)(param_1 + 0x3e4) = 0;
  }
  if (*(int *)(param_1 + 0x3d4) != 0) {
    *(undefined4 *)(param_1 + 0x3dc) = 0;
    if (*(int *)(param_1 + 0x3e0) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x3d4),0);
      *(undefined4 *)(param_1 + 0x3e0) = 0;
    }
    *(undefined4 *)(param_1 + 0x3d4) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  DataHolderBase_8();
  *(undefined ***)(param_1 + 0x370) = BgmDataHolder::vftable;
  BgmDataHolder::vf0C();
  DataHolderBase_9();
  *(undefined ***)(param_1 + 800) = SeDataHolder::vftable;
  SeDataHolder::vf0C();
  DataHolderBase_10();
  *(undefined ***)(param_1 + 0x2dc) = ScrDataHolder::vftable;
  DataHolderBase_11();
  *(undefined ***)(param_1 + 0x298) = ModelControlDataHolder::vftable;
  DataHolderBase_12();
  *(undefined ***)(param_1 + 0x240) = GraphicDataHolder::vftable;
  GraphicDataHolder::vf0C();
  DataHolderBase_13();
  *(undefined ***)(param_1 + 0x1ec) = EffectDataHolder::vftable;
  EffectDataHolder::vf0C();
  DataHolderBase_14();
  *(undefined ***)(param_1 + 0x1a8) = MoveDataHolder::vftable;
  DataHolderBase_4();
  *(undefined ***)(param_1 + 0x164) = ControlDataHolder::vftable;
  if (*(int *)(param_1 + 0x188) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x188),0);
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    *(undefined4 *)(param_1 + 0x180) = 0;
    if (*(int *)(param_1 + 0x184) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x178),0);
      *(undefined4 *)(param_1 + 0x184) = 0;
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  DataHolderBase_5();
  ActorDataHolder::~ActorDataHolder();
  CameraDataHolder::~CameraDataHolder();
  DataHolderBase_3();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined ***)(param_1 + 0x14) = vftable;
  return;
}

// 00E7F4F0  FUN_00e7f4f0  size=16  [between]
void FUN_00e7f4f0(void)

{
  FUN_00e78250();
  FUN_00e7ded0();
  return;
}

// 00E7F510  FUN_00e7f510  size=158  [between]
void __thiscall FUN_00e7f510(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_b0 [80];
  undefined1 local_60 [92];
  
  if (*(char *)(param_3 + 0x1f) == '\x01') {
    iVar1 = FUN_00e846d0(param_3);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x40;
    }
  }
  else if (*(char *)(param_3 + 0x1f) == '\x02') {
    iVar1 = *(int *)(param_1 + 0x188);
  }
  else {
    iVar1 = FUN_00e84670(param_3);
  }
  if (iVar1 == 0) {
    FUN_00e7e590(param_2,param_3);
    return;
  }
  FUN_00e7e590(local_b0,param_3);
  FUN_00e7e590(local_60,iVar1);
  fVar2 = (float10)FUN_00e7be60(param_3,iVar1);
  FUN_00e697d0(param_2,local_b0,(float)fVar2);
  return;
}

// 00E7F5B0  FUN_00e7f5b0  size=272  [between]
void __thiscall FUN_00e7f5b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_174 [8];
  int local_16c;
  int local_168;
  undefined4 local_164;
  undefined1 local_160 [80];
  undefined1 local_110 [80];
  undefined1 local_c0 [80];
  undefined1 local_70 [92];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_174;
  local_164 = param_2;
  local_16c = FUN_00e846d0(param_3);
  if (local_16c == 0) {
    if (*(char *)(param_3 + 0x1f) == '\x01') {
      local_16c = param_1 + 0x40;
      goto LAB_00e7f5fc;
    }
  }
  else if (*(char *)(local_16c + 0x1d) == *(char *)(param_3 + 0x1d)) goto LAB_00e7f5fc;
  local_16c = param_3;
LAB_00e7f5fc:
  iVar1 = FUN_00e84670(param_3);
  if (iVar1 == 0) {
    iVar1 = param_3;
  }
  local_168 = FUN_00e84670(iVar1);
  if ((local_168 == 0) || (*(char *)(iVar1 + 0x1d) != *(char *)(param_3 + 0x1d))) {
    local_168 = iVar1;
  }
  FUN_00e7e590(local_160,local_16c);
  FUN_00e7e590(local_110,param_3);
  FUN_00e7e590(local_c0,iVar1);
  FUN_00e7e590(local_70,local_168);
  fVar2 = (float10)FUN_00e7be60(param_3,iVar1);
  FUN_00e74a70(local_164,local_160,*(undefined4 *)(param_3 + 0x2c),(float)fVar2);
  __security_check_cookie(local_14 ^ (uint)auStack_174);
  return;
}

// 00E7F6C0  FUN_00e7f6c0  size=461  [between]
void __thiscall FUN_00e7f6c0(int *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int *local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_b4;
  undefined1 local_b0 [80];
  undefined1 local_60 [92];
  
  if (*(char *)(param_3 + 0x1f) == '\x01') {
    local_d4 = (int *)FUN_00e846d0(param_3);
    if (local_d4 == (int *)0x0) {
      local_d4 = param_1 + 0x10;
    }
  }
  else if (*(char *)(param_3 + 0x1f) == '\x02') {
    local_d4 = (int *)param_1[0x62];
  }
  else {
    local_d4 = (int *)FUN_00e84670(param_3);
  }
  if (local_d4 == (int *)0x0) {
    FUN_00e7e590(param_2,param_3);
    return;
  }
  iVar3 = *param_1;
  FUN_00e7e590(local_b0,param_3);
  FUN_00e7e590(local_60,local_d4);
  local_d0 = 0.0;
  local_cc = 1.0;
  local_c8 = 0.0;
  if (*(char *)(param_3 + 0x60) != '\0') {
    sVar1 = FUN_00e86520(*(undefined4 *)(param_3 + 100),*(undefined4 *)(param_3 + 0x68));
    iVar2 = (int)sVar1;
    if ((((-1 < iVar2) && (iVar2 < *(int *)(iVar3 + 0x84))) &&
        (iVar3 = iVar2 * 0x50 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) &&
       ((*(int *)(iVar3 + 0x20) != 0 && (iVar3 = FUN_00a7c800(), iVar3 != 0)))) {
      D3DXVec3TransformNormal(&local_d0,&local_d0,iVar3 + 0x10);
      fStack_b4 = local_cc * local_cc + local_d0 * local_d0 + local_c8 * local_c8;
      if (fStack_b4 < 0.0 == (fStack_b4 == 0.0)) {
        FUN_00ddf460(&local_d0,&local_d0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_d0 = 0.0;
        local_cc = 1.0;
        local_c8 = 0.0;
      }
    }
  }
  fVar4 = (float10)FUN_00e7be60(param_3,local_d4);
  FUN_00e74c40(param_2,local_b0,&local_d0,(float)fVar4);
  return;
}

// 00E7F890  FUN_00e7f890  size=373  [between]
void __thiscall FUN_00e7f890(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined1 local_b0 [80];
  undefined1 local_60 [92];
  
  if (*(char *)(param_3 + 0x1f) == '\x01') {
    puVar3 = (undefined4 *)FUN_00e846d0(param_3);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = param_1 + 0x10;
    }
  }
  else if (*(char *)(param_3 + 0x1f) == '\x02') {
    puVar3 = (undefined4 *)param_1[0x62];
  }
  else {
    puVar3 = (undefined4 *)FUN_00e84670(param_3);
  }
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    FUN_00e7e590(local_b0,param_3);
    FUN_00e7e590(local_60,puVar3);
    local_c0 = 0.0;
    local_bc = 1.0;
    local_b8 = 0.0;
    iVar4 = FUN_00e749d0(uVar1,param_3);
    if (iVar4 != 0) {
      D3DXVec3TransformNormal(&local_c0,&local_c0,iVar4 + 0x10);
      fVar2 = local_bc * local_bc + local_c0 * local_c0 + local_b8 * local_b8;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_c0,&local_c0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_c0 = 0.0;
        local_bc = 1.0;
        local_b8 = 0.0;
      }
    }
    fVar5 = (float10)FUN_00e7be60(param_3,puVar3);
    FUN_00e74e40(param_2,local_b0,&local_c0,(float)fVar5);
    return;
  }
  FUN_00e7e590(param_2,param_3);
  return;
}

// 00E7FA40  Event::ProgressModule::jumpToFrame_3  size=123  [class]
void __thiscall Event::ProgressModule::jumpToFrame_3(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(iVar2 + 0x1a84);
  if (((iVar1 == 0) || (iVar1 == 2)) && (iVar1 = FUN_00e7e7d0(param_2), iVar1 != 0)) {
    iVar2 = FUN_00932520(iVar2 + 0x1a70,param_2 + 0x1c);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_2 + 0x40);
      iVar1 = *param_1;
      if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(iVar1 + 0x20) + 0x18))) {
        *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 1;
        *(undefined4 *)(iVar1 + 0x48) = 0;
        *(int *)(iVar1 + 0x44) = iVar2;
        param_1[8] = 1;
        return;
      }
      FUN_00dd5650(&DAT_016d0184);
    }
    param_1[8] = 1;
  }
  return;
}

// 00E7FAC0  FUN_00e7fac0  size=108  [between]
void __thiscall FUN_00e7fac0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(iVar2 + 0x1a84);
  if ((iVar1 != 0) && (iVar1 != 2)) {
    return;
  }
  iVar1 = FUN_00e7e7d0(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_00932520(iVar2 + 0x1a70,param_2 + 0x1c);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x40);
  }
  else {
    if (iVar2 != 1) goto LAB_00e7fb1f;
    uVar3 = *(undefined4 *)(param_2 + 0x44);
  }
  Event::ProgressModule::jumpToFrame(uVar3,0);
LAB_00e7fb1f:
  param_1[8] = 1;
  return;
}

// 00E7FB30  FUN_00e7fb30  size=108  [between]
void __fastcall FUN_00e7fb30(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((*(uint *)(*param_1 + 0x28) & 0x8000000) != 0) {
    (**(code **)(param_1[4] + 4))();
    piVar2 = param_1 + 0x34;
    iVar1 = 0x20;
    do {
      (**(code **)(*piVar2 + 4))();
      piVar2 = piVar2 + 0x2c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    (**(code **)(*(int *)param_1[0x60c] + 4))();
  }
  iVar1 = FUN_00e78f80();
  if (iVar1 != 0) {
    (**(code **)(param_1[4] + 4))();
  }
  FUN_00e78e50();
  FUN_00e7e900();
  return;
}

// 00E7FBA0  FUN_00e7fba0  size=23  [between]
void FUN_00e7fba0(void)

{
  FUN_00e7c560();
  FUN_00e7c7d0();
  FUN_00e7e9c0();
  return;
}

// 00E7FBC0  FUN_00e7fbc0  size=207  [between]
void __thiscall FUN_00e7fbc0(int *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (1 < (byte)(*(char *)(param_3 + 0x20) - 4U)) goto LAB_00e7fc51;
  iVar3 = FUN_00a7c890();
  uVar4 = FUN_00e36300(0);
  if (*(int *)(*(int *)*param_1 + 0x1a70) == 0) {
LAB_00e7fbff:
    cVar2 = '<';
  }
  else {
    cVar2 = *(char *)(((int *)*param_1)[2] + 1);
    if (cVar2 == '\x01') {
      cVar2 = '\x1e';
    }
    else {
      if (cVar2 == '\x02') goto LAB_00e7fbff;
      cVar2 = FUN_00e23840(uVar4);
    }
  }
  fVar1 = *(float *)(param_3 + 0x4c);
  FUN_00e26e90();
  FUN_00e35e90(iVar3 + 0x98,fVar1 / (float)(int)cVar2,0x10);
LAB_00e7fc51:
  switch(*(undefined1 *)(param_3 + 0x20)) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 8:
    FUN_00e7ebe0(param_2,param_3);
    break;
  case 2:
    FUN_00e6a280(param_2,param_3);
    return;
  case 3:
    FUN_00e70870(param_2,param_3);
    return;
  }
  return;
}

// 00E7FCD0  Event::ReadUnit::ReadUnit  size=25  [class]
void __fastcall Event::ReadUnit::ReadUnit(undefined4 *param_1)

{
  *param_1 = ReadUnitDebug::vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = vftable;
  return;
}

// 00E7FCF0  Event::ReadUnitExternal::ReadUnitExternal  size=31  [class]
undefined4 * __fastcall Event::ReadUnitExternal::ReadUnitExternal(undefined4 *param_1)

{
  *param_1 = vftable;
  StateDataHolder::StateDataHolder();
  param_1[0x117] = 0;
  return param_1;
}

// 00E7FD10  Event::ReadUnit::ReadUnit_4  size=25  [class]
void __fastcall Event::ReadUnit::ReadUnit_4(undefined4 *param_1)

{
  *param_1 = ReadUnitExternal::vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = vftable;
  return;
}

// 00E7FD30  Event::ReadUnitNorm::ReadUnitNorm  size=40  [class]
undefined4 * __fastcall Event::ReadUnitNorm::ReadUnitNorm(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  StateDataHolder::StateDataHolder();
  param_1[0x11a] = 0;
  return param_1;
}

// 00E7FD60  Event::ReadUnit::ReadUnit_3  size=25  [class]
void __fastcall Event::ReadUnit::ReadUnit_3(undefined4 *param_1)

{
  *param_1 = ReadUnitNorm::vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = vftable;
  return;
}

// 00E7FD80  Event::ReadUnitExternal::ReadUnitExternal_3  size=37  [class]
undefined4 * __fastcall Event::ReadUnitExternal::ReadUnitExternal_3(undefined4 *param_1)

{
  *param_1 = vftable;
  StateDataHolder::StateDataHolder();
  param_1[0x117] = 0;
  *param_1 = ReadUnitPhase::vftable;
  return param_1;
}

// 00E7FDB0  Event::ReadUnit::ReadUnit_2  size=25  [class]
void __fastcall Event::ReadUnit::ReadUnit_2(undefined4 *param_1)

{
  *param_1 = ReadUnitExternal::vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = vftable;
  return;
}

// 00E7FDD0  Event::ReadUnitExternal::ReadUnitExternal_2  size=37  [class]
undefined4 * __fastcall Event::ReadUnitExternal::ReadUnitExternal_2(undefined4 *param_1)

{
  *param_1 = vftable;
  StateDataHolder::StateDataHolder();
  param_1[0x117] = 0;
  *param_1 = ReadUnitRoom::vftable;
  return param_1;
}

// 00E7FE00  Event::ReadUnit::ReadUnit_5  size=25  [class]
void __fastcall Event::ReadUnit::ReadUnit_5(undefined4 *param_1)

{
  *param_1 = ReadUnitExternal::vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = vftable;
  return;
}

// 00E7FE20  FUN_00e7fe20  size=380  [between]
void __fastcall FUN_00e7fe20(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_60 [92];
  
  iVar2 = FUN_00e849b0(0x7f0000,0);
  if (iVar2 == -1) {
    if (param_1[0x61] != 0) {
      param_1[0x62] = param_1[0x61];
      param_1[0x61] = 0;
      return;
    }
  }
  else {
    iVar2 = iVar2 * 0x7c + *(int *)(param_1[1] + 0x14);
    if (param_1[0x61] != iVar2) {
      param_1[0x62] = param_1[0x61];
      param_1[0x61] = iVar2;
    }
    if ((((*(byte *)(iVar2 + 0x18) & 1) != 0) || ((*(byte *)(param_1 + 3) & 1) != 0)) &&
       ((*(int *)(*param_1 + 0x1a84) == 0 || (*(int *)(*param_1 + 0x1a84) == 2)))) {
      FUN_00e69960();
      return;
    }
    if ((*(byte *)(*param_1 + 0x28) & 0x40) == 0) {
      fVar4 = (float10)FUN_00e70cd0();
      fVar1 = (float)(fVar4 * (float10)10.0 * (float10)(float)param_1[0x66] +
                     (float10)(float)param_1[0x65]);
      FUN_00fddce0((double)fVar1);
      iVar3 = FUN_00fdbc60();
      param_1[100] = param_1[100] + iVar3;
      param_1[0x65] = (int)(fVar1 - (float)iVar3);
    }
    switch(*(undefined1 *)(iVar2 + 0x1d)) {
    case 1:
      FUN_00e7f510(local_60,iVar2);
      break;
    case 2:
      FUN_00e7f5b0(local_60,iVar2);
      break;
    case 3:
      FUN_00e7f6c0(local_60,iVar2);
      break;
    case 4:
      FUN_00e7f890(local_60,iVar2);
      break;
    default:
      FUN_00e7e590(local_60,iVar2);
    }
    if (*(int *)(*param_1 + 0x160) == 0) {
      FUN_00e75120(local_60,0);
    }
    param_1[99] = 1;
  }
  return;
}

// 00E7FFB0  FUN_00e7ffb0  size=99  [between]
void __thiscall FUN_00e7ffb0(int *param_1,int param_2)

{
  int iVar1;
  
  switch(*(undefined1 *)(param_2 + 0x1c)) {
  case 0:
    iVar1 = FUN_00e7e7d0(param_2);
    if (iVar1 != 0) {
      FUN_00932520(*param_1 + 0x1a70,(undefined1 *)(param_2 + 0x1c));
      return;
    }
    break;
  case 1:
    FUN_00e78b90(param_2);
    return;
  case 2:
    Event::ProgressModule::jumpToFrame_3(param_2);
    return;
  case 3:
    FUN_00e7fac0(param_2);
  }
  return;
}

// 00E80030  FUN_00e80030  size=276  [between]
void __thiscall FUN_00e80030(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = (uint)*(short *)(param_2 + 8);
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(*param_1 + 0x84))) &&
      (iVar2 = uVar1 * 0x50 + *(int *)(*param_1 + 0x7c), iVar2 != 0)) &&
     (*(int *)(iVar2 + 0x20) != 0)) {
    if ((param_1[(uVar1 >> 5) + 4] & 0x80000000U >> ((byte)*(short *)(param_2 + 8) & 0x1f)) == 0) {
      FUN_00e79540(*param_1,iVar2,param_2);
    }
    if (*(char *)(param_2 + 0x1f) == '\x01') {
      local_20 = *(undefined4 *)(param_2 + 0x88);
      local_1c = *(undefined4 *)(param_2 + 0x88);
      local_18 = *(undefined4 *)(param_2 + 0x88);
      FUN_00a7cf90(&local_20);
    }
    FUN_00e7fbc0(iVar2,param_2);
    if (((*(byte *)(param_2 + 0x18) & 0x10) != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      FUN_00932260(*(int *)(iVar2 + 0x20),*param_1 + 0x1a70,*(undefined4 *)(param_2 + 100));
    }
    FUN_00e70980(iVar2,param_2);
    iVar2 = *(int *)(iVar2 + 0x20);
    if (iVar2 != 0) {
      if (*(char *)(param_2 + 0x24) == '\x01') {
        FUN_009333b0(iVar2,1,*(undefined1 *)(param_2 + 0x25),*(undefined4 *)(param_2 + 0x60),2);
      }
      else if (*(char *)(param_2 + 0x24) == '\x02') {
        FUN_009333b0(iVar2,0,*(undefined1 *)(param_2 + 0x25),*(undefined4 *)(param_2 + 0x60),2);
        return;
      }
    }
  }
  return;
}

// 00E80150  Event::ReadUnitDebug::ReadUnitDebug  size=221  [class]
int * Event::ReadUnitDebug::ReadUnitDebug(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    piVar1 = (int *)FUN_00dd3500(0x4c0,&DAT_01b7bd48);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    *piVar1 = (int)vftable;
    StateDataHolder::StateDataHolder();
    piVar1[0x12f] = 0;
  }
  else {
    iVar2 = *param_1;
    if (iVar2 == 0) {
      iVar2 = FUN_00dd3500(0x46c,&DAT_01b7bd48);
      if (iVar2 == 0) {
        return (int *)0x0;
      }
      piVar1 = (int *)ReadUnitNorm::ReadUnitNorm();
    }
    else if (iVar2 == 1) {
      iVar2 = FUN_00dd3500(0x460,&DAT_01b7bd48);
      if (iVar2 == 0) {
        return (int *)0x0;
      }
      piVar1 = (int *)ReadUnitExternal::ReadUnitExternal_2();
    }
    else {
      if (iVar2 != 2) {
        return (int *)0x0;
      }
      iVar2 = FUN_00dd3500(0x460,&DAT_01b7bd48);
      if (iVar2 == 0) {
        return (int *)0x0;
      }
      piVar1 = (int *)ReadUnitExternal::ReadUnitExternal_3();
    }
  }
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 4))(param_1,param_2,param_3);
    if (iVar2 != 0) {
      return piVar1;
    }
    (**(code **)*piVar1)(1);
  }
  return (int *)0x0;
}

// 00E80230  Event::Work::createReadUnit  size=60  [class]
undefined4 __fastcall Event::Work::createReadUnit(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = ReadUnitDebug::ReadUnitDebug
                      (param_1 + 4,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x20) = iVar1;
      return 1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016d142c);
  }
  return 0;
}

// 00E80270  FUN_00e80270  size=88  [between]
void __fastcall FUN_00e80270(int *param_1)

{
  int iVar1;
  
  if ((*(uint *)(*param_1 + 0x1a68) & 0x10000000) != 0) {
    iVar1 = param_1[0x60];
    if (DAT_018d0268 != 0) {
      FUN_00e84120(param_1 + 0x50);
      param_1[0x60] = iVar1;
      FUN_009323a0(param_1 + 0x50,iVar1);
    }
    return;
  }
  if (*(int *)(*param_1 + 0x1a70) != 0) {
    FUN_00e7fe20();
    return;
  }
  FUN_00e7e050();
  return;
}

// 00E802D0  FUN_00e802d0  size=83  [between]
void __fastcall FUN_00e802d0(int *param_1)

{
  int iVar1;
  
  if ((*(uint *)(*param_1 + 0x1a68) & 0x10000000) == 0) {
    if (*(int *)(*param_1 + 0x1a70) != 0) {
      FUN_00e7fe20();
      return;
    }
  }
  else {
    iVar1 = param_1[0x60];
    if (DAT_018d0268 != 0) {
      FUN_00e84120(param_1 + 0x50);
      param_1[0x60] = iVar1;
      FUN_009323a0(param_1 + 0x50,iVar1);
    }
  }
  return;
}

// 00E803A0  FUN_00e803a0  size=290  [between]
void __fastcall FUN_00e803a0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iStack_4;
  
  if ((*(byte *)(*param_1 + 0x28) & 0x40) == 0) {
    iVar2 = ((int *)param_1[1])[5];
    iStack_4 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iStack_4) {
      puVar3 = (uint *)(iVar2 + 0x10);
      do {
        if ((((char)puVar3[3] != '\x06') && (-1 < (int)*puVar3)) && ((*puVar3 & 1) == 0)) {
          if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
            iVar1 = FUN_00e76ba0(puVar3 + -4);
            if (iVar1 != 0) {
              switch((char)puVar3[1]) {
              default:
switchD_00e80404_caseD_0:
                FUN_00e80030(puVar3 + -4);
                break;
              case '\x03':
                break;
              }
            }
          }
          else {
            iVar1 = FUN_00e76ba0(puVar3 + -4);
            if (iVar1 != 0) {
              switch((char)puVar3[1]) {
              default:
                goto switchD_00e80404_caseD_0;
              case '\x02':
                break;
              }
            }
          }
        }
        puVar3 = puVar3 + 0x25;
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
    iVar1 = (**(code **)(*(int *)param_1[1] + 0x2c))();
    if (0 < iVar1) {
      puVar3 = (uint *)(iVar2 + 0x10);
      do {
        if ((((char)puVar3[3] == '\x06') && (-1 < (int)*puVar3)) && ((*puVar3 & 1) == 0)) {
          if ((*(uint *)(*param_1 + 0x28) & 0x2000) == 0) {
            iVar2 = FUN_00e76ba0(puVar3 + -4);
            if (iVar2 != 0) {
              switch((char)puVar3[1]) {
              default:
switchD_00e80485_caseD_0:
                FUN_00e80030(puVar3 + -4);
                break;
              case '\x03':
                break;
              }
            }
          }
          else {
            iVar2 = FUN_00e76ba0(puVar3 + -4);
            if (iVar2 != 0) {
              switch((char)puVar3[1]) {
              default:
                goto switchD_00e80485_caseD_0;
              case '\x02':
                break;
              }
            }
          }
        }
        puVar3 = puVar3 + 0x25;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

// 00E80510  Event::Work::createReadUnit_2  size=122  [class]
undefined4 __thiscall
Event::Work::createReadUnit_2
          (undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  int iVar1;
  
  *param_1 = 1;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_3;
  param_1[7] = 0;
  param_1[10] = param_4;
  param_1[0xb] = param_5;
  param_1[0xc] = 0xffffffff;
  if (param_1[8] == 0) {
    iVar1 = ReadUnitDebug::ReadUnitDebug(param_1 + 1,param_3,param_4);
    if (iVar1 != 0) {
      param_1[8] = iVar1;
      return 1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016d142c);
  }
  return 0;
}

// 00E80590  FUN_00e80590  size=193  [between]
void __fastcall FUN_00e80590(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar5);
      iVar3 = *(int *)(param_1 + 0xc) + iVar5;
      if ((*(uint *)(iVar2 + 0x1a68) & 0x10000000) == 0) {
        if (*(int *)(iVar2 + 0x1a70) == 0) {
          FUN_00e7e050();
        }
        else {
          FUN_00e7fe20();
        }
      }
      else {
        puVar1 = (undefined4 *)(iVar3 + 0x140);
        if (DAT_018d0268 != 0) {
          *puVar1 = *puVar1;
          *(undefined4 *)(iVar3 + 0x144) = *(undefined4 *)(iVar3 + 0x144);
          *(undefined4 *)(iVar3 + 0x148) = *(undefined4 *)(iVar3 + 0x148);
          *(undefined4 *)(iVar3 + 0x14c) = *(undefined4 *)(iVar3 + 0x14c);
          *(undefined4 *)(iVar3 + 0x150) = *(undefined4 *)(iVar3 + 0x150);
          *(undefined4 *)(iVar3 + 0x154) = *(undefined4 *)(iVar3 + 0x154);
          *(undefined4 *)(iVar3 + 0x158) = *(undefined4 *)(iVar3 + 0x158);
          *(undefined4 *)(iVar3 + 0x15c) = *(undefined4 *)(iVar3 + 0x15c);
          *(undefined4 *)(iVar3 + 0x160) = *(undefined4 *)(iVar3 + 0x160);
          *(undefined4 *)(iVar3 + 0x164) = *(undefined4 *)(iVar3 + 0x164);
          *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(iVar3 + 0x168);
          *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(iVar3 + 0x16c);
          *(undefined4 *)(iVar3 + 0x170) = *(undefined4 *)(iVar3 + 0x170);
          *(undefined4 *)(iVar3 + 0x174) = *(undefined4 *)(iVar3 + 0x174);
          FUN_009323a0(puVar1,*(undefined4 *)(iVar3 + 0x180));
        }
      }
      iVar5 = iVar5 + 0x1a0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

// 00E80660  FUN_00e80660  size=186  [between]
void __fastcall FUN_00e80660(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + iVar5);
      iVar3 = *(int *)(param_1 + 0xc) + iVar5;
      if ((*(uint *)(iVar2 + 0x1a68) & 0x10000000) == 0) {
        if (*(int *)(iVar2 + 0x1a70) != 0) {
          FUN_00e7fe20();
        }
      }
      else {
        puVar1 = (undefined4 *)(iVar3 + 0x140);
        if (DAT_018d0268 != 0) {
          *puVar1 = *puVar1;
          *(undefined4 *)(iVar3 + 0x144) = *(undefined4 *)(iVar3 + 0x144);
          *(undefined4 *)(iVar3 + 0x148) = *(undefined4 *)(iVar3 + 0x148);
          *(undefined4 *)(iVar3 + 0x14c) = *(undefined4 *)(iVar3 + 0x14c);
          *(undefined4 *)(iVar3 + 0x150) = *(undefined4 *)(iVar3 + 0x150);
          *(undefined4 *)(iVar3 + 0x154) = *(undefined4 *)(iVar3 + 0x154);
          *(undefined4 *)(iVar3 + 0x158) = *(undefined4 *)(iVar3 + 0x158);
          *(undefined4 *)(iVar3 + 0x15c) = *(undefined4 *)(iVar3 + 0x15c);
          *(undefined4 *)(iVar3 + 0x160) = *(undefined4 *)(iVar3 + 0x160);
          *(undefined4 *)(iVar3 + 0x164) = *(undefined4 *)(iVar3 + 0x164);
          *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(iVar3 + 0x168);
          *(undefined4 *)(iVar3 + 0x16c) = *(undefined4 *)(iVar3 + 0x16c);
          *(undefined4 *)(iVar3 + 0x170) = *(undefined4 *)(iVar3 + 0x170);
          *(undefined4 *)(iVar3 + 0x174) = *(undefined4 *)(iVar3 + 0x174);
          FUN_009323a0(puVar1,*(undefined4 *)(iVar3 + 0x180));
        }
      }
      iVar5 = iVar5 + 0x1a0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

// 00E80720  FUN_00e80720  size=121  [between]
void __fastcall FUN_00e80720(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int **)(param_1 + 4))[5];
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((-1 < (int)*(uint *)(iVar2 + 0x10)) && ((*(uint *)(iVar2 + 0x10) & 1) == 0)) {
        switch(*(undefined4 *)(iVar2 + 0x18)) {
        case 0:
          FUN_00e7e6d0(iVar2);
          break;
        case 1:
          FUN_00e7ffb0(iVar2);
          break;
        case 2:
          Event::ProgressModule::jumpToFrame_2(iVar2);
          break;
        case 3:
          FUN_00e7e8a0(iVar2);
          break;
        case 4:
          FUN_00e78d00(iVar2);
          break;
        case 5:
          FUN_00e78d90(iVar2);
        }
      }
      iVar2 = iVar2 + 0xc0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 00E807C0  FUN_00e807c0  size=23  [between]
void FUN_00e807c0(void)

{
  FUN_00e7cdd0();
  FUN_00e803a0();
  FUN_00e76030();
  return;
}

// 00E807E0  Event::Work::debugValidateDataDir  size=164  [class]
int Event::Work::debugValidateDataDir(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00e723d0(param_1,param_2);
  if (iVar1 != 0) {
    if ((*(int *)(iVar1 + 0x2c) != param_4) &&
       (*(int *)(iVar1 + 0x2c) = param_4, *(int *)(iVar1 + 0x24) != 0)) {
      PlayUnit(param_4);
    }
    if (*(int *)(iVar1 + 0x28) == param_3) {
      return iVar1;
    }
    FUN_00dd5650(&DAT_016ced48);
    return iVar1;
  }
  iVar1 = Manager::getEmptyWork();
  if ((iVar1 == 0) || (iVar2 = createReadUnit_2(param_1,param_2,param_3,param_4), iVar2 == 0)) {
    return 0;
  }
  if (PTR_DAT_018d0400 == (undefined *)0x0) {
    return iVar1;
  }
  if (DAT_018d0408 <= DAT_018d0404) {
    return iVar1;
  }
  if ((int *)(PTR_DAT_018d0400 + DAT_018d0404 * 4) != (int *)0x0) {
    *(int *)(PTR_DAT_018d0400 + DAT_018d0404 * 4) = iVar1;
  }
  DAT_018d0404 = DAT_018d0404 + 1;
  return iVar1;
}

// 00E808B0  FUN_00e808b0  size=223  [between]
void __fastcall FUN_00e808b0(int param_1)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  
  pfVar2 = (float *)(param_1 + 0x58);
  *pfVar2 = *(float *)(param_1 + 0x78);
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x80) = 0xbf800000;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x84) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x88) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x8c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x94) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00e80720();
  do {
    if (3 < uVar3) break;
    fVar1 = pfVar2[8];
    if (fVar1 != *pfVar2) {
      if (fVar1 == -1.0) {
        fVar1 = 1.0;
      }
      FUN_00932020(uVar3,fVar1);
    }
    uVar3 = uVar3 + 1;
    pfVar2 = pfVar2 + 1;
  } while (uVar3 < 8);
  FUN_00e78a60();
  return;
}

// 00E80990  Event::Manager::activateWork_2  size=158  [class]
uint * Event::Manager::activateWork_2
                 (uint *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  
  puVar2 = (uint *)Work::debugValidateDataDir(param_1,param_2,param_3,param_4);
  if (puVar2 != (uint *)0x0) {
    puVar4 = DAT_01dd9ee8;
    if (param_2 < 0) {
      puVar4 = &DAT_01dda500;
      iVar3 = 8;
      do {
        uVar1 = *puVar4;
        if ((((((uVar1 & 1) != 0) && (puVar4[1] == *param_1)) && (puVar4[2] == param_1[1])) &&
            ((puVar4[3] == param_1[2] && (-1 < (int)uVar1)))) && (puVar4 != puVar2)) {
          *puVar4 = uVar1 | 0x80000000;
          FUN_00dd5650(&DAT_016d1498);
        }
        puVar4 = puVar4 + 0xd;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puVar4 = puVar2;
      if ((DAT_01dd9ee8 != (uint *)0x0) && (DAT_01dd9ee8 != puVar2)) {
        FUN_00dd5650(&DAT_016d1458);
      }
    }
    DAT_01dd9ee8 = puVar4;
    return puVar2;
  }
  return (uint *)0x0;
}

// 00E80A30  FUN_00e80a30  size=370  [callgraph]
void __fastcall FUN_00e80a30(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  FUN_00e7d0e0();
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00e79970(param_1 + 0x3c,param_1 + 0x2c);
  }
  else {
    FUN_00e70d10(param_1 + 0x3c);
  }
  FUN_00e7d250();
  FUN_00e70c30();
  uVar1 = *(uint *)(param_1 + 0x28);
  if (((-1 < (char)uVar1) && ((uVar1 & 0x20000) == 0)) || ((uVar1 & 0x2000) != 0)) {
    FUN_00e808b0();
    FUN_00e78250();
    FUN_00e7ded0();
    FUN_00e7bbb0();
    FUN_00e7cdd0();
    FUN_00e803a0();
    FUN_00e76030();
    FUN_00e80590();
    FUN_00e7fb30();
    FUN_00e7c560();
    FUN_00e7c7d0();
    FUN_00e7e9c0();
    FUN_00e7cd10();
    FUN_00e7d370();
    FUN_00e7d3c0();
    FUN_00e78640();
    FUN_00e7d500();
    if ((*(uint *)(*(int *)(param_1 + 0x1a14) + 0x28) & 0x8000000) != 0) {
      FUN_00dda360(0,0,0,0);
      *(undefined4 *)(param_1 + 0x1a1c) = 0;
    }
    FUN_00e7a150();
    FUN_00e710f0();
    FUN_00931d70(param_1 + 0x1a70);
  }
  return;
}

// 00E80BB0  FUN_00e80bb0  size=47  [callgraph]
void __fastcall FUN_00e80bb0(int param_1)

{
  Event::ActorWork::updateAttach_3();
  Event::ActorWork::updateAttach_2();
  FUN_00e80660();
  *(undefined4 *)(param_1 + 0x1a6c) = *(undefined4 *)(param_1 + 0x1a68);
  return;
}

// 00E80BE0  FUN_00e80be0  size=94  [callgraph]
undefined4 FUN_00e80be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)Event::Manager::activateWork_2(param_1,param_2,param_3,param_4);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  *puVar1 = *puVar1 | 2;
  if (puVar1[5] == 0) {
    puVar1[5] = 1;
    puVar1[6] = 0;
    FUN_00e67bc0();
  }
  else if (puVar1[5] == 5) {
    FUN_00dd5650(&DAT_016cf1d8);
    return 1;
  }
  return 1;
}

// 00E80C40  FUN_00e80c40  size=106  [callgraph]
undefined4 FUN_00e80c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)Event::Manager::activateWork_2(param_1,param_2,param_3,param_4);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  *puVar1 = *puVar1 | 2;
  if (puVar1[5] == 0) {
    puVar1[5] = 1;
    puVar1[6] = 0;
    FUN_00e67bc0();
  }
  else if (puVar1[5] == 5) {
    FUN_00dd5650(&DAT_016cf1d8);
    *puVar1 = *puVar1 | 4;
    return 1;
  }
  *puVar1 = *puVar1 | 4;
  return 1;
}

// 00E80CE0  FUN_00e80ce0  size=20  [callgraph]
void FUN_00e80ce0(undefined4 param_1)

{
  FUN_00e80be0(param_1,0,0,0);
  return;
}

// 00E80D00  FUN_00e80d00  size=20  [callgraph]
void FUN_00e80d00(undefined4 param_1)

{
  FUN_00e80c40(param_1,0,0,0);
  return;
}

// 00E80D20  FUN_00e80d20  size=23  [callgraph]
void FUN_00e80d20(undefined4 param_1)

{
  FUN_00e80be0(param_1,0x40000000,0,0);
  return;
}

// 00E80D40  FUN_00e80d40  size=23  [callgraph]
void FUN_00e80d40(undefined4 param_1)

{
  FUN_00e80c40(param_1,0x40000000,0,0);
  return;
}

// 00E80D80  FUN_00e80d80  size=165  [callgraph]
undefined4 FUN_00e80d80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_1;
  local_8 = param_2;
  if (param_1 == 1) {
    local_4 = FUN_00932710();
  }
  else if (param_1 == 2) {
    local_4 = FUN_00932720();
  }
  else {
    local_4 = 0xffffffff;
  }
  puVar1 = (uint *)Event::Manager::activateWork_2(&local_c,0x80000000,param_3,param_4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *puVar1 | 2;
    if (puVar1[5] == 0) {
      puVar1[5] = 1;
      puVar1[6] = 0;
      FUN_00e67bc0();
    }
    else if (puVar1[5] == 5) {
      FUN_00dd5650(&DAT_016cf1d8);
      *puVar1 = *puVar1 | 4;
      return 1;
    }
    *puVar1 = *puVar1 | 4;
    return 1;
  }
  return 0;
}

// 00E80EC0  FUN_00e80ec0  size=89  [callgraph]
void FUN_00e80ec0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((((*(uint *)((int)&DAT_01dda500 + uVar2) & 1) != 0) &&
        (-1 < (int)*(uint *)((int)&DAT_01dda500 + uVar2))) &&
       (*(int *)((int)&DAT_01dda514 + uVar2) == 3)) {
      iVar1 = *(int *)((int)&DAT_01dda524 + uVar2);
      Event::ActorWork::updateAttach_3();
      Event::ActorWork::updateAttach_2();
      FUN_00e80660();
      *(undefined4 *)(iVar1 + 0x1a6c) = *(undefined4 *)(iVar1 + 0x1a68);
    }
    uVar2 = uVar2 + 0x34;
  } while (uVar2 < 0x1a0);
  return;
}

// 00E80F20  FUN_00e80f20  size=383  [callgraph]
void __fastcall FUN_00e80f20(int param_1)

{
  int iVar1;
  
  FUN_00931de0(param_1 + 0x1a70,*(uint *)(param_1 + 0x28) >> 0xd & 1);
  if (*(int *)(param_1 + 0x1a1c) != 0) {
    FUN_00dda360(0,0,0,0);
    *(undefined4 *)(param_1 + 0x1a1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x1a18) = 0;
  *(undefined4 *)(param_1 + 0x1a14) = 0;
  *(undefined4 *)(param_1 + 0x19fc) = 0;
  *(undefined4 *)(param_1 + 0x19f8) = 0;
  *(undefined4 *)(param_1 + 0x19f4) = 0;
  *(undefined4 *)(param_1 + 0x19f0) = 0;
  *(undefined4 *)(param_1 + 0x19ec) = 0;
  *(undefined4 *)(param_1 + 0x19e8) = 0;
  *(undefined4 *)(param_1 + 0x19e4) = 0;
  *(undefined4 *)(param_1 + 0x19e0) = 0;
  *(undefined4 *)(param_1 + 0x19dc) = 0;
  *(undefined4 *)(param_1 + 0x19d8) = 0;
  FUN_00e791c0();
  FUN_00e75560();
  FUN_00e747a0();
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x148),0);
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  if (0 < iVar1) {
    do {
      FUN_00e741d0();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x98),0);
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_00e78200();
  FUN_00e753a0();
  FUN_00931e60(0);
  if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
    FUN_00e80c40(param_1 + 0x58,0,0,0);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffeffff;
  }
  Event::EnvManager::endGraphicMode();
  FUN_00e6c8e0();
  return;
}

// 00E810D0  thunk_FUN_00e80ec0  size=5  [callgraph]
void thunk_FUN_00e80ec0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((((*(uint *)((int)&DAT_01dda500 + uVar2) & 1) != 0) &&
        (-1 < (int)*(uint *)((int)&DAT_01dda500 + uVar2))) &&
       (*(int *)((int)&DAT_01dda514 + uVar2) == 3)) {
      iVar1 = *(int *)((int)&DAT_01dda524 + uVar2);
      Event::ActorWork::updateAttach_3();
      Event::ActorWork::updateAttach_2();
      FUN_00e80660();
      *(undefined4 *)(iVar1 + 0x1a6c) = *(undefined4 *)(iVar1 + 0x1a68);
    }
    uVar2 = uVar2 + 0x34;
  } while (uVar2 < 0x1a0);
  return;
}

// 00E810E0  FUN_00e810e0  size=48  [callgraph]
void __fastcall FUN_00e810e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    FUN_00e80f20();
    if (iVar1 != 0) {
      FUN_00e7b870();
      FUN_00dd4920(iVar1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

// 00E81110  FUN_00e81110  size=98  [callgraph]
int FUN_00e81110(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00dd3500(0x1a90,&DAT_01b7bd48);
  if (iVar1 != 0) {
    iVar1 = FUN_00e7b760();
    if (iVar1 != 0) {
      iVar2 = FUN_00e7dd30(param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        return iVar1;
      }
      FUN_00e80f20();
      FUN_00e7b870();
      FUN_00dd4920(iVar1);
    }
  }
  return 0;
}

// 00E81180  FUN_00e81180  size=99  [callgraph]
void __fastcall FUN_00e81180(undefined4 *param_1)

{
  int iVar1;
  
  Event::Manager::activateWork(param_1);
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  iVar1 = param_1[9];
  if (iVar1 != 0) {
    FUN_00e80f20();
    if (iVar1 != 0) {
      FUN_00e7b870();
      FUN_00dd4920(iVar1);
    }
    param_1[9] = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0xffffffff;
  return;
}

// 00E811F0  FUN_00e811f0  size=106  [callgraph]
undefined4 __fastcall FUN_00e811f0(byte *param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    return 0;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))();
    if (iVar1 != 0) {
      return 0;
    }
  }
  if ((*param_1 & 2) == 0) {
    FUN_00e81180();
    return 0;
  }
  param_1[0x14] = 1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return 1;
}

// 00E81260  FUN_00e81260  size=134  [callgraph]
undefined4 __fastcall FUN_00e81260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    iVar3 = FUN_00e81110(param_1 + 4,*(undefined4 *)(param_1 + 0x10),uVar2,
                         *(undefined4 *)(param_1 + 0x2c));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x24) = iVar3;
      iVar1 = *(int *)(param_1 + 0x30);
      if (((iVar1 < *(int *)(*(int *)(iVar3 + 0x20) + 0x18)) && (*(int *)(iVar3 + 100) != iVar1)) &&
         (*(int *)(iVar3 + 100) = iVar1, -1 < iVar1)) {
        if (iVar1 < *(int *)(*(int *)(iVar3 + 0x20) + 0x18)) {
          *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 0x10000000;
          *(int *)(iVar3 + 0x44) = iVar1;
          *(undefined4 *)(iVar3 + 0x48) = 0;
          return 1;
        }
        FUN_00dd5650(&DAT_016d022c);
      }
      return 1;
    }
  }
  else {
    FUN_00dd5650(&DAT_016d14e4);
  }
  return 0;
}

// 00E813D0  FUN_00e813d0  size=128  [callgraph]
undefined4 __fastcall FUN_00e813d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = FUN_00e81260();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 5;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return 0;
    }
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  FUN_00e80a30();
  iVar1 = *(int *)(param_1 + 0x24);
  if ((-1 < (char)*(uint *)(iVar1 + 0x28)) && ((*(uint *)(iVar1 + 0x28) & 0x20000) == 0)) {
    return 0;
  }
  if (iVar1 != 0) {
    FUN_00e80f20();
    if (iVar1 != 0) {
      FUN_00e7b870();
      FUN_00dd4920(iVar1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 4;
  *(undefined4 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}

// 00E81490  FUN_00e81490  size=205  [callgraph]
void FUN_00e81490(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar3 = DAT_018d0404;
  puVar4 = PTR_DAT_018d0400;
  puVar5 = (undefined4 *)PTR_DAT_018d0400;
  if (PTR_DAT_018d0400 != PTR_DAT_018d0400 + DAT_018d0404 * 4) {
    do {
      puVar1 = (uint *)*puVar5;
      if ((*puVar1 & 0x80000000) == 0) {
        if (puVar1[5] == 1) {
          FUN_00e67bc0();
          uVar3 = DAT_018d0404;
          puVar4 = PTR_DAT_018d0400;
        }
        else if (puVar1[5] == 4) {
          FUN_00e811f0();
          uVar3 = DAT_018d0404;
          puVar4 = PTR_DAT_018d0400;
        }
        if ((*puVar1 & 1) == 0) {
          puVar6 = (undefined4 *)(puVar4 + uVar3 * 4);
          if ((((puVar5 != puVar6) && (puVar4 != (undefined *)0x0)) && (uVar3 != 0)) &&
             ((uint)((int)puVar5 - (int)puVar4 >> 2) < uVar3)) {
            for (puVar2 = puVar5; puVar2 != puVar6 + -1; puVar2 = puVar2 + 1) {
              *puVar2 = puVar2[1];
              uVar3 = DAT_018d0404;
              puVar4 = PTR_DAT_018d0400;
            }
            uVar3 = uVar3 - 1;
            puVar6 = puVar5;
            DAT_018d0404 = uVar3;
          }
        }
        else {
          puVar6 = puVar5 + 1;
        }
      }
      else {
        puVar6 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)(puVar4 + uVar3 * 4));
  }
  if ((DAT_01dd9ee8 != (byte *)0x0) && ((*DAT_01dd9ee8 & 1) == 0)) {
    DAT_01dd9ee8 = (byte *)0x0;
  }
  return;
}

// 00E81560  FUN_00e81560  size=74  [callgraph]
void __fastcall FUN_00e81560(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  do {
    switch(param_1[5]) {
    default:
      goto switchD_00e8156e_caseD_0;
    case 2:
      uVar1 = *param_1;
      if ((uVar1 & 2) == 0) {
        param_1[5] = 4;
        param_1[6] = 0;
      }
      else {
        if ((uVar1 & 4) == 0) {
          return;
        }
        *param_1 = uVar1 & 0xfffffffd;
        param_1[5] = 3;
        param_1[6] = 0;
      }
      break;
    case 3:
      iVar2 = FUN_00e813d0();
      if (iVar2 == 0) {
switchD_00e8156e_caseD_0:
        return;
      }
    }
  } while( true );
}

// 00E815D0  thunk_FUN_00e81490  size=5  [callgraph]
void thunk_FUN_00e81490(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar3 = DAT_018d0404;
  puVar4 = PTR_DAT_018d0400;
  puVar5 = (undefined4 *)PTR_DAT_018d0400;
  if (PTR_DAT_018d0400 != PTR_DAT_018d0400 + DAT_018d0404 * 4) {
    do {
      puVar1 = (uint *)*puVar5;
      if ((*puVar1 & 0x80000000) == 0) {
        if (puVar1[5] == 1) {
          FUN_00e67bc0();
          uVar3 = DAT_018d0404;
          puVar4 = PTR_DAT_018d0400;
        }
        else if (puVar1[5] == 4) {
          FUN_00e811f0();
          uVar3 = DAT_018d0404;
          puVar4 = PTR_DAT_018d0400;
        }
        if ((*puVar1 & 1) == 0) {
          puVar6 = (undefined4 *)(puVar4 + uVar3 * 4);
          if ((((puVar5 != puVar6) && (puVar4 != (undefined *)0x0)) && (uVar3 != 0)) &&
             ((uint)((int)puVar5 - (int)puVar4 >> 2) < uVar3)) {
            for (puVar2 = puVar5; puVar2 != puVar6 + -1; puVar2 = puVar2 + 1) {
              *puVar2 = puVar2[1];
              uVar3 = DAT_018d0404;
              puVar4 = PTR_DAT_018d0400;
            }
            uVar3 = uVar3 - 1;
            puVar6 = puVar5;
            DAT_018d0404 = uVar3;
          }
        }
        else {
          puVar6 = puVar5 + 1;
        }
      }
      else {
        puVar6 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)(puVar4 + uVar3 * 4));
  }
  if ((DAT_01dd9ee8 != (byte *)0x0) && ((*DAT_01dd9ee8 & 1) == 0)) {
    DAT_01dd9ee8 = (byte *)0x0;
  }
  return;
}

// 00E815E0  FUN_00e815e0  size=140  [callgraph]
void FUN_00e815e0(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int local_4;
  
  puVar3 = &DAT_01dda500;
  local_4 = 8;
  while (((*puVar3 & 1) == 0 || ((int)*puVar3 < 0))) {
switchD_00e81618_caseD_0:
    puVar3 = puVar3 + 0xd;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      if ((DAT_01dd9ee8 != (byte *)0x0) && ((*DAT_01dd9ee8 & 1) == 0)) {
        DAT_01dd9ee8 = (byte *)0x0;
      }
      return;
    }
  }
LAB_00e81610:
  switch(puVar3[5]) {
  default:
    goto switchD_00e81618_caseD_0;
  case 2:
    uVar1 = *puVar3;
    if ((uVar1 & 2) == 0) {
      puVar3[5] = 4;
      puVar3[6] = 0;
    }
    else {
      if ((uVar1 & 4) == 0) goto switchD_00e81618_caseD_0;
      *puVar3 = uVar1 & 0xfffffffd;
      puVar3[5] = 3;
      puVar3[6] = 0;
    }
    goto LAB_00e81610;
  case 3:
    break;
  }
  iVar2 = FUN_00e813d0();
  if (iVar2 == 0) goto switchD_00e81618_caseD_0;
  goto LAB_00e81610;
}

// 00E81690  FUN_00e81690  size=10  [callgraph]
void FUN_00e81690(void)

{
  FUN_00e815e0();
  FUN_00e7d760();
  return;
}

// 00E816A0  FUN_00e816a0  size=77  [callgraph]
void FUN_00e816a0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    if ((*(byte *)((int)&DAT_01dda500 + uVar1) & 1) != 0) {
      DAT_01dd9ee0 = 0;
      FUN_00e72350();
      FUN_00e6c030();
      iVar2 = FUN_00e71c40();
      while (iVar2 == 0) {
        FUN_00e815e0();
        FUN_00e7d760();
        FUN_00e81490();
        iVar2 = FUN_00e71c40();
      }
      return;
    }
    uVar1 = uVar1 + 0x34;
  } while (uVar1 < 0x1a0);
  return;
}

// 00E84100  Event::SeqDataHolder::vf00  size=31  [class]
undefined4 * __thiscall Event::SeqDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = DataHolderBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E84120  FUN_00e84120  size=91  [between]
void __thiscall FUN_00e84120(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  return;
}

// 00E84190  FUN_00e84190  size=104  [between]
void FUN_00e84190(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char local_20 [28];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_20;
  _sprintf_s(local_20,0x1c,"camera_%02d_%03d.mot",param_1,param_2);
  iVar1 = FUN_00de45a0(local_20);
  if (iVar1 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_20);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_20);
  return;
}

// 00E84210  FUN_00e84210  size=79  [between]
undefined4 FUN_00e84210(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00e356a0(param_1);
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00e3fa90(uVar2,param_1,param_2);
  return uVar2;
}

// 00E843B0  FUN_00e843b0  size=30  [between]
undefined4 * __fastcall FUN_00e843b0(undefined4 *param_1)

{
  *param_1 = 3;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  cEspControler::cEspControler();
  return param_1;
}

// 00E843D0  FUN_00e843d0  size=201  [between]
undefined4 __fastcall FUN_00e843d0(float *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 local_8;
  
  local_8 = (undefined1)(int)ROUND(*param_1 * 255.0);
  uVar1 = local_8;
  local_8 = (undefined1)(int)ROUND(param_1[1] * 255.0);
  uVar2 = local_8;
  local_8 = (undefined1)(int)ROUND(param_1[2] * 255.0);
  uVar3 = local_8;
  local_8 = (undefined1)(int)ROUND(param_1[3] * 255.0);
  return CONCAT31(CONCAT21(CONCAT11(local_8,uVar1),uVar2),uVar3);
}

// 00E844A0  Event::DataHolderBase::vf00  size=31  [class]
undefined4 * __thiscall Event::DataHolderBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E88DB0  Event::StateDataHolder::vf00  size=60  [class]
undefined4 * __thiscall Event::StateDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = DataHolderBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E88E60  Event::SeqDataHolderType<Event::CameraSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::CameraSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E88EF0  Event::SeqDataHolderType<Event::CameraSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::CameraSeq>::vf34(void)

{
  return PTR_s_CameraSeq_018d0274;
}

// 00E88F00  Event::SeqDataHolderType<Event::CameraSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::CameraSeq>::vf5C(void)

{
  return 0;
}

// 00E88F10  Event::SeqDataHolderType<Event::CameraSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::CameraSeq>::vf64(void)

{
  return 0;
}

// 00E88F20  Event::SeqDataHolderType<Event::CameraSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::CameraSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E88F30  Event::SeqDataHolderType<Event::CameraSeq>::vf30  size=13  [class]
int __thiscall Event::SeqDataHolderType<Event::CameraSeq>::vf30(int param_1,int param_2)

{
  return param_2 * 0x7c + *(int *)(param_1 + 0x14);
}

// 00E88F40  Event::SeqDataHolderType<Event::CameraSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::CameraSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x1f;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E88F90  Event::SeqDataHolderType<Event::CameraSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::CameraSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x3e;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E88FD0  Event::SeqDataHolderType<Event::CameraSeq>::vf40  size=13  [class]
int __thiscall Event::SeqDataHolderType<Event::CameraSeq>::vf40(int param_1,int param_2)

{
  return param_2 * 0x7c + *(int *)(param_1 + 0x14);
}

// 00E88FF0  FUN_00e88ff0  size=289  [between]
int __thiscall FUN_00e88ff0(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_94;
  undefined4 auStack_88 [33];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_a4 = iVar4;
    do {
      while( true ) {
        local_94 = 0;
        local_a0 = 0;
        if (iVar4 < iVar1) {
          puVar5 = puVar2 + iVar4 * 0x1f;
          puVar7 = puVar2;
          local_9c = iVar4;
          do {
            iVar3 = (*param_2)(puVar7,puVar5);
            if (0 < iVar3) {
              local_94 = local_94 + 1;
              puVar6 = puVar7;
              puVar8 = auStack_88;
              for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar6 = puVar5;
              puVar8 = puVar7;
              for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar6 = auStack_88;
              puVar8 = puVar5;
              for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_a4;
              if (param_3 == local_a0) {
                param_3 = local_9c;
              }
              else if (param_3 == local_9c) {
                param_3 = local_a0;
              }
            }
            local_a0 = local_a0 + 1;
            local_9c = local_9c + 1;
            puVar7 = puVar7 + 0x1f;
            puVar5 = puVar5 + 0x1f;
          } while (local_9c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_a4 = iVar4;
      }
    } while (local_94 != 0);
  }
  return param_3;
}

// 00E89120  FUN_00e89120  size=83  [between]
int __thiscall FUN_00e89120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x7c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0x1f;
        for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x7c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E89180  Event::SeqDataHolderType<Event::CameraSeq>::vf50  size=66  [class]
void __fastcall Event::SeqDataHolderType<Event::CameraSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(iVar2 * 0x7c + 0x10 + param_1[5]) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E891D0  Event::SeqDataHolderType<Event::CameraSeq>::vf54  size=95  [class]
void __thiscall Event::SeqDataHolderType<Event::CameraSeq>::vf54(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 0x7c + *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar3 = (int)*(short *)(iVar2 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar1 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar1 != (int *)0x0)
        ) && (iVar3 = *piVar1, iVar3 != 0)) {
      if (*(short *)(iVar2 + 0xc) < 0) {
        *(undefined2 *)(iVar2 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar2 + 0xc)) {
        *(short *)(iVar2 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e88ff0(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E89230  Event::SeqDataHolderType<Event::CameraSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::CameraSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x7c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e88ff0(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E892B0  Event::SeqDataHolderType<Event::CameraSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::CameraSeq>::vf14(void)

{
  return 2;
}

// 00E892C0  Event::SeqDataHolderType<Event::CameraSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::CameraSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8932f;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8932f:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0x1f;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_CameraSeq_018d0274;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e89408;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e89408:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e894d8;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8960c;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e894d8:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8960c:
      puVar9 = puVar9 + 0x1f;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E89630  Event::SeqDataHolderType<Event::CameraSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::CameraSeq>::vf4C(void)

{
  FUN_00e89120();
  return;
}

// 00E89640  Event::SeqDataHolderType<Event::CameraSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::CameraSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E89690  Event::SeqDataHolderType<Event::CameraSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::CameraSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_CameraSeq_018d0274);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E89740  Event::DataHolderBase::DataHolderBase_7  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_7(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::CameraSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E897C0  FUN_00e897c0  size=130  [between]
void __fastcall FUN_00e897c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_CameraSeq_018d0274);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_94(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E89850  Event::SeqDataHolderType<Event::ActorSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::ActorSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E898D0  Event::SeqDataHolderType<Event::ActorSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::ActorSeq>::vf34(void)

{
  return PTR_s_ActorSeq_018d026c;
}

// 00E898E0  Event::SeqDataHolderType<Event::ActorSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ActorSeq>::vf5C(void)

{
  return 0;
}

// 00E898F0  Event::SeqDataHolderType<Event::ActorSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ActorSeq>::vf64(void)

{
  return 0;
}

// 00E89960  Event::SeqDataHolderType<Event::ActorSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::ActorSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E89970  Event::SeqDataHolderType<Event::ActorSeq>::vf30  size=22  [class]
int __thiscall Event::SeqDataHolderType<Event::ActorSeq>::vf30(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x1c;
}

// 00E89990  Event::SeqDataHolderType<Event::ActorSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ActorSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 7;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E899E0  Event::SeqDataHolderType<Event::ActorSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::ActorSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0xe;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E89A20  Event::SeqDataHolderType<Event::ActorSeq>::vf40  size=22  [class]
int __thiscall Event::SeqDataHolderType<Event::ActorSeq>::vf40(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x1c;
}

// 00E89A70  FUN_00e89a70  size=278  [between]
int __thiscall FUN_00e89a70(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 auStack_1c [7];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_34 = iVar4;
    do {
      while( true ) {
        local_28 = 0;
        local_30 = 0;
        if (iVar4 < iVar1) {
          puVar6 = puVar2 + iVar4 * 7;
          puVar5 = puVar2;
          local_2c = iVar4;
          do {
            iVar3 = (*param_2)(puVar5,puVar6);
            if (0 < iVar3) {
              local_28 = local_28 + 1;
              puVar7 = puVar5;
              puVar8 = auStack_1c;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6;
              puVar8 = puVar5;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_1c;
              puVar8 = puVar6;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_34;
              if (param_3 == local_30) {
                param_3 = local_2c;
              }
              else if (param_3 == local_2c) {
                param_3 = local_30;
              }
            }
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            puVar5 = puVar5 + 7;
            puVar6 = puVar6 + 7;
          } while (local_2c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_34 = iVar4;
      }
    } while (local_28 != 0);
  }
  return param_3;
}

// 00E89B90  FUN_00e89b90  size=88  [between]
int __thiscall FUN_00e89b90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x1c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 7;
        for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x1c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E89BF0  Event::SeqDataHolderType<Event::ActorSeq>::vf50  size=70  [class]
void __fastcall Event::SeqDataHolderType<Event::ActorSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(param_1[5] + 0x10 + iVar2 * 0x1c) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E89C40  Event::SeqDataHolderType<Event::ActorSeq>::vf54  size=104  [class]
void __thiscall Event::SeqDataHolderType<Event::ActorSeq>::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x1c;
  if (iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar2 != (int *)0x0)
        ) && (iVar3 = *piVar2, iVar3 != 0)) {
      if (*(short *)(iVar1 + 0xc) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar1 + 0xc)) {
        *(short *)(iVar1 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e89a70(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E89CB0  Event::SeqDataHolderType<Event::ActorSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::ActorSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e89a70(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E89D30  Event::SeqDataHolderType<Event::ActorSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::ActorSeq>::vf14(void)

{
  return 2;
}

// 00E89D40  Event::SeqDataHolderType<Event::ActorSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::ActorSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e89daf;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e89daf:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 7;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_ActorSeq_018d026c;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e89e88;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e89e88:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e89f58;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8a08c;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e89f58:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8a08c:
      puVar9 = puVar9 + 7;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8A0B0  Event::SeqDataHolderType<Event::ActorSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::ActorSeq>::vf4C(void)

{
  FUN_00e89b90();
  return;
}

// 00E8A0C0  Event::SeqDataHolderType<Event::ActorSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::ActorSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8A110  Event::SeqDataHolderType<Event::ActorSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::ActorSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_ActorSeq_018d026c);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8A1C0  Event::DataHolderBase::DataHolderBase_6  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_6(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::ActorSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8A240  FUN_00e8a240  size=130  [between]
void __fastcall FUN_00e8a240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_ActorSeq_018d026c);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_96(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8A2D0  Event::SeqDataHolderType<Event::ControlSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::ControlSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8A350  Event::SeqDataHolderType<Event::ControlSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::ControlSeq>::vf34(void)

{
  return PTR_s_ControlSeq_018d0278;
}

// 00E8A360  Event::SeqDataHolderType<Event::ControlSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ControlSeq>::vf5C(void)

{
  return 0;
}

// 00E8A370  Event::SeqDataHolderType<Event::ControlSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ControlSeq>::vf64(void)

{
  return 0;
}

// 00E8A3B0  Event::SeqDataHolderType<Event::ControlSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::ControlSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8A3C0  Event::SeqDataHolderType<Event::ControlSeq>::vf30  size=16  [class]
int __thiscall Event::SeqDataHolderType<Event::ControlSeq>::vf30(int param_1,int param_2)

{
  return param_2 * 0xc0 + *(int *)(param_1 + 0x14);
}

// 00E8A3D0  Event::SeqDataHolderType<Event::ControlSeq>::vf38  size=69  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ControlSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x30;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8A420  Event::SeqDataHolderType<Event::ControlSeq>::vf3C  size=67  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::ControlSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x60;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8A470  Event::SeqDataHolderType<Event::ControlSeq>::vf40  size=16  [class]
int __thiscall Event::SeqDataHolderType<Event::ControlSeq>::vf40(int param_1,int param_2)

{
  return param_2 * 0xc0 + *(int *)(param_1 + 0x14);
}

// 00E8A490  FUN_00e8a490  size=300  [between]
int __thiscall FUN_00e8a490(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d4;
  undefined4 auStack_c8 [49];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_e4 = iVar4;
    do {
      while( true ) {
        local_d4 = 0;
        local_e0 = 0;
        if (iVar4 < iVar1) {
          puVar5 = puVar2 + iVar4 * 0x30;
          puVar7 = puVar2;
          local_dc = iVar4;
          do {
            iVar3 = (*param_2)(puVar7,puVar5);
            if (0 < iVar3) {
              local_d4 = local_d4 + 1;
              puVar6 = puVar7;
              puVar8 = auStack_c8;
              for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar6 = puVar5;
              puVar8 = puVar7;
              for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar6 = auStack_c8;
              puVar8 = puVar5;
              for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_e4;
              if (param_3 == local_e0) {
                param_3 = local_dc;
              }
              else if (param_3 == local_dc) {
                param_3 = local_e0;
              }
            }
            local_e0 = local_e0 + 1;
            local_dc = local_dc + 1;
            puVar7 = puVar7 + 0x30;
            puVar5 = puVar5 + 0x30;
          } while (local_dc < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_e4 = iVar4;
      }
    } while (local_d4 != 0);
  }
  return param_3;
}

// 00E8A5C0  FUN_00e8a5c0  size=89  [between]
int __thiscall FUN_00e8a5c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0xc0;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0x30;
        for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0xc0;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8A620  Event::SeqDataHolderType<Event::ControlSeq>::vf50  size=67  [class]
void __fastcall Event::SeqDataHolderType<Event::ControlSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(iVar2 * 0xc0 + 0x10 + param_1[5]) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8A670  Event::SeqDataHolderType<Event::ControlSeq>::vf54  size=96  [class]
void __thiscall Event::SeqDataHolderType<Event::ControlSeq>::vf54(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 0xc0 + *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar3 = (int)*(short *)(iVar2 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar1 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar1 != (int *)0x0)
        ) && (iVar3 = *piVar1, iVar3 != 0)) {
      if (*(short *)(iVar2 + 0xc) < 0) {
        *(undefined2 *)(iVar2 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar2 + 0xc)) {
        *(short *)(iVar2 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8a490(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8A6D0  Event::SeqDataHolderType<Event::ControlSeq>::vf58  size=116  [class]
void __fastcall Event::SeqDataHolderType<Event::ControlSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0xc0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8a490(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8A750  Event::SeqDataHolderType<Event::ControlSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::ControlSeq>::vf14(void)

{
  return 2;
}

// 00E8A760  Event::SeqDataHolderType<Event::ControlSeq>::vf28  size=872  [class]
void __fastcall Event::SeqDataHolderType<Event::ControlSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8a7cf;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8a7cf:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0x30;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_ControlSeq_018d0278;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8a8ab;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8a8ab:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8a97b;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8aaaf;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8a97b:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8aaaf:
      puVar9 = puVar9 + 0x30;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8AAE0  Event::SeqDataHolderType<Event::ControlSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::ControlSeq>::vf4C(void)

{
  FUN_00e8a5c0();
  return;
}

// 00E8AAF0  Event::SeqDataHolderType<Event::ControlSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::ControlSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8AB40  Event::SeqDataHolderType<Event::ControlSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::ControlSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_ControlSeq_018d0278);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8ABF0  Event::DataHolderBase::DataHolderBase_5  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_5(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::ControlSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8AC70  Event::SeqDataHolderType<Event::MoveSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::MoveSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8AD00  Event::SeqDataHolderType<Event::MoveSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::MoveSeq>::vf34(void)

{
  return PTR_s_MoveSeq_018d0288;
}

// 00E8AD10  Event::SeqDataHolderType<Event::MoveSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::MoveSeq>::vf5C(void)

{
  return 0;
}

// 00E8AD20  Event::SeqDataHolderType<Event::MoveSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::MoveSeq>::vf64(void)

{
  return 0;
}

// 00E8AD70  FUN_00e8ad70  size=362  [between]
void __thiscall FUN_00e8ad70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)((int)param_2 + 0x1d);
  *(undefined1 *)((int)param_1 + 0x1e) = *(undefined1 *)((int)param_2 + 0x1e);
  *(undefined1 *)((int)param_1 + 0x1f) = *(undefined1 *)((int)param_2 + 0x1f);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)((int)param_2 + 0x21);
  *(undefined1 *)((int)param_1 + 0x22) = *(undefined1 *)((int)param_2 + 0x22);
  *(undefined1 *)((int)param_1 + 0x23) = *(undefined1 *)((int)param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)((int)param_1 + 0x25) = *(undefined1 *)((int)param_2 + 0x25);
  *(undefined1 *)((int)param_1 + 0x26) = *(undefined1 *)((int)param_2 + 0x26);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)((int)param_2 + 0x32);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0xd);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)((int)param_2 + 0x36);
  puVar2 = param_1 + 0xe;
  iVar1 = 0xc;
  do {
    *(undefined1 *)puVar2 = *(undefined1 *)(((int)param_2 - (int)param_1) + (int)puVar2);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((int)param_1 + 0x45) = *(undefined1 *)((int)param_2 + 0x45);
  *(undefined1 *)((int)param_1 + 0x46) = *(undefined1 *)((int)param_2 + 0x46);
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  return;
}

// 00E8AEE0  Event::SeqDataHolderType<Event::MoveSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::MoveSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8AEF0  Event::SeqDataHolderType<Event::MoveSeq>::vf30  size=16  [class]
int __thiscall Event::SeqDataHolderType<Event::MoveSeq>::vf30(int param_1,int param_2)

{
  return param_2 * 0x94 + *(int *)(param_1 + 0x14);
}

// 00E8AF00  Event::SeqDataHolderType<Event::MoveSeq>::vf38  size=69  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::MoveSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x25;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8AF50  Event::SeqDataHolderType<Event::MoveSeq>::vf3C  size=67  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::MoveSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x4a;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8AFA0  Event::SeqDataHolderType<Event::MoveSeq>::vf40  size=16  [class]
int __thiscall Event::SeqDataHolderType<Event::MoveSeq>::vf40(int param_1,int param_2)

{
  return param_2 * 0x94 + *(int *)(param_1 + 0x14);
}

// 00E8AFD0  FUN_00e8afd0  size=305  [between]
void __thiscall FUN_00e8afd0(int param_1,code *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  code *local_9c;
  undefined1 auStack_98 [148];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_ac;
  iVar3 = *(int *)(param_1 + 0x1c);
  local_9c = param_2;
  local_a4 = iVar3;
  if (1 < iVar3) {
    local_a0 = *(int *)(param_1 + 0x14);
    iVar2 = (iVar3 * 10) / 0xd;
    iVar6 = local_a0;
    local_a8 = iVar2;
    do {
      while( true ) {
        iVar4 = 0;
        local_ac = 0;
        iVar1 = iVar2;
        iVar7 = iVar6;
        if (iVar2 < iVar3) {
          iVar5 = iVar2 * 0x94 + iVar6;
          do {
            iVar1 = (*local_9c)(iVar6,iVar5);
            iVar3 = param_3;
            if (0 < iVar1) {
              FUN_00e82d60(iVar6);
              FUN_00e8ad70(iVar5);
              FUN_00e8ad70(auStack_98);
              local_ac = local_ac + 1;
              iVar3 = iVar2;
              if ((param_3 != iVar4) && (iVar3 = param_3, param_3 == iVar2)) {
                iVar3 = iVar4;
              }
            }
            param_3 = iVar3;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + 0x94;
            iVar5 = iVar5 + 0x94;
            iVar3 = local_a4;
            iVar1 = local_a8;
            iVar7 = local_a0;
          } while (iVar2 < local_a4);
        }
        iVar6 = iVar7;
        if (iVar1 == 1) break;
        iVar2 = (iVar1 * 10) / 0xd;
        local_a8 = iVar2;
      }
      iVar2 = iVar1;
    } while (local_ac != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&local_ac);
  return;
}

// 00E8B110  FUN_00e8b110  size=94  [between]
int __thiscall FUN_00e8b110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x94;
      iVar1 = param_2;
      do {
        FUN_00e8ad70(*(int *)(param_1 + 4) + iVar2 + 0x94);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x94;
      } while (iVar1 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar1 = -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      iVar1 = param_2;
    }
    return iVar1;
  }
  return -1;
}

// 00E8B180  Event::SeqDataHolderType<Event::MoveSeq>::vf50  size=69  [class]
void __fastcall Event::SeqDataHolderType<Event::MoveSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(iVar2 * 0x94 + 0x10 + param_1[5]) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8B1D0  Event::SeqDataHolderType<Event::MoveSeq>::vf54  size=98  [class]
void __thiscall Event::SeqDataHolderType<Event::MoveSeq>::vf54(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 0x94 + *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar3 = (int)*(short *)(iVar2 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar1 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar1 != (int *)0x0)
        ) && (iVar3 = *piVar1, iVar3 != 0)) {
      if (*(short *)(iVar2 + 0xc) < 0) {
        *(undefined2 *)(iVar2 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar2 + 0xc)) {
        *(short *)(iVar2 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8afd0(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8B240  Event::SeqDataHolderType<Event::MoveSeq>::vf58  size=116  [class]
void __fastcall Event::SeqDataHolderType<Event::MoveSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x94;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8afd0(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8B2C0  Event::SeqDataHolderType<Event::MoveSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::MoveSeq>::vf14(void)

{
  return 2;
}

// 00E8B2D0  Event::SeqDataHolderType<Event::MoveSeq>::vf28  size=872  [class]
void __fastcall Event::SeqDataHolderType<Event::MoveSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8b33f;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8b33f:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0x25;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_MoveSeq_018d0288;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8b41b;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8b41b:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8b4eb;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8b61f;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8b4eb:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8b61f:
      puVar9 = puVar9 + 0x25;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8B650  Event::SeqDataHolderType<Event::MoveSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::MoveSeq>::vf4C(void)

{
  FUN_00e8b110();
  return;
}

// 00E8B660  Event::SeqDataHolderType<Event::MoveSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::MoveSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8B6B0  Event::SeqDataHolderType<Event::MoveSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::MoveSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_MoveSeq_018d0288);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8B760  Event::DataHolderBase::DataHolderBase_4  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_4(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::MoveSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8B7E0  FUN_00e8b7e0  size=130  [between]
void __fastcall FUN_00e8b7e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_MoveSeq_018d0288);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_99(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8B870  Event::SeqDataHolderType<Event::EffectSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::EffectSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8B900  Event::SeqDataHolderType<Event::EffectSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::EffectSeq>::vf34(void)

{
  return PTR_s_EffectSeq_018d027c;
}

// 00E8B910  Event::SeqDataHolderType<Event::EffectSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::EffectSeq>::vf5C(void)

{
  return 0;
}

// 00E8B920  Event::SeqDataHolderType<Event::EffectSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::EffectSeq>::vf64(void)

{
  return 0;
}

// 00E8B970  Event::SeqDataHolderType<Event::EffectSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::EffectSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8B980  Event::SeqDataHolderType<Event::EffectSeq>::vf30  size=20  [class]
int __thiscall Event::SeqDataHolderType<Event::EffectSeq>::vf30(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x3c;
}

// 00E8B9A0  Event::SeqDataHolderType<Event::EffectSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::EffectSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xf;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8B9F0  Event::SeqDataHolderType<Event::EffectSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::EffectSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x1e;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8BA30  Event::SeqDataHolderType<Event::EffectSeq>::vf40  size=20  [class]
int __thiscall Event::SeqDataHolderType<Event::EffectSeq>::vf40(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x3c;
}

// 00E8BA70  FUN_00e8ba70  size=276  [between]
int __thiscall FUN_00e8ba70(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 auStack_3c [15];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_54 = iVar4;
    do {
      while( true ) {
        local_48 = 0;
        local_50 = 0;
        if (iVar4 < iVar1) {
          puVar6 = puVar2 + iVar4 * 0xf;
          puVar5 = puVar2;
          local_4c = iVar4;
          do {
            iVar3 = (*param_2)(puVar5,puVar6);
            if (0 < iVar3) {
              local_48 = local_48 + 1;
              puVar7 = puVar5;
              puVar8 = auStack_3c;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6;
              puVar8 = puVar5;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_3c;
              puVar8 = puVar6;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_54;
              if (param_3 == local_50) {
                param_3 = local_4c;
              }
              else if (param_3 == local_4c) {
                param_3 = local_50;
              }
            }
            local_50 = local_50 + 1;
            local_4c = local_4c + 1;
            puVar5 = puVar5 + 0xf;
            puVar6 = puVar6 + 0xf;
          } while (local_4c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_54 = iVar4;
      }
    } while (local_48 != 0);
  }
  return param_3;
}

// 00E8BB90  FUN_00e8bb90  size=86  [between]
int __thiscall FUN_00e8bb90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x3c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0xf;
        for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8BBF0  Event::SeqDataHolderType<Event::EffectSeq>::vf50  size=68  [class]
void __fastcall Event::SeqDataHolderType<Event::EffectSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(param_1[5] + 0x10 + iVar2 * 0x3c) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8BC40  Event::SeqDataHolderType<Event::EffectSeq>::vf54  size=102  [class]
void __thiscall Event::SeqDataHolderType<Event::EffectSeq>::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x3c;
  if (iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar2 != (int *)0x0)
        ) && (iVar3 = *piVar2, iVar3 != 0)) {
      if (*(short *)(iVar1 + 0xc) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar1 + 0xc)) {
        *(short *)(iVar1 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8ba70(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8BCB0  Event::SeqDataHolderType<Event::EffectSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::EffectSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x3c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8ba70(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8BD30  Event::SeqDataHolderType<Event::EffectSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::EffectSeq>::vf14(void)

{
  return 2;
}

// 00E8BD40  Event::SeqDataHolderType<Event::EffectSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::EffectSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8bdaf;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8bdaf:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0xf;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_EffectSeq_018d027c;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8be88;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8be88:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8bf58;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8c08c;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8bf58:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8c08c:
      puVar9 = puVar9 + 0xf;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8C0B0  Event::SeqDataHolderType<Event::EffectSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::EffectSeq>::vf4C(void)

{
  FUN_00e8bb90();
  return;
}

// 00E8C0C0  Event::SeqDataHolderType<Event::EffectSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::EffectSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8C110  Event::SeqDataHolderType<Event::EffectSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::EffectSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_EffectSeq_018d027c);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8C1C0  Event::DataHolderBase::DataHolderBase_14  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_14(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::EffectSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8C240  FUN_00e8c240  size=130  [between]
void __fastcall FUN_00e8c240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_EffectSeq_018d027c);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_91(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8C2D0  Event::SeqDataHolderType<Event::GraphicSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::GraphicSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8C350  Event::SeqDataHolderType<Event::GraphicSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::GraphicSeq>::vf34(void)

{
  return PTR_s_GraphicSeq_018d0280;
}

// 00E8C360  Event::SeqDataHolderType<Event::GraphicSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::GraphicSeq>::vf5C(void)

{
  return 0;
}

// 00E8C370  Event::SeqDataHolderType<Event::GraphicSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::GraphicSeq>::vf64(void)

{
  return 0;
}

// 00E8C3B0  Event::SeqDataHolderType<Event::GraphicSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::GraphicSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8C3C0  Event::SeqDataHolderType<Event::GraphicSeq>::vf30  size=22  [class]
int __thiscall Event::SeqDataHolderType<Event::GraphicSeq>::vf30(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x38;
}

// 00E8C3E0  Event::SeqDataHolderType<Event::GraphicSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::GraphicSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xe;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8C430  Event::SeqDataHolderType<Event::GraphicSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::GraphicSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x1c;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8C470  Event::SeqDataHolderType<Event::GraphicSeq>::vf40  size=22  [class]
int __thiscall Event::SeqDataHolderType<Event::GraphicSeq>::vf40(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x38;
}

// 00E8C4B0  FUN_00e8c4b0  size=278  [between]
int __thiscall FUN_00e8c4b0(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 auStack_38 [14];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_50 = iVar4;
    do {
      while( true ) {
        local_44 = 0;
        local_4c = 0;
        if (iVar4 < iVar1) {
          puVar6 = puVar2 + iVar4 * 0xe;
          puVar5 = puVar2;
          local_48 = iVar4;
          do {
            iVar3 = (*param_2)(puVar5,puVar6);
            if (0 < iVar3) {
              local_44 = local_44 + 1;
              puVar7 = puVar5;
              puVar8 = auStack_38;
              for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6;
              puVar8 = puVar5;
              for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_38;
              puVar8 = puVar6;
              for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_50;
              if (param_3 == local_4c) {
                param_3 = local_48;
              }
              else if (param_3 == local_48) {
                param_3 = local_4c;
              }
            }
            local_4c = local_4c + 1;
            local_48 = local_48 + 1;
            puVar5 = puVar5 + 0xe;
            puVar6 = puVar6 + 0xe;
          } while (local_48 < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_50 = iVar4;
      }
    } while (local_44 != 0);
  }
  return param_3;
}

// 00E8C5D0  FUN_00e8c5d0  size=90  [between]
int __thiscall FUN_00e8c5d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x38;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0xe;
        for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x38;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8C630  Event::SeqDataHolderType<Event::GraphicSeq>::vf50  size=70  [class]
void __fastcall Event::SeqDataHolderType<Event::GraphicSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(param_1[5] + 0x10 + iVar2 * 0x38) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8C680  Event::SeqDataHolderType<Event::GraphicSeq>::vf54  size=104  [class]
void __thiscall Event::SeqDataHolderType<Event::GraphicSeq>::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x38;
  if (iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar2 != (int *)0x0)
        ) && (iVar3 = *piVar2, iVar3 != 0)) {
      if (*(short *)(iVar1 + 0xc) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar1 + 0xc)) {
        *(short *)(iVar1 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8c4b0(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8C6F0  Event::SeqDataHolderType<Event::GraphicSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::GraphicSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8c4b0(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8C770  Event::SeqDataHolderType<Event::GraphicSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::GraphicSeq>::vf14(void)

{
  return 2;
}

// 00E8C780  Event::SeqDataHolderType<Event::GraphicSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::GraphicSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8c7ef;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8c7ef:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0xe;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_GraphicSeq_018d0280;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8c8c8;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8c8c8:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8c998;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8cacc;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8c998:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8cacc:
      puVar9 = puVar9 + 0xe;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8CAF0  Event::SeqDataHolderType<Event::GraphicSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::GraphicSeq>::vf4C(void)

{
  FUN_00e8c5d0();
  return;
}

// 00E8CB00  Event::SeqDataHolderType<Event::GraphicSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::GraphicSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8CB50  Event::SeqDataHolderType<Event::GraphicSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::GraphicSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_GraphicSeq_018d0280);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8CC00  Event::DataHolderBase::DataHolderBase_13  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_13(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::GraphicSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8CC80  FUN_00e8cc80  size=130  [between]
void __fastcall FUN_00e8cc80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_GraphicSeq_018d0280);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_92(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8CD10  Event::SeqDataHolderType<Event::ModelControlSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::ModelControlSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8CDA0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::ModelControlSeq>::vf34(void)

{
  return PTR_s_ModelControlSeq_018d0284;
}

// 00E8CDB0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ModelControlSeq>::vf5C(void)

{
  return 0;
}

// 00E8CDC0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ModelControlSeq>::vf64(void)

{
  return 0;
}

// 00E8CE20  Event::SeqDataHolderType<Event::ModelControlSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::ModelControlSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8CE30  Event::SeqDataHolderType<Event::ModelControlSeq>::vf30  size=20  [class]
int __thiscall Event::SeqDataHolderType<Event::ModelControlSeq>::vf30(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x3c;
}

// 00E8CE50  Event::SeqDataHolderType<Event::ModelControlSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ModelControlSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xf;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8CEA0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf3C  size=64  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ModelControlSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x1e;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8CEE0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf40  size=20  [class]
int __thiscall Event::SeqDataHolderType<Event::ModelControlSeq>::vf40(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x3c;
}

// 00E8CF30  FUN_00e8cf30  size=276  [between]
int __thiscall FUN_00e8cf30(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 auStack_3c [15];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_54 = iVar4;
    do {
      while( true ) {
        local_48 = 0;
        local_50 = 0;
        if (iVar4 < iVar1) {
          puVar6 = puVar2 + iVar4 * 0xf;
          puVar5 = puVar2;
          local_4c = iVar4;
          do {
            iVar3 = (*param_2)(puVar5,puVar6);
            if (0 < iVar3) {
              local_48 = local_48 + 1;
              puVar7 = puVar5;
              puVar8 = auStack_3c;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6;
              puVar8 = puVar5;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_3c;
              puVar8 = puVar6;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_54;
              if (param_3 == local_50) {
                param_3 = local_4c;
              }
              else if (param_3 == local_4c) {
                param_3 = local_50;
              }
            }
            local_50 = local_50 + 1;
            local_4c = local_4c + 1;
            puVar5 = puVar5 + 0xf;
            puVar6 = puVar6 + 0xf;
          } while (local_4c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_54 = iVar4;
      }
    } while (local_48 != 0);
  }
  return param_3;
}

// 00E8D050  FUN_00e8d050  size=86  [between]
int __thiscall FUN_00e8d050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x3c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0xf;
        for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8D0B0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf50  size=68  [class]
void __fastcall Event::SeqDataHolderType<Event::ModelControlSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(param_1[5] + 0x10 + iVar2 * 0x3c) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8D100  Event::SeqDataHolderType<Event::ModelControlSeq>::vf54  size=102  [class]
void __thiscall Event::SeqDataHolderType<Event::ModelControlSeq>::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x3c;
  if (iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar2 != (int *)0x0)
        ) && (iVar3 = *piVar2, iVar3 != 0)) {
      if (*(short *)(iVar1 + 0xc) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar1 + 0xc)) {
        *(short *)(iVar1 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8cf30(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8D170  Event::SeqDataHolderType<Event::ModelControlSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::ModelControlSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x3c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8cf30(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8D1F0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::ModelControlSeq>::vf14(void)

{
  return 2;
}

// 00E8D200  Event::SeqDataHolderType<Event::ModelControlSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::ModelControlSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8d26f;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8d26f:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0xf;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_ModelControlSeq_018d0284;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8d348;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8d348:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8d418;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8d54c;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8d418:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8d54c:
      puVar9 = puVar9 + 0xf;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8D570  Event::SeqDataHolderType<Event::ModelControlSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::ModelControlSeq>::vf4C(void)

{
  FUN_00e8d050();
  return;
}

// 00E8D580  Event::SeqDataHolderType<Event::ModelControlSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::ModelControlSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8D5D0  Event::SeqDataHolderType<Event::ModelControlSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::ModelControlSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_ModelControlSeq_018d0284);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8D680  Event::DataHolderBase::DataHolderBase_12  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_12(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::ModelControlSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8D700  FUN_00e8d700  size=130  [between]
void __fastcall FUN_00e8d700(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_ModelControlSeq_018d0284);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_93(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8D790  Event::SeqDataHolderType<Event::ScrSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::ScrSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8D820  Event::SeqDataHolderType<Event::ScrSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::ScrSeq>::vf34(void)

{
  return PTR_s_ScrSeq_018d028c;
}

// 00E8D830  Event::SeqDataHolderType<Event::ScrSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ScrSeq>::vf5C(void)

{
  return 0;
}

// 00E8D840  Event::SeqDataHolderType<Event::ScrSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::ScrSeq>::vf64(void)

{
  return 0;
}

// 00E8D890  Event::SeqDataHolderType<Event::ScrSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::ScrSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8D8A0  Event::SeqDataHolderType<Event::ScrSeq>::vf30  size=13  [class]
int __thiscall Event::SeqDataHolderType<Event::ScrSeq>::vf30(int param_1,int param_2)

{
  return param_2 * 0x2c + *(int *)(param_1 + 0x14);
}

// 00E8D8B0  Event::SeqDataHolderType<Event::ScrSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ScrSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xb;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8D900  Event::SeqDataHolderType<Event::ScrSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::ScrSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x16;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8D940  Event::SeqDataHolderType<Event::ScrSeq>::vf40  size=13  [class]
int __thiscall Event::SeqDataHolderType<Event::ScrSeq>::vf40(int param_1,int param_2)

{
  return param_2 * 0x2c + *(int *)(param_1 + 0x14);
}

// 00E8D970  FUN_00e8d970  size=276  [between]
int __thiscall FUN_00e8d970(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 auStack_2c [11];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_44 = iVar4;
    do {
      while( true ) {
        local_38 = 0;
        local_40 = 0;
        if (iVar4 < iVar1) {
          puVar5 = puVar2 + iVar4 * 0xb;
          puVar6 = puVar2;
          local_3c = iVar4;
          do {
            iVar3 = (*param_2)(puVar6,puVar5);
            if (0 < iVar3) {
              local_38 = local_38 + 1;
              puVar7 = puVar6;
              puVar8 = auStack_2c;
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar5;
              puVar8 = puVar6;
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_2c;
              puVar8 = puVar5;
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_44;
              if (param_3 == local_40) {
                param_3 = local_3c;
              }
              else if (param_3 == local_3c) {
                param_3 = local_40;
              }
            }
            local_40 = local_40 + 1;
            local_3c = local_3c + 1;
            puVar6 = puVar6 + 0xb;
            puVar5 = puVar5 + 0xb;
          } while (local_3c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_44 = iVar4;
      }
    } while (local_38 != 0);
  }
  return param_3;
}

// 00E8DA90  FUN_00e8da90  size=83  [between]
int __thiscall FUN_00e8da90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x2c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0xb;
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8DAF0  Event::SeqDataHolderType<Event::ScrSeq>::vf50  size=66  [class]
void __fastcall Event::SeqDataHolderType<Event::ScrSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(iVar2 * 0x2c + 0x10 + param_1[5]) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8DB40  Event::SeqDataHolderType<Event::ScrSeq>::vf54  size=95  [class]
void __thiscall Event::SeqDataHolderType<Event::ScrSeq>::vf54(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 0x2c + *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar3 = (int)*(short *)(iVar2 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar1 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar1 != (int *)0x0)
        ) && (iVar3 = *piVar1, iVar3 != 0)) {
      if (*(short *)(iVar2 + 0xc) < 0) {
        *(undefined2 *)(iVar2 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar2 + 0xc)) {
        *(short *)(iVar2 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8d970(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8DBA0  Event::SeqDataHolderType<Event::ScrSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::ScrSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8d970(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8DC20  Event::SeqDataHolderType<Event::ScrSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::ScrSeq>::vf14(void)

{
  return 2;
}

// 00E8DC30  Event::SeqDataHolderType<Event::ScrSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::ScrSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8dc9f;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8dc9f:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0xb;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_ScrSeq_018d028c;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8dd78;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8dd78:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8de48;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8df7c;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8de48:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8df7c:
      puVar9 = puVar9 + 0xb;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8DFA0  Event::SeqDataHolderType<Event::ScrSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::ScrSeq>::vf4C(void)

{
  FUN_00e8da90();
  return;
}

// 00E8DFB0  Event::SeqDataHolderType<Event::ScrSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::ScrSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8E000  Event::SeqDataHolderType<Event::ScrSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::ScrSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_ScrSeq_018d028c);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8E0B0  Event::DataHolderBase::DataHolderBase_11  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_11(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::ScrSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8E130  FUN_00e8e130  size=130  [between]
void __fastcall FUN_00e8e130(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_ScrSeq_018d028c);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_76(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8E1C0  Event::SeqDataHolderType<Event::SeSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::SeSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8E250  Event::SeqDataHolderType<Event::SeSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::SeSeq>::vf34(void)

{
  return PTR_s_SeSeq_018d0290;
}

// 00E8E260  Event::SeqDataHolderType<Event::SeSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::SeSeq>::vf5C(void)

{
  return 0;
}

// 00E8E270  Event::SeqDataHolderType<Event::SeSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::SeSeq>::vf64(void)

{
  return 0;
}

// 00E8E2B0  Event::SeqDataHolderType<Event::SeSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::SeSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8E2C0  Event::SeqDataHolderType<Event::SeSeq>::vf30  size=16  [class]
int __thiscall Event::SeqDataHolderType<Event::SeSeq>::vf30(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x28;
}

// 00E8E2D0  Event::SeqDataHolderType<Event::SeSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::SeSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 10;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8E320  Event::SeqDataHolderType<Event::SeSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::SeSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x14;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8E360  Event::SeqDataHolderType<Event::SeSeq>::vf40  size=16  [class]
int __thiscall Event::SeqDataHolderType<Event::SeSeq>::vf40(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x28;
}

// 00E8E380  FUN_00e8e380  size=276  [between]
int __thiscall FUN_00e8e380(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 auStack_28 [10];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_40 = iVar4;
    do {
      while( true ) {
        local_34 = 0;
        local_3c = 0;
        if (iVar4 < iVar1) {
          puVar6 = puVar2 + iVar4 * 10;
          puVar5 = puVar2;
          local_38 = iVar4;
          do {
            iVar3 = (*param_2)(puVar5,puVar6);
            if (0 < iVar3) {
              local_34 = local_34 + 1;
              puVar7 = puVar5;
              puVar8 = auStack_28;
              for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6;
              puVar8 = puVar5;
              for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_28;
              puVar8 = puVar6;
              for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_40;
              if (param_3 == local_3c) {
                param_3 = local_38;
              }
              else if (param_3 == local_38) {
                param_3 = local_3c;
              }
            }
            local_3c = local_3c + 1;
            local_38 = local_38 + 1;
            puVar5 = puVar5 + 10;
            puVar6 = puVar6 + 10;
          } while (local_38 < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_40 = iVar4;
      }
    } while (local_34 != 0);
  }
  return param_3;
}

// 00E8E4A0  FUN_00e8e4a0  size=85  [between]
int __thiscall FUN_00e8e4a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x28;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 10;
        for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x28;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8E500  Event::SeqDataHolderType<Event::SeSeq>::vf50  size=64  [class]
void __fastcall Event::SeqDataHolderType<Event::SeSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(param_1[5] + 0x10 + iVar2 * 0x28) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8E540  Event::SeqDataHolderType<Event::SeSeq>::vf54  size=98  [class]
void __thiscall Event::SeqDataHolderType<Event::SeSeq>::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x28;
  if (iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar2 != (int *)0x0)
        ) && (iVar3 = *piVar2, iVar3 != 0)) {
      if (*(short *)(iVar1 + 0xc) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar1 + 0xc)) {
        *(short *)(iVar1 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8e380(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8E5B0  Event::SeqDataHolderType<Event::SeSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::SeSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8e380(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8E630  Event::SeqDataHolderType<Event::SeSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::SeSeq>::vf14(void)

{
  return 2;
}

// 00E8E640  Event::SeqDataHolderType<Event::SeSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::SeSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8e6af;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8e6af:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 10;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_SeSeq_018d0290;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8e788;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8e788:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8e858;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8e98c;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8e858:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8e98c:
      puVar9 = puVar9 + 10;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8E9B0  Event::SeqDataHolderType<Event::SeSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::SeSeq>::vf4C(void)

{
  FUN_00e8e4a0();
  return;
}

// 00E8E9C0  Event::SeqDataHolderType<Event::SeSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::SeSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8EA10  Event::SeqDataHolderType<Event::SeSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::SeSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_SeSeq_018d0290);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8EAC0  Event::DataHolderBase::DataHolderBase_10  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_10(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::SeSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8EB40  FUN_00e8eb40  size=130  [between]
void __fastcall FUN_00e8eb40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_SeSeq_018d0290);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_77(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8EBD0  Event::SeqDataHolderType<Event::BgmSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::BgmSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8EC60  Event::SeqDataHolderType<Event::BgmSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::BgmSeq>::vf34(void)

{
  return PTR_s_BgmSeq_018d0270;
}

// 00E8EC70  Event::SeqDataHolderType<Event::BgmSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::BgmSeq>::vf5C(void)

{
  return 0;
}

// 00E8EC80  Event::SeqDataHolderType<Event::BgmSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::BgmSeq>::vf64(void)

{
  return 0;
}

// 00E8ECD0  Event::SeqDataHolderType<Event::BgmSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::BgmSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8ECE0  Event::SeqDataHolderType<Event::BgmSeq>::vf30  size=22  [class]
int __thiscall Event::SeqDataHolderType<Event::BgmSeq>::vf30(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x1c;
}

// 00E8ED00  Event::SeqDataHolderType<Event::BgmSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::BgmSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 7;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8ED50  Event::SeqDataHolderType<Event::BgmSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::BgmSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0xe;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8ED90  Event::SeqDataHolderType<Event::BgmSeq>::vf40  size=22  [class]
int __thiscall Event::SeqDataHolderType<Event::BgmSeq>::vf40(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x1c;
}

// 00E8EDD0  FUN_00e8edd0  size=278  [between]
int __thiscall FUN_00e8edd0(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 auStack_1c [7];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_34 = iVar4;
    do {
      while( true ) {
        local_28 = 0;
        local_30 = 0;
        if (iVar4 < iVar1) {
          puVar6 = puVar2 + iVar4 * 7;
          puVar5 = puVar2;
          local_2c = iVar4;
          do {
            iVar3 = (*param_2)(puVar5,puVar6);
            if (0 < iVar3) {
              local_28 = local_28 + 1;
              puVar7 = puVar5;
              puVar8 = auStack_1c;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6;
              puVar8 = puVar5;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_1c;
              puVar8 = puVar6;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_34;
              if (param_3 == local_30) {
                param_3 = local_2c;
              }
              else if (param_3 == local_2c) {
                param_3 = local_30;
              }
            }
            local_30 = local_30 + 1;
            local_2c = local_2c + 1;
            puVar5 = puVar5 + 7;
            puVar6 = puVar6 + 7;
          } while (local_2c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_34 = iVar4;
      }
    } while (local_28 != 0);
  }
  return param_3;
}

// 00E8EEF0  FUN_00e8eef0  size=88  [between]
int __thiscall FUN_00e8eef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x1c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 7;
        for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x1c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8EF50  Event::SeqDataHolderType<Event::BgmSeq>::vf50  size=70  [class]
void __fastcall Event::SeqDataHolderType<Event::BgmSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(param_1[5] + 0x10 + iVar2 * 0x1c) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8EFA0  Event::SeqDataHolderType<Event::BgmSeq>::vf54  size=104  [class]
void __thiscall Event::SeqDataHolderType<Event::BgmSeq>::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x1c;
  if (iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar2 != (int *)0x0)
        ) && (iVar3 = *piVar2, iVar3 != 0)) {
      if (*(short *)(iVar1 + 0xc) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar1 + 0xc)) {
        *(short *)(iVar1 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8edd0(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8F010  Event::SeqDataHolderType<Event::BgmSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::BgmSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8edd0(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8F090  Event::SeqDataHolderType<Event::BgmSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::BgmSeq>::vf14(void)

{
  return 2;
}

// 00E8F0A0  Event::SeqDataHolderType<Event::BgmSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::BgmSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8f10f;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8f10f:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 7;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_BgmSeq_018d0270;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8f1e8;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8f1e8:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8f2b8;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8f3ec;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8f2b8:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8f3ec:
      puVar9 = puVar9 + 7;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8F410  Event::SeqDataHolderType<Event::BgmSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::BgmSeq>::vf4C(void)

{
  FUN_00e8eef0();
  return;
}

// 00E8F420  Event::SeqDataHolderType<Event::BgmSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::BgmSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8F470  Event::SeqDataHolderType<Event::BgmSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::BgmSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_BgmSeq_018d0270);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8F520  Event::DataHolderBase::DataHolderBase_9  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_9(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::BgmSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8F5A0  FUN_00e8f5a0  size=130  [between]
void __fastcall FUN_00e8f5a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_BgmSeq_018d0270);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_78(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8F630  Event::SeqDataHolderType<Event::UiSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::UiSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8F6C0  Event::SeqDataHolderType<Event::UiSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::UiSeq>::vf34(void)

{
  return PTR_s_UiSeq_018d0298;
}

// 00E8F6D0  Event::SeqDataHolderType<Event::UiSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::UiSeq>::vf5C(void)

{
  return 0;
}

// 00E8F6E0  Event::SeqDataHolderType<Event::UiSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::UiSeq>::vf64(void)

{
  return 0;
}

// 00E8F720  Event::SeqDataHolderType<Event::UiSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::UiSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E8F730  Event::SeqDataHolderType<Event::UiSeq>::vf30  size=13  [class]
int __thiscall Event::SeqDataHolderType<Event::UiSeq>::vf30(int param_1,int param_2)

{
  return param_2 * 0x2c + *(int *)(param_1 + 0x14);
}

// 00E8F740  Event::SeqDataHolderType<Event::UiSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::UiSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xb;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E8F790  Event::SeqDataHolderType<Event::UiSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::UiSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x16;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E8F7D0  Event::SeqDataHolderType<Event::UiSeq>::vf40  size=13  [class]
int __thiscall Event::SeqDataHolderType<Event::UiSeq>::vf40(int param_1,int param_2)

{
  return param_2 * 0x2c + *(int *)(param_1 + 0x14);
}

// 00E8F7F0  FUN_00e8f7f0  size=276  [between]
int __thiscall FUN_00e8f7f0(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 auStack_2c [11];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_44 = iVar4;
    do {
      while( true ) {
        local_38 = 0;
        local_40 = 0;
        if (iVar4 < iVar1) {
          puVar5 = puVar2 + iVar4 * 0xb;
          puVar6 = puVar2;
          local_3c = iVar4;
          do {
            iVar3 = (*param_2)(puVar6,puVar5);
            if (0 < iVar3) {
              local_38 = local_38 + 1;
              puVar7 = puVar6;
              puVar8 = auStack_2c;
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar5;
              puVar8 = puVar6;
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_2c;
              puVar8 = puVar5;
              for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_44;
              if (param_3 == local_40) {
                param_3 = local_3c;
              }
              else if (param_3 == local_3c) {
                param_3 = local_40;
              }
            }
            local_40 = local_40 + 1;
            local_3c = local_3c + 1;
            puVar6 = puVar6 + 0xb;
            puVar5 = puVar5 + 0xb;
          } while (local_3c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_44 = iVar4;
      }
    } while (local_38 != 0);
  }
  return param_3;
}

// 00E8F910  FUN_00e8f910  size=83  [between]
int __thiscall FUN_00e8f910(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x2c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0xb;
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E8F970  Event::SeqDataHolderType<Event::UiSeq>::vf50  size=66  [class]
void __fastcall Event::SeqDataHolderType<Event::UiSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(iVar2 * 0x2c + 0x10 + param_1[5]) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E8F9C0  Event::SeqDataHolderType<Event::UiSeq>::vf54  size=95  [class]
void __thiscall Event::SeqDataHolderType<Event::UiSeq>::vf54(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 0x2c + *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar3 = (int)*(short *)(iVar2 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar1 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar1 != (int *)0x0)
        ) && (iVar3 = *piVar1, iVar3 != 0)) {
      if (*(short *)(iVar2 + 0xc) < 0) {
        *(undefined2 *)(iVar2 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar2 + 0xc)) {
        *(short *)(iVar2 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e8f7f0(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E8FA20  Event::SeqDataHolderType<Event::UiSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::UiSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x2c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e8f7f0(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E8FAA0  Event::SeqDataHolderType<Event::UiSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::UiSeq>::vf14(void)

{
  return 2;
}

// 00E8FAB0  Event::SeqDataHolderType<Event::UiSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::UiSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e8fb1f;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e8fb1f:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0xb;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_UiSeq_018d0298;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e8fbf8;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e8fbf8:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e8fcc8;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e8fdfc;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e8fcc8:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e8fdfc:
      puVar9 = puVar9 + 0xb;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E8FE20  Event::SeqDataHolderType<Event::UiSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::UiSeq>::vf4C(void)

{
  FUN_00e8f910();
  return;
}

// 00E8FE30  Event::SeqDataHolderType<Event::UiSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::UiSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E8FE80  Event::SeqDataHolderType<Event::UiSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::UiSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_UiSeq_018d0298);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E8FF30  Event::DataHolderBase::DataHolderBase_8  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_8(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::UiSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E8FFB0  FUN_00e8ffb0  size=130  [between]
void __fastcall FUN_00e8ffb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_UiSeq_018d0298);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_72(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E90040  Event::SeqDataHolderType<Event::VibSeq>::vf0C  size=71  [class]
void __fastcall Event::SeqDataHolderType<Event::VibSeq>::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E900D0  Event::SeqDataHolderType<Event::VibSeq>::vf34  size=6  [class]
undefined * Event::SeqDataHolderType<Event::VibSeq>::vf34(void)

{
  return PTR_s_VibSeq_018d0294;
}

// 00E900E0  Event::SeqDataHolderType<Event::VibSeq>::vf5C  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::VibSeq>::vf5C(void)

{
  return 0;
}

// 00E900F0  Event::SeqDataHolderType<Event::VibSeq>::vf64  size=5  [class]
undefined4 Event::SeqDataHolderType<Event::VibSeq>::vf64(void)

{
  return 0;
}

// 00E90140  Event::SeqDataHolderType<Event::VibSeq>::vf2C  size=4  [class]
undefined4 __fastcall Event::SeqDataHolderType<Event::VibSeq>::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 00E90150  Event::SeqDataHolderType<Event::VibSeq>::vf30  size=20  [class]
int __thiscall Event::SeqDataHolderType<Event::VibSeq>::vf30(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x3c;
}

// 00E90170  Event::SeqDataHolderType<Event::VibSeq>::vf38  size=66  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::VibSeq>::vf38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[5];
  iVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0xf;
    } while (iVar3 < iVar1);
  }
  return 0;
}

// 00E901C0  Event::SeqDataHolderType<Event::VibSeq>::vf3C  size=64  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::VibSeq>::vf3C(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = 0;
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    psVar3 = (short *)(iVar1 + 10);
    do {
      if (param_2 <= *psVar3) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x1e;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E90200  Event::SeqDataHolderType<Event::VibSeq>::vf40  size=20  [class]
int __thiscall Event::SeqDataHolderType<Event::VibSeq>::vf40(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x14) + param_2 * 0x3c;
}

// 00E90240  FUN_00e90240  size=276  [between]
int __thiscall FUN_00e90240(int param_1,code *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 auStack_3c [15];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (1 < iVar1) {
    puVar2 = *(undefined4 **)(param_1 + 0x14);
    iVar4 = (iVar1 * 10) / 0xd;
    local_54 = iVar4;
    do {
      while( true ) {
        local_48 = 0;
        local_50 = 0;
        if (iVar4 < iVar1) {
          puVar6 = puVar2 + iVar4 * 0xf;
          puVar5 = puVar2;
          local_4c = iVar4;
          do {
            iVar3 = (*param_2)(puVar5,puVar6);
            if (0 < iVar3) {
              local_48 = local_48 + 1;
              puVar7 = puVar5;
              puVar8 = auStack_3c;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6;
              puVar8 = puVar5;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = auStack_3c;
              puVar8 = puVar6;
              for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              iVar4 = local_54;
              if (param_3 == local_50) {
                param_3 = local_4c;
              }
              else if (param_3 == local_4c) {
                param_3 = local_50;
              }
            }
            local_50 = local_50 + 1;
            local_4c = local_4c + 1;
            puVar5 = puVar5 + 0xf;
            puVar6 = puVar6 + 0xf;
          } while (local_4c < iVar1);
        }
        if (iVar4 == 1) break;
        iVar4 = (iVar4 * 10) / 0xd;
        local_54 = iVar4;
      }
    } while (local_48 != 0);
  }
  return param_3;
}

// 00E90360  FUN_00e90360  size=86  [between]
int __thiscall FUN_00e90360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar2 = param_2 * 0x3c;
      iVar3 = param_2;
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        puVar4 = puVar5 + 0xf;
        for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      return param_2;
    }
  }
  return -1;
}

// 00E903C0  Event::SeqDataHolderType<Event::VibSeq>::vf50  size=68  [class]
void __fastcall Event::SeqDataHolderType<Event::VibSeq>::vf50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar1) {
    do {
      if ((*(uint *)(param_1[5] + 0x10 + iVar2 * 0x3c) & 0x80000000) == 0) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x4c))(iVar2);
      }
      iVar1 = (**(code **)(*param_1 + 0x2c))();
    } while (iVar2 < iVar1);
  }
  return;
}

// 00E90410  Event::SeqDataHolderType<Event::VibSeq>::vf54  size=102  [class]
void __thiscall Event::SeqDataHolderType<Event::VibSeq>::vf54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14) + param_2 * 0x3c;
  if (iVar1 != 0) {
    iVar3 = (int)*(short *)(iVar1 + 10);
    if ((((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(param_1 + 4) + 0x50))) &&
        (piVar2 = (int *)(*(int *)(*(int *)(param_1 + 4) + 0x48) + iVar3 * 4), piVar2 != (int *)0x0)
        ) && (iVar3 = *piVar2, iVar3 != 0)) {
      if (*(short *)(iVar1 + 0xc) < 0) {
        *(undefined2 *)(iVar1 + 0xc) = 0;
      }
      if (iVar3 + -1 < (int)*(short *)(iVar1 + 0xc)) {
        *(short *)(iVar1 + 0xc) = (short)iVar3 + -1;
      }
      FUN_00e90240(&LAB_00e692c0,param_2);
    }
  }
  return;
}

// 00E90480  Event::SeqDataHolderType<Event::VibSeq>::vf58  size=113  [class]
void __fastcall Event::SeqDataHolderType<Event::VibSeq>::vf58(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      iVar4 = (int)*(short *)(param_1[5] + 10 + iVar5);
      iVar3 = param_1[5] + iVar5;
      if ((((-1 < iVar4) && (iVar4 < *(int *)(param_1[1] + 0x50))) &&
          (piVar1 = (int *)(*(int *)(param_1[1] + 0x48) + iVar4 * 4), piVar1 != (int *)0x0)) &&
         (iVar4 = *piVar1, iVar4 != 0)) {
        if (*(short *)(iVar3 + 0xc) < 0) {
          *(undefined2 *)(iVar3 + 0xc) = 0;
        }
        if (iVar4 + -1 < (int)*(short *)(iVar3 + 0xc)) {
          *(short *)(iVar3 + 0xc) = (short)iVar4 + -1;
        }
      }
      iVar5 = iVar5 + 0x3c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00e90240(&LAB_00e692c0,0xffffffff);
  return;
}

// 00E90500  Event::SeqDataHolderType<Event::VibSeq>::vf14  size=8  [class]
undefined4 Event::SeqDataHolderType<Event::VibSeq>::vf14(void)

{
  return 2;
}

// 00E90510  Event::SeqDataHolderType<Event::VibSeq>::vf28  size=866  [class]
void __fastcall Event::SeqDataHolderType<Event::VibSeq>::vf28(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&iStack_54;
  piVar6 = (int *)param_1[1];
  iVar3 = param_1[5];
  local_48 = iVar3;
  local_38 = piVar6;
  iStack_54 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iStack_54) {
    piVar10 = (int *)(iVar3 + 4);
    do {
      piVar8 = (int *)piVar6[0x44];
      iVar3 = 0;
      if (0 < piVar6[0x46]) {
        do {
          if ((*piVar8 == piVar10[-1]) && (piVar8[1] == *piVar10)) {
            uVar2 = (undefined2)iVar3;
            goto LAB_00e9057f;
          }
          iVar3 = iVar3 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar3 < piVar6[0x46]);
      }
      uVar2 = 0xffff;
LAB_00e9057f:
      *(undefined2 *)(piVar10 + 1) = uVar2;
      piVar10 = piVar10 + 0xf;
      iStack_54 = iStack_54 + -1;
      iVar3 = local_48;
    } while (iStack_54 != 0);
  }
  iStack_54 = 1;
  if ((int)(char)piVar6[0x10] / (int)*(char *)((int)piVar6 + 0x41) == 2) {
    iStack_54 = 2;
  }
  iStack_50 = piVar6[1];
  puStack_4c = PTR_s_VibSeq_018d0294;
  iVar4 = (**(code **)(*param_1 + 0x2c))();
  if (0 < iVar4) {
    puVar9 = (uint *)(iVar3 + 0x10);
    local_48 = iVar4;
    do {
      piVar6 = local_38;
      iVar4 = (int)(short)puVar9[-1];
      uVar1 = puVar9[-4];
      *puVar9 = *puVar9 & 0x7fffffff;
      iVar3 = (int)*(short *)((int)puVar9 + -6);
      iStack_44 = iVar4;
      if ((uVar1 == 0x7f0000) || ((short)puVar9[-2] != -1)) {
        if (*local_38 == 0) {
          if (uVar1 == 0x7f0000) {
            if (iVar3 < local_38[0x14]) goto LAB_00e90658;
            bVar12 = false;
          }
          else if (*(int *)local_38[0x31] == 0) {
            if ((short)puVar9[-2] == -1) {
              bVar12 = false;
            }
            else {
              iVar5 = FUN_00e6cea0((int)(short)puVar9[-2],iVar3);
              if ((iVar5 == 0) || (*(ushort *)(iVar5 + 10) == 0)) {
                bVar12 = false;
              }
              else {
                bVar12 = (int)(short)puVar9[-1] < (int)(uint)*(ushort *)(iVar5 + 10);
              }
            }
          }
          else {
            FUN_00dd5650(&DAT_016cf270);
            bVar12 = false;
          }
        }
        else if (iVar3 < local_38[0x14]) {
LAB_00e90658:
          if ((iVar3 < 0) || (piVar10 = (int *)(local_38[0x12] + iVar3 * 4), piVar10 == (int *)0x0))
          {
            bVar12 = iVar4 < 0;
          }
          else {
            bVar12 = iVar4 < *piVar10;
          }
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          iStack_40 = -1;
          iStack_3c = -1;
          if (*piVar6 == 0) {
            if (puVar9[-4] == 0x7f0000) {
              iVar4 = piVar6[0x14] + -1;
              iVar5 = (int)*(short *)((int)puVar9 + -6);
              if (iVar4 < *(short *)((int)puVar9 + -6)) {
                iVar5 = iVar4;
              }
              if (((-1 < iVar5) && (iVar5 < piVar6[0x14])) &&
                 (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 != (int *)0x0))
              goto LAB_00e90728;
              iVar11 = -iStack_54;
            }
            else {
              iVar7 = ActorDataHolder::getSeqLastFrame(&iStack_40,&iStack_3c,puVar9 + -4,iStack_54);
              iVar5 = iStack_40;
              iVar11 = iStack_3c;
              if (iVar7 == 0) {
                if (puVar9[-4] == 0x7f0000) {
                  FUN_00dd5650(&DAT_016d079c,iStack_50,puStack_4c,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                else {
                  FUN_009f8ea0(auStack_34,0x10,puVar9[-4],0);
                  FUN_00dd5650(&DAT_016d076c,iStack_50,puStack_4c,auStack_34,iVar3,iVar4);
                  *puVar9 = *puVar9 | 0x80000000;
                }
                goto LAB_00e9085c;
              }
            }
          }
          else {
            iVar4 = piVar6[0x14] + -1;
            iVar5 = (int)*(short *)((int)puVar9 + -6);
            if (iVar4 < *(short *)((int)puVar9 + -6)) {
              iVar5 = iVar4;
            }
            if (((iVar5 < 0) || (piVar6[0x14] <= iVar5)) ||
               (piVar6 = (int *)(piVar6[0x12] + iVar5 * 4), piVar6 == (int *)0x0)) {
              iVar11 = -iStack_54;
            }
            else {
LAB_00e90728:
              iVar11 = *piVar6 - iStack_54;
            }
          }
          *(short *)((int)puVar9 + -6) = (short)iVar5;
          *(short *)(puVar9 + -1) = (short)iVar11;
          if (puVar9[-4] == 0x7f0000) {
            FUN_00dd5650(&DAT_016d073c,iStack_50,puStack_4c,iVar3,iStack_44,iVar5,iVar11);
          }
          else {
            FUN_009f8ea0(auStack_14,0x10,puVar9[-4],0);
            FUN_00dd5650(&DAT_016d0710,iStack_50,puStack_4c,auStack_14,iVar3,iStack_44,iVar5,iVar11)
            ;
          }
        }
      }
      else {
        FUN_009f8ea0(auStack_24,0x10,uVar1,0);
        FUN_00dd5650(&DAT_016d07d0,iStack_50,puStack_4c,auStack_24,iVar3,iVar4);
        *puVar9 = *puVar9 | 0x80000000;
      }
LAB_00e9085c:
      puVar9 = puVar9 + 0xf;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  __security_check_cookie(local_4 ^ (uint)&iStack_54);
  return;
}

// 00E90880  Event::SeqDataHolderType<Event::VibSeq>::vf4C  size=8  [class]
void Event::SeqDataHolderType<Event::VibSeq>::vf4C(void)

{
  FUN_00e90360();
  return;
}

// 00E90890  Event::SeqDataHolderType<Event::VibSeq>::vf60  size=73  [class]
void __fastcall Event::SeqDataHolderType<Event::VibSeq>::vf60(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E908E0  Event::SeqDataHolderType<Event::VibSeq>::vf68  size=168  [class]
void Event::SeqDataHolderType<Event::VibSeq>::vf68
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 == 0) {
    param_1 = 1;
  }
  _sprintf_s(local_24,0x20,"_%s.seq",PTR_s_VibSeq_018d0294);
  if (param_1 == 1) {
    pcVar1 = "//svPRJ020/PRJ_020/p1/soft/common/room";
  }
  else {
    if (param_1 != 2) {
      FUN_00dd5650(&DAT_016d0484);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    pcVar1 = "../../../../PRJ_020/p1/common/room";
  }
  FUN_00e6bf20(param_2,param_3,pcVar1,param_4,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E90990  Event::DataHolderBase::DataHolderBase_2  size=117  [class]
void __fastcall Event::DataHolderBase::DataHolderBase_2(undefined4 *param_1)

{
  *param_1 = SeqDataHolderType<Event::VibSeq>::vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E90A10  FUN_00e90a10  size=130  [between]
void __fastcall FUN_00e90a10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_VibSeq_018d0294);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_73(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E90AA0  Event::SeqDataHolderType<Event::CameraSeq>::vf00  size=30  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::CameraSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_7();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90AC0  Event::SeqDataHolderType<Event::ActorSeq>::vf00  size=30  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ActorSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_6();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90AE0  Event::SeqDataHolderType<Event::ControlSeq>::vf00  size=30  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ControlSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90B00  Event::SeqDataHolderType<Event::MoveSeq>::vf00  size=30  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::MoveSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90B20  Event::SeqDataHolderType<Event::EffectSeq>::vf00  size=30  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::EffectSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_14();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90B40  Event::SeqDataHolderType<Event::GraphicSeq>::vf00  size=30  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::GraphicSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_13();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90B60  Event::SeqDataHolderType<Event::ModelControlSeq>::vf00  size=30  [class]
undefined4 __thiscall
Event::SeqDataHolderType<Event::ModelControlSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_12();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90B80  Event::SeqDataHolderType<Event::ScrSeq>::vf00  size=30  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::ScrSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_11();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90BA0  Event::SeqDataHolderType<Event::SeSeq>::vf00  size=30  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::SeSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_10();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90BC0  Event::SeqDataHolderType<Event::BgmSeq>::vf00  size=30  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::BgmSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90BE0  Event::SeqDataHolderType<Event::UiSeq>::vf00  size=30  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::UiSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90C00  Event::SeqDataHolderType<Event::VibSeq>::vf00  size=30  [class]
undefined4 __thiscall Event::SeqDataHolderType<Event::VibSeq>::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90E30  Event::CutDataHolder::vf00  size=30  [class]
undefined4 __thiscall Event::CutDataHolder::vf00(undefined4 param_1,byte param_2)

{
  DataHolderBase::DataHolderBase_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90E50  FUN_00e90e50  size=30  [between]
undefined4 __thiscall FUN_00e90e50(undefined4 param_1,byte param_2)

{
  FUN_00e7b870();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90E70  FUN_00e90e70  size=130  [between]
void __fastcall FUN_00e90e70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  _sprintf_s(local_24,0x20,"ev%04x_%s.seq",*(undefined4 *)(*(int *)(param_1 + 4) + 4),
             PTR_s_ControlSeq_018d0278);
  uVar1 = FUN_00e03ea0(local_24);
  iVar2 = FUN_00de3e90(0,uVar1);
  if (iVar2 == 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  cXmlBinary::cXmlBinary_47(iVar2);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E90F00  Event::ModelControlDataHolder::vf00  size=36  [class]
undefined4 * __thiscall Event::ModelControlDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DataHolderBase::DataHolderBase_12();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90F30  Event::MoveDataHolder::vf00  size=36  [class]
undefined4 * __thiscall Event::MoveDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DataHolderBase::DataHolderBase_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90F60  Event::ScrDataHolder::vf00  size=36  [class]
undefined4 * __thiscall Event::ScrDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DataHolderBase::DataHolderBase_11();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90F90  Event::ActorDataHolder::vf00  size=30  [class]
undefined4 __thiscall Event::ActorDataHolder::vf00(undefined4 param_1,byte param_2)

{
  ~ActorDataHolder();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90FB0  Event::BgmDataHolder::vf00  size=43  [class]
undefined4 * __thiscall Event::BgmDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_9();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E90FE0  Event::CameraDataHolder::vf00  size=30  [class]
undefined4 __thiscall Event::CameraDataHolder::vf00(undefined4 param_1,byte param_2)

{
  ~CameraDataHolder();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E91000  Event::ControlDataHolder::vf00  size=104  [class]
undefined4 * __thiscall Event::ControlDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  DataHolderBase::DataHolderBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E91070  Event::EffectDataHolder::vf00  size=43  [class]
undefined4 * __thiscall Event::EffectDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_14();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E910A0  Event::GraphicDataHolder::vf00  size=43  [class]
undefined4 * __thiscall Event::GraphicDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_13();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E910D0  Event::SeDataHolder::vf00  size=43  [class]
undefined4 * __thiscall Event::SeDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  vf0C();
  DataHolderBase::DataHolderBase_10();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E91100  Event::VibDataHolder::vf00  size=104  [class]
undefined4 * __thiscall Event::VibDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  DataHolderBase::DataHolderBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E91170  Event::UiDataHolder::vf00  size=104  [class]
undefined4 * __thiscall Event::UiDataHolder::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[9] != 0) {
    FUN_00dd48d0(param_1[9],0);
    param_1[9] = 0;
  }
  if (param_1[5] != 0) {
    param_1[7] = 0;
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[5],0);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  DataHolderBase::DataHolderBase_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E911E0  Event::ReadUnitDebug::vf00  size=45  [class]
undefined4 * __thiscall Event::ReadUnitDebug::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = ReadUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E91210  Event::ReadUnitExternal::vf00  size=45  [class]
undefined4 * __thiscall Event::ReadUnitExternal::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = ReadUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E91240  Event::ReadUnitNorm::vf00  size=45  [class]
undefined4 * __thiscall Event::ReadUnitNorm::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = ReadUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E91270  Event::ReadUnitPhase::vf00  size=45  [class]
undefined4 * __thiscall Event::ReadUnitPhase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = ReadUnitExternal::vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = ReadUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E912A0  Event::ReadUnitRoom::vf00  size=45  [class]
undefined4 * __thiscall Event::ReadUnitRoom::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = ReadUnitExternal::vftable;
  DataHolderBase::DataHolderBase();
  *param_1 = ReadUnit::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

