// src/misc/HoldEntitySignalContext.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043E8D0..00A1B750, 36 functions

#include "mgrr.h"
#include "HoldEntitySignalContext.h"

// 0043E8D0  HoldEntitySignalContext::vf00  size=6  [class]
undefined * HoldEntitySignalContext::vf00(void)

{
  return &DAT_01dc53d8;
}

// 0043E8F0  HoldEntitySignalContext::vf04  size=31  [class]
undefined4 * __thiscall HoldEntitySignalContext::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = SignalContext::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A1A050  FUN_00a1a050  size=399  [callgraph]
void __fastcall FUN_00a1a050(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00d8b330(param_1 + 0x10);
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      do {
        FUN_00d8bc00(*(int *)(param_1 + 0xb0) + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xb4));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0xb0));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      do {
        FUN_00973ff0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x44));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x34)) {
      do {
        FUN_009809a0();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0x30));
  }
  if ((*(int *)(param_1 + 0x28) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x2c))) {
    do {
      FUN_009817e0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  if ((*(int *)(param_1 + 0x38) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x3c))) {
    do {
      FUN_009749e0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xac)) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0xa8) + iVar2 * 8);
        if (iVar1 != 0) {
          FUN_00dd4940(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xac));
    }
    FUN_00dd4940(*(undefined4 *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xa0));
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  _memset((void *)(param_1 + 0x50),0,0x60);
  return;
}

// 00A1A1F0  FUN_00a1a1f0  size=316  [callgraph]
undefined4 __thiscall FUN_00a1a1f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_3 + 0xb8);
  iVar1 = *(int *)(param_3 + 0xb0);
  if ((iVar9 == 0) || (iVar1 == 0)) {
    return 1;
  }
  uVar2 = *(uint *)(param_3 + 0xb4);
  *(uint *)(param_1 + 0x3c) = uVar2;
  uVar7 = -(uint)((int)((ulonglong)uVar2 * 0x50 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x50);
  puVar4 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar7) | uVar7 + 0x10,param_4);
  if (puVar4 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = puVar4 + 4;
    *puVar4 = uVar2;
    FUN_00401040(puVar5,0x50,uVar2,&LAB_00973e50);
  }
  *(uint **)(param_1 + 0x38) = puVar5;
  if (puVar5 != (uint *)0x0) {
    iVar3 = *(int *)(param_3 + 0xbc);
    param_4 = 0;
    if (0 < iVar3) {
      psVar8 = (short *)(iVar9 + 6);
      do {
        iVar9 = 0;
        if (0 < *psVar8) {
          do {
            iVar6 = FUN_00974aa0((psVar8[-1] + iVar9) * 0x60 + iVar1,*(undefined4 *)(param_1 + 0x1c)
                                 ,*(undefined4 *)(param_1 + 0x20),psVar8[-3]);
            if (iVar6 == 0) {
              return 0;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *psVar8);
        }
        param_4 = param_4 + 1;
        psVar8 = psVar8 + 6;
      } while (param_4 < iVar3);
    }
    return 1;
  }
  return 0;
}

// 00A1A330  FUN_00a1a330  size=200  [callgraph]
undefined4 __thiscall FUN_00a1a330(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_2 + 0x98);
  if (iVar6 == 0) {
    return 1;
  }
  uVar1 = *(uint *)(param_2 + 0x9c);
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar4 = -(uint)((int)((ulonglong)uVar1 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x1c);
  puVar2 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,param_3);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      FUN_00980110();
    }
  }
  *(uint **)(param_1 + 0x28) = puVar2;
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar3 = FUN_00981860(iVar6,param_2,*(undefined4 *)(param_1 + 0x20));
      if (iVar3 == 0) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x14;
    } while (iVar5 < *(int *)(param_1 + 0x2c));
  }
  return 1;
}

// 00A1A400  FUN_00a1a400  size=81  [callgraph]
undefined4 __thiscall FUN_00a1a400(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 0xe8);
  if (0 < (int)uVar1) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 4),param_3);
    *(int *)(param_1 + 0xb8) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    *(uint *)(param_1 + 0xbc) = uVar1;
  }
  return 1;
}

// 00A1A460  FUN_00a1a460  size=18  [callgraph]
undefined4 __fastcall FUN_00a1a460(undefined4 param_1)

{
  FUN_00d93a30();
  return param_1;
}

// 00A1A480  FUN_00a1a480  size=166  [callgraph]
undefined4 __thiscall
FUN_00a1a480(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined1 local_100 [216];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_00d93a30();
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00d8b880(local_100,param_3,param_4,param_5);
    iVar2 = 0;
    local_28 = param_6;
    local_20 = param_7;
    local_1c = param_8;
    if (0 < *(int *)(param_1 + 0x3c)) {
      do {
        iVar1 = FUN_009749c0(param_2,local_100);
        if (iVar1 != 0) {
          return 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x3c));
    }
  }
  return 0;
}

// 00A1A540  FUN_00a1a540  size=301  [callgraph]
undefined4 __thiscall FUN_00a1a540(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00a1d5c0();
  FUN_00976000();
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x84);
  iVar3 = FUN_00974d70(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),uVar2);
  if (((((iVar3 != 0) &&
        (iVar3 = FUN_00974e50(*(undefined4 *)(param_1 + 0x24),uVar1,uVar2), iVar3 != 0)) &&
       (iVar3 = FUN_00974f40(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),uVar2),
       iVar3 != 0)) &&
      ((iVar3 = FUN_00975080(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),uVar2),
       iVar3 != 0 &&
       (iVar3 = FUN_009773c0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),uVar2),
       iVar3 != 0)))) &&
     ((iVar3 = FUN_009776a0(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),uVar2),
      iVar3 != 0 &&
      ((iVar3 = FUN_009764d0(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                             &DAT_01b7c060,uVar2), iVar3 != 0 &&
       (iVar3 = FUN_00978340(*(undefined4 *)(param_1 + 0x14),param_3,&DAT_01b7f860,&DAT_01b7c060),
       iVar3 != 0)))))) {
    FUN_00975500(param_1 + 0xb0,param_1 + 0xb4);
    thunk_FUN_00974bc0();
    return 1;
  }
  thunk_FUN_00974bc0();
  return 0;
}

// 00A1A680  FUN_00a1a680  size=106  [callgraph]
int __thiscall FUN_00a1a680(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_4 == -1) || (*(int *)(param_1 + 0xb8) == 0)) ||
     (*(int *)(*(int *)(param_1 + 0xb8) + param_4 * 4) == 2)) {
    return 0;
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(param_2 + iVar3 * 4);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x330) != -0xe0)) &&
         (iVar2 = FUN_00a073c0(param_4), iVar2 == 0)) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return 0;
}

// 00A1A730  FUN_00a1a730  size=63  [callgraph]
void __thiscall
FUN_00a1a730(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      FUN_00972120(param_2,param_3,param_4,2,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  return;
}

// 00A1A770  FUN_00a1a770  size=63  [callgraph]
void __thiscall
FUN_00a1a770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      FUN_0097d500(param_2,param_3,param_4,3,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x2c));
  }
  return;
}

// 00A1A7B0  FUN_00a1a7b0  size=63  [callgraph]
void __thiscall
FUN_00a1a7b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar1 = 0;
    do {
      cCutJobList::entryObject(param_3,param_4,*(int *)(param_1 + 0x40) + iVar1,0,param_5);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x80;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00A1A7F0  FUN_00a1a7f0  size=66  [callgraph]
void __thiscall
FUN_00a1a7f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar1 = 0;
    do {
      cCutJobList::entryObject(param_3,param_4,*(int *)(param_1 + 0x30) + iVar1,1,param_5);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x98;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A1A840  FUN_00a1a840  size=69  [callgraph]
void __thiscall
FUN_00a1a840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x40) + iVar3;
      if (*(int *)(iVar1 + 0x20) == 2) {
        cCutJobList::entryObject(param_3,param_4,iVar1,0,param_5);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x80;
    } while (iVar2 < *(int *)(param_1 + 0x44));
  }
  return;
}

// 00A1A890  FUN_00a1a890  size=71  [callgraph]
void __thiscall
FUN_00a1a890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar3 = 0;
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x30) + iVar3);
      if (*piVar1 == 2) {
        cCutJobList::entryObject(param_3,param_4,piVar1,1,param_5);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x98;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  return;
}

// 00A1A8E0  FUN_00a1a8e0  size=113  [callgraph]
void FUN_00a1a8e0(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  switch(param_3) {
  case 0:
    FUN_00971360(param_2);
    break;
  case 1:
    FUN_00971440(param_2);
    return;
  case 2:
    FUN_009741e0(&DAT_01b7c060);
    return;
  case 3:
    FUN_00974320(&DAT_01b7c060);
    return;
  case 4:
    FUN_00972d00();
    return;
  case 5:
    FUN_009744e0();
    return;
  case 6:
    FUN_00974580();
    return;
  case 7:
    FUN_00972da0();
    return;
  }
  return;
}

// 00A1A980  FUN_00a1a980  size=118  [callgraph]
void FUN_00a1a980(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  switch(param_3) {
  case 0:
    FUN_0097ba90(param_2);
    break;
  case 1:
    FUN_0097e040(param_2);
    return;
  case 2:
    FUN_00980c50(&DAT_01b7c060);
    return;
  case 3:
    FUN_00980140(&DAT_01b7c060,&DAT_01b7f860);
    return;
  case 4:
    FUN_0097e0c0();
    return;
  case 5:
    FUN_009803f0();
    return;
  case 6:
    FUN_0097e1d0();
    return;
  case 7:
    FUN_0097e210();
    return;
  }
  return;
}

// 00A1AA20  FUN_00a1aa20  size=97  [callgraph]
void FUN_00a1aa20(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  switch(param_3) {
  case 0:
    FUN_00974790(param_2,&DAT_01b7c060);
    break;
  case 1:
    FUN_00974820();
    return;
  case 2:
    FUN_00971dc0();
    return;
  case 3:
    FUN_00974860(&DAT_01b7c060);
    return;
  case 4:
    FUN_00973df0();
    return;
  case 5:
    FUN_00973e30();
    return;
  case 6:
    FUN_00971e70();
    return;
  }
  return;
}

// 00A1AAA0  FUN_00a1aaa0  size=98  [callgraph]
void FUN_00a1aaa0(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  switch(param_3) {
  case 0:
    FUN_00981200(&DAT_01b7c060);
    break;
  case 1:
    FUN_009812b0();
    return;
  case 2:
    FUN_0097d450();
    return;
  case 3:
    FUN_00981300(&DAT_01b7c060);
    return;
  case 4:
    FUN_00980980(param_2);
    return;
  case 5:
    FUN_009800f0();
    return;
  case 6:
    FUN_0097d4c0();
    return;
  }
  return;
}

// 00A1AB40  FUN_00a1ab40  size=130  [callgraph]
void FUN_00a1ab40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5)

{
  switch(param_4) {
  case 0:
    FUN_00a1a8e0(param_3,param_2,param_5);
    break;
  case 1:
    FUN_00a1a980(param_3,param_2,param_5);
    return;
  case 2:
    FUN_00a1aa20(param_3,param_2,param_5);
    return;
  case 3:
    FUN_00a1aaa0(param_3,param_2,param_5);
    return;
  case 4:
    if ((short)param_5 == 0) {
      FUN_00973f30();
      return;
    }
  }
  return;
}

// 00A1ABE0  FUN_00a1abe0  size=41  [callgraph]
undefined4 __thiscall FUN_00a1abe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x1c)) = param_2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  return 1;
}

// 00A1AC50  FUN_00a1ac50  size=19  [callgraph]
void __fastcall FUN_00a1ac50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A1AC70  FUN_00a1ac70  size=39  [callgraph]
void __fastcall FUN_00a1ac70(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A1ACA0  FUN_00a1aca0  size=117  [callgraph]
undefined4 __thiscall FUN_00a1aca0(int param_1,uint param_2,void *param_3,size_t param_4)

{
  uint _Size;
  int iVar1;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    _Size = *(uint *)(param_1 + 0xc) - param_2;
    if (param_4 <= _Size) {
      _Size = param_4;
    }
    FID_conflict__memcpy((void *)(*(int *)(param_1 + 4) + param_2),param_3,_Size);
    if (param_4 <= _Size) {
      return 1;
    }
    param_2 = param_2 + _Size;
    param_3 = (void *)((int)param_3 + _Size);
    param_4 = param_4 - _Size;
  }
  if (param_4 != 0) {
    iVar1 = param_2 - *(int *)(param_1 + 0xc);
    if (*(uint *)(param_1 + 0x10) < iVar1 + param_4) {
      return 0;
    }
    FID_conflict__memcpy((void *)(*(int *)(param_1 + 8) + iVar1),param_3,param_4);
  }
  return 1;
}

// 00A1AD60  FUN_00a1ad60  size=110  [callgraph]
undefined4 * __fastcall FUN_00a1ad60(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[4] = 0xffffffff;
  param_1[6] = 0xffffffff;
  _memset(param_1 + 0x14,0,0x60);
  return param_1;
}

// 00A1AE60  FUN_00a1ae60  size=72  [callgraph]
void FUN_00a1ae60(int param_1,int param_2)

{
  int *piVar1;
  
  if (((*(int *)(param_2 + 0xe4) != 0) && ((*(uint *)(param_1 + 0x4b4) & 0xf0000) == 0x20000)) &&
     (*(uint *)(param_1 + 0x4b4) != 0x20180)) {
    piVar1 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar1 + 0x34))(*(undefined4 *)(param_2 + 0xe0));
  }
  return;
}

// 00A1AEB0  FUN_00a1aeb0  size=73  [callgraph]
void FUN_00a1aeb0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  FUN_00a1a050();
  if ((*(int *)(param_1 + 0x4f0) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    if (param_2 != 0) {
      FUN_00a1ae60(param_1,param_3);
    }
    (**(code **)(*piVar1 + 0x1c8))();
  }
  return;
}

// 00A1AF00  FUN_00a1af00  size=280  [callgraph]
undefined4 __thiscall FUN_00a1af00(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_2 + 0x74);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_2 + 0x78);
  *(uint *)(param_1 + 0x24) = uVar2;
  uVar8 = -(uint)((int)((ulonglong)uVar2 * 0xc >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0xc);
  puVar4 = (uint *)FUN_00dd3580(-(uint)(0xfffffffb < uVar8) | uVar8 + 4,param_3);
  if (puVar4 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = puVar4 + 1;
    *puVar4 = uVar2;
    puVar4 = puVar5;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      *(undefined2 *)(puVar4 + 2) = 0xffff;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined2 *)((int)puVar4 + 10) = 0xffff;
      puVar4 = puVar4 + 3;
    }
  }
  *(uint **)(param_1 + 0x1c) = puVar5;
  if (puVar5 != (uint *)0x0) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x24) * 8;
    iVar6 = FUN_00dd3580(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,param_3);
    *(int *)(param_1 + 0x20) = iVar6;
    if (iVar6 != 0) {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x24)) {
        iVar10 = 0;
        puVar9 = (undefined2 *)(iVar1 + 6);
        do {
          puVar7 = (undefined4 *)(*(int *)(param_1 + 0x1c) + iVar10);
          *(undefined2 *)(puVar7 + 2) = 0xffff;
          puVar7[1] = 0;
          *(undefined2 *)((int)puVar7 + 10) = 0xffff;
          *puVar7 = 1;
          puVar7[1] = *(undefined4 *)(puVar9 + -3);
          *(undefined2 *)(puVar7 + 2) = puVar9[-1];
          iVar6 = iVar6 + 1;
          *(undefined2 *)((int)puVar7 + 10) = *puVar9;
          puVar9 = puVar9 + 4;
          iVar10 = iVar10 + 0xc;
        } while (iVar6 < *(int *)(param_1 + 0x24));
      }
      return 1;
    }
  }
  return 0;
}

// 00A1B020  FUN_00a1b020  size=136  [callgraph]
undefined4 __thiscall
FUN_00a1b020(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x4f0);
  iVar1 = FUN_00c1d6c0();
  if (((((iVar1 == 0) && (iVar2 != 0)) && (iVar2 = FUN_00a7c7e0(), iVar2 != 0)) &&
      (((*(byte *)(param_2 + 0x4c0) & 1) != 0 && (param_1[5] != 0)))) && (param_1[4] == -1)) {
    if (param_6 == 0) {
      iVar2 = *(int *)(param_1[5] + 0xd4);
      if ((iVar2 != -1) && (iVar2 == param_5)) {
        return 0;
      }
      if (*param_1 != 0) {
        return 0;
      }
      if (param_4 == 0) {
        if (param_1[1] == 0) {
          return 0;
        }
      }
      else if (param_1[2] == 0) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

// 00A1B0B0  FUN_00a1b0b0  size=137  [callgraph]
undefined4 __thiscall
FUN_00a1b0b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined1 local_100 [252];
  
  FUN_00d93a30();
  FUN_00d8b880(local_100,param_3,param_4,param_5);
  if ((*(int *)(param_1 + 0x38) != 0) && (iVar2 = 0, 0 < *(int *)(param_1 + 0x3c))) {
    do {
      iVar1 = FUN_009748a0(param_2,local_100);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x3c));
  }
  return 0;
}

// 00A1B140  FUN_00a1b140  size=174  [callgraph]
undefined4 __thiscall FUN_00a1b140(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar4 = 0;
    do {
      iVar1 = FUN_00973ee0(*(undefined4 *)(param_1 + 0x40),&DAT_01b7c060);
      if (iVar1 == 0) {
        FUN_00a1a050();
        if (*(int *)(param_2 + 0x4f0) != 0) {
          piVar2 = (int *)FUN_00a7c8a0();
          if (piVar2 != (int *)0x0) {
            if (((*(int *)(param_3 + 0xe4) != 0) &&
                ((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000)) &&
               (*(uint *)(param_2 + 0x4b4) != 0x20180)) {
              piVar3 = (int *)FUN_00c1b9a0();
              (**(code **)(*piVar3 + 0x34))(*(undefined4 *)(param_3 + 0xe0));
            }
            (**(code **)(*piVar2 + 0x1c8))();
          }
        }
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x3c));
  }
  return 1;
}

// 00A1B1F0  FUN_00a1b1f0  size=178  [callgraph]
undefined4 __thiscall FUN_00a1b1f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar4 = 0;
    do {
      iVar1 = FUN_009814c0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x14),
                           &DAT_01b7c060);
      if (iVar1 == 0) {
        FUN_00a1a050();
        if (*(int *)(param_2 + 0x4f0) != 0) {
          piVar2 = (int *)FUN_00a7c8a0();
          if (piVar2 != (int *)0x0) {
            if (((*(int *)(param_3 + 0xe4) != 0) &&
                ((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000)) &&
               (*(uint *)(param_2 + 0x4b4) != 0x20180)) {
              piVar3 = (int *)FUN_00c1b9a0();
              (**(code **)(*piVar3 + 0x34))(*(undefined4 *)(param_3 + 0xe0));
            }
            (**(code **)(*piVar2 + 0x1c8))();
          }
        }
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  return 1;
}

// 00A1B2B0  HoldEntitySignalContext::HoldEntitySignalContext  size=669  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
HoldEntitySignalContext::HoldEntitySignalContext(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined **local_c;
  undefined4 local_8;
  int local_4;
  
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    do {
      FUN_00971fc0();
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x3c));
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    piVar10 = (int *)(*(int *)(param_1 + 0x20) + 4);
    do {
      if (*piVar10 == 2) {
        if (*(int *)(param_1 + 0x2c) < 1) goto LAB_00a1b354;
        iVar11 = 0;
        goto LAB_00a1b330;
      }
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 2;
    } while (iVar11 < *(int *)(param_1 + 0x24));
  }
  FUN_00a1a050();
  if ((param_2[0x13c] != 0) && (piVar10 = (int *)FUN_00a7c8a0(), piVar10 != (int *)0x0)) {
    (**(code **)(*piVar10 + 0x1c8))();
  }
  return 0;
  while (iVar11 = iVar11 + 1, iVar11 < *(int *)(param_1 + 0x2c)) {
LAB_00a1b330:
    iVar6 = FUN_00981360(*(undefined4 *)(param_1 + 0x14),&DAT_01b7c060);
    if (iVar6 == 0) goto LAB_00a1b3e4;
  }
LAB_00a1b354:
  iVar11 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(iVar11 + 0x90);
  uVar1 = *(undefined4 *)(iVar11 + 0x3c);
  uVar2 = *(uint *)(iVar11 + 0x94);
  uVar3 = *(undefined4 *)(iVar11 + 0x80);
  uVar4 = *(undefined4 *)(iVar11 + 0x84);
  iVar7 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 0x98 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 0x98),&DAT_01b7c060);
  uVar5 = uVar2;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    while (-1 < (int)(uVar5 - 1)) {
      FUN_0097b8e0();
      uVar5 = uVar5 - 1;
    }
  }
  *(int *)(param_1 + 0x30) = iVar7;
  if (iVar7 != 0) {
    iVar7 = 0;
    if (0 < (int)uVar2) {
      iVar12 = 0;
      do {
        iVar9 = FUN_00980a70(iVar6,iVar7,*(undefined4 *)(param_1 + 0x28),uVar1,param_1 + 0x50,
                             &DAT_01b7c060);
        if (iVar9 == 0) goto LAB_00a1b3e4;
        iVar9 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar9 + 0x34 + iVar12) = uVar3;
        *(undefined4 *)(iVar9 + 0x38 + iVar12) = uVar4;
        FUN_0097b920(iVar11 + 0xe0);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x50;
        iVar12 = iVar12 + 0x98;
      } while (iVar7 < (int)uVar2);
    }
    *(uint *)(param_1 + 0x34) = uVar2;
    local_8 = 0;
    local_4 = param_2[0x13c];
    local_c = vftable;
    FUN_00d89e90(0xe,&local_c);
    (**(code **)(*param_2 + 0x2c))();
    local_8 = _DAT_0189f040;
    FUN_00d89e90(0x11,&local_c);
    FUN_00e5ca80(param_2,0x41100000);
    FUN_009f8c10(0);
    return 1;
  }
LAB_00a1b3e4:
  FUN_00dd5650(&DAT_0165cb44);
  FUN_00a1a050();
  if ((param_2[0x13c] != 0) && (piVar10 = (int *)FUN_00a7c8a0(), piVar10 != (int *)0x0)) {
    if ((*(int *)(param_3 + 0xe4) != 0) &&
       (((param_2[0x12d] & 0xf0000U) == 0x20000 && (param_2[0x12d] != 0x20180)))) {
      piVar8 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar8 + 0x34))(*(undefined4 *)(param_3 + 0xe0));
    }
    (**(code **)(*piVar10 + 0x1c8))();
  }
  return 0;
}

// 00A1B550  HoldEntitySignalContext::HoldEntitySignalContext_2  size=512  [class]
void __thiscall
HoldEntitySignalContext::HoldEntitySignalContext_2(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float unaff_EBX;
  float unaff_ESI;
  int iVar2;
  float *pfVar3;
  float local_e4;
  float local_e0;
  undefined **local_dc;
  float local_d8;
  undefined **local_d4;
  float local_d0;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac [8];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_6c [44];
  undefined4 uStack_40;
  float *pfStack_34;
  undefined **ppuStack_2c;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    iVar2 = 0;
    local_c0 = 3.4028235e+38;
    local_e4 = -NAN;
    local_bc = 3.4028235e+38;
    local_b8 = 3.4028235e+38;
    local_b4 = 0x3f800000;
    local_b0 = -3.4028235e+38;
    local_ac[0] = -3.4028235e+38;
    local_ac[1] = -3.4028235e+38;
    local_ac[2] = 1.0;
    if (0 < *(int *)(param_1 + 0x3c)) {
      do {
        FUN_00972000(&local_b0,&local_c0,*(undefined4 *)(param_1 + 0x40),&local_e4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x3c));
      if (local_e4 != -NAN) {
        FUN_009dbcf0();
        local_d0 = (local_b0 - local_c0) * 0.5;
        local_c8 = (local_ac[1] - local_b8) * 0.5;
        local_e0 = local_c0 + local_d0;
        local_dc = (undefined **)(local_bc + (local_ac[0] - local_bc) * 0.5);
        local_d8 = local_c8 + local_b8;
        local_d4 = (undefined **)0x3f800000;
        D3DXVec4Transform(&local_e0,&local_e0,param_3);
        fVar1 = (float)local_d4 * -1.0;
        pfVar3 = local_ac;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar3 = *param_3;
          param_3 = param_3 + 1;
          pfVar3 = pfVar3 + 1;
        }
        fStack_7c = unaff_ESI + fStack_8c * fVar1;
        fStack_78 = unaff_EBX + fStack_88 * fVar1;
        local_e4 = local_e4 + fStack_84 * fVar1;
        local_e0 = local_c0 * fVar1 + local_e0;
        fStack_74 = local_e4;
        FUN_009dbd80(param_2);
        pfStack_34 = local_ac;
        ppuStack_2c = local_d4;
        if ((float)local_d4 < (float)local_dc) {
          ppuStack_2c = local_dc;
        }
        uStack_40 = 0;
        FUN_009f26b0(auStack_6c);
        local_d4 = *(undefined ***)(param_2 + 0x4f0);
        local_d8 = 0.0;
        local_dc = vftable;
        FUN_00d89e90(0x10,&local_dc);
      }
    }
  }
  return;
}

// 00A1B750  FUN_00a1b750  size=381  [callgraph]
void __thiscall FUN_00a1b750(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_c;
  
  InterlockedIncrement(&DAT_01dc5558);
  uVar1 = DAT_01dc5558;
  iVar7 = 0;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x3c) == 0) {
    local_c = 0;
  }
  else {
    local_c = FUN_00a04a00();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0xcc);
  if (0 < *(int *)(param_1 + 0xb4)) {
    while (((iVar2 = FUN_00d8bc90(*(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar7 * 4)), iVar2 != 0
            && (iVar3 = FUN_00a15070(local_c,&DAT_01b7f860), iVar3 != 0)) &&
           (iVar2 = FUN_00a0fdc0(iVar2,iVar4 + 1,uVar1,*(undefined4 *)(param_3 + 0xe0)), iVar2 != 0)
           )) {
      iVar7 = iVar7 + 1;
      if (*(int *)(param_1 + 0xb4) <= iVar7) {
        return;
      }
    }
    FUN_00dd5650(&DAT_0165cb70);
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0xb4)) {
      do {
        iVar4 = FUN_00d8bc90(*(undefined4 *)(*(int *)(param_1 + 0xb0) + iVar7 * 4));
        if (iVar4 != 0) {
          FUN_00a06770();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0xb4));
    }
    FUN_00a07130();
    FUN_00a1a050();
    if ((*(int *)(param_2 + 0x4f0) != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0))
    {
      if ((*(int *)(param_3 + 0xe4) != 0) &&
         (((*(uint *)(param_2 + 0x4b4) & 0xf0000) == 0x20000 &&
          (*(uint *)(param_2 + 0x4b4) != 0x20180)))) {
        piVar6 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar6 + 0x34))(*(undefined4 *)(param_3 + 0xe0));
      }
      (**(code **)(*piVar5 + 0x1c8))();
    }
  }
  return;
}

