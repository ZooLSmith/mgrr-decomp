// src/unsorted/unit_00D4D890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4D890..00D4E290, 23 functions

#include "types.h"

// 00D4D890  FUN_00d4d890  size=137  [run]
void __fastcall FUN_00d4d890(undefined4 *param_1)

{
  undefined4 local_14;
  
  *param_1 = 0;
  param_1[0x1f] = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[3] = local_14;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = local_14;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = local_14;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  return;
}

// 00D4D920  FUN_00d4d920  size=389  [run]
void __fastcall FUN_00d4d920(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *apcStack_24 [4];
  char *pcStack_14;
  char *pcStack_10;
  char *pcStack_c;
  char *pcStack_8;
  
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 0x34) & 0xf00;
    if ((uVar4 != 0xc00) && (uVar4 != 0xd00)) {
      if ((DAT_01bea004 == 0) && ((DAT_01bea000 == DAT_01be9ffc && (*DAT_01be9ff4 == 0x13007)))) {
        piVar2 = (int *)FUN_00c209f0();
        (**(code **)(*piVar2 + 0x14))(0x11);
        return;
      }
      if ((DAT_01bea090 & 0x80000000) != 0) {
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          uVar5 = FUN_00a7c8a0(0xffffffff,0);
          FUN_00e5e0c0("Comct000_101010",uVar5);
          return;
        }
        uVar5 = FUN_00a7c8a0(0xffffffff,0);
        FUN_00e5e0c0("Comct000_111010",uVar5);
        return;
      }
      if (*(uint *)(param_1 + 0x34) == 0x310) {
        sVar1 = FUN_00dde2d0(0,1);
        uVar5 = FUN_00a7c8a0(0xffffffff,0);
        FUN_00e5e0c0(*(undefined4 *)(&stack0xffffffd4 + sVar1 * 4),uVar5);
        return;
      }
      apcStack_24[0] = "Comct000_101010";
      apcStack_24[1] = "Comct000_111010";
      apcStack_24[2] = "Comnz500_131010";
      apcStack_24[3] = "Comnz500_141010";
      pcStack_14 = "Comnz500_181010";
      pcStack_10 = "Comnz500_161010";
      pcStack_c = "Comnz500_171010";
      pcStack_8 = "Comnz500_181010";
      sVar1 = FUN_00dde2d0(0,7);
      uVar5 = FUN_00a7c8a0(0xffffffff,0);
      FUN_00e5e0c0(apcStack_24[sVar1],uVar5);
    }
  }
  return;
}

// 00D4DAB0  FUN_00d4dab0  size=81  [run]
undefined4 __fastcall FUN_00d4dab0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb8) != -1) {
    iVar1 = (**(code **)(*DAT_01dc51c0 + 0x1c))();
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = (**(code **)(*DAT_01dc51c0 + 4))();
    if (*(int *)(param_1 + 0xb8) != iVar1) {
      (**(code **)(*DAT_01dc51c0 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 4) = 2;
  return 1;
}

// 00D4DB10  FUN_00d4db10  size=87  [run]
undefined4 __fastcall FUN_00d4db10(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xb8) != -1) &&
     (iVar1 = (**(code **)(*DAT_01dc51c0 + 4))(), *(int *)(param_1 + 0xb8) != iVar1)) {
    iVar1 = (**(code **)(*DAT_01dc51c0 + 0x18))();
    if (iVar1 == 0) {
      return 0;
    }
    (**(code **)(*DAT_01dc51c0 + 8))(*(undefined4 *)(param_1 + 0xb8),0,0,0);
  }
  *(undefined4 *)(param_1 + 4) = 3;
  return 0;
}

// 00D4DB70  FUN_00d4db70  size=126  [run]
undefined4 __fastcall FUN_00d4db70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4c770(0xfffffffe);
  if (iVar1 != 0) {
    iVar1 = FUN_00a496e0();
    if (iVar1 == 0) {
      iVar1 = FUN_00a4c760();
      if (iVar1 != 0) {
        iVar1 = FUN_00cac330();
        if (iVar1 != 0) {
          iVar1 = FUN_00cad950();
          if (iVar1 != 0) {
            iVar1 = FUN_00a00ca0(0x40001,0);
            if (iVar1 != 0) {
              FUN_00962600(DAT_01be8e40,*(undefined4 *)(param_1 + 0x34));
              *(undefined4 *)(param_1 + 4) = 6;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00D4DBF0  FUN_00d4dbf0  size=68  [run]
undefined4 __fastcall FUN_00d4dbf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0095c020();
  if (iVar1 != 0) {
    iVar1 = FUN_00ca5a30();
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x1f8) != 0)) {
      *(undefined4 *)(param_1 + 0x1f8) = 0;
      FUN_00a50280();
      *(undefined4 *)(param_1 + 4) = 7;
      return 1;
    }
  }
  return 0;
}

// 00D4DC40  FUN_00d4dc40  size=72  [run]
undefined4 __fastcall FUN_00d4dc40(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a4c810(0xfffffffe);
  if (iVar1 != 0) {
    iVar1 = FUN_00a65f70();
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xb8);
      if (iVar1 != -1) {
        piVar2 = (int *)FUN_00a6dd90();
        (**(code **)(*piVar2 + 0x10))(iVar1);
      }
      *(undefined4 *)(param_1 + 4) = 8;
    }
  }
  return 0;
}

// 00D4DC90  FUN_00d4dc90  size=115  [run]
undefined4 __fastcall FUN_00d4dc90(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  FUN_00c12640();
  if (*(int *)(param_1 + 0x34) != -1) {
    iVar2 = FUN_00a4c810(0xfffffffe);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_00d44b90(*(undefined4 *)(param_1 + 0x34));
    if ((*param_1 & 0x80) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      piVar3 = (int *)FUN_00c18350();
      (**(code **)(*piVar3 + 0x30))(uVar1,param_1 + 0x3c);
      piVar3 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar3 + 0x20))(uVar1,param_1 + 0x3c);
    }
    FUN_00a61470();
  }
  param_1[4] = 0xb;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return 0;
}

// 00D4DD10  FUN_00d4dd10  size=101  [run]
undefined4 __fastcall FUN_00d4dd10(uint *param_1)

{
  if ((*param_1 & 2) != 0) {
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    if (param_1[0xd] != 0xffffffff) {
      (**(code **)(*DAT_01dc51c0 + 0x10))();
    }
    param_1[1] = 0x10;
    return 0;
  }
  if (((DAT_01be9218 != 0x101) && (DAT_01be9218 != 0x100)) && ((*param_1 & 0x90) == 0)) {
    param_1[1] = 0xe;
    return 0;
  }
  param_1[1] = 0xc;
  return 0;
}

// 00D4DD80  FUN_00d4dd80  size=24  [run]
undefined4 __fastcall FUN_00d4dd80(int param_1)

{
  FUN_00a50650();
  *(undefined4 *)(param_1 + 4) = 0xd;
  return 0;
}

// 00D4DDA0  FUN_00d4dda0  size=33  [run]
undefined4 __fastcall FUN_00d4dda0(int param_1)

{
  if (*(int *)(param_1 + 0x34) != -1) {
    (**(code **)(*DAT_01dc51c0 + 0x10))();
  }
  *(undefined4 *)(param_1 + 4) = 0x10;
  return 0;
}

// 00D4DDD0  FUN_00d4ddd0  size=24  [run]
undefined4 __fastcall FUN_00d4ddd0(int param_1)

{
  FUN_00a496c0();
  *(undefined4 *)(param_1 + 4) = 0xf;
  return 0;
}

// 00D4DDF0  FUN_00d4ddf0  size=47  [run]
undefined4 __fastcall FUN_00d4ddf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a496d0();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x34) != -1) {
      (**(code **)(*DAT_01dc51c0 + 0x10))();
    }
    *(undefined4 *)(param_1 + 4) = 0x10;
  }
  return 0;
}

// 00D4DE20  FUN_00d4de20  size=42  [run]
undefined4 __fastcall FUN_00d4de20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x34) != -1) {
    iVar1 = (**(code **)(*DAT_01dc51c0 + 0x18))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0x11;
  return 1;
}

// 00D4DE50  FUN_00d4de50  size=192  [run]
undefined4 __fastcall FUN_00d4de50(byte *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c18350();
  iVar2 = (**(code **)(*piVar1 + 0x1c))();
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 4) = *param_1 & 2;
  if (DAT_01be9218 == 0x101) {
    param_1[0xe4] = 0xff;
    param_1[0xe5] = 0xff;
    param_1[0xe6] = 0xff;
    param_1[0xe7] = 0xff;
    param_1[0xe8] = 0;
    param_1[0xe9] = 0;
    param_1[0xea] = 0;
    param_1[0xeb] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    param_1[0x10e] = 0;
    param_1[0x10f] = 0;
    param_1[0xec] = 0;
    param_1[0xed] = 0;
    param_1[0xee] = 0;
    param_1[0xef] = 0;
    param_1[0xf0] = 0;
    param_1[0xf1] = 0;
    param_1[0xf2] = 0;
    param_1[0xf3] = 0;
    param_1[0xf4] = 0;
    param_1[0xf5] = 0;
    param_1[0xf6] = 0;
    param_1[0xf7] = 0;
    param_1[0xf8] = 0;
    param_1[0xf9] = 0;
    param_1[0xfa] = 0;
    param_1[0xfb] = 0;
    param_1[0xfc] = 0;
    param_1[0xfd] = 0;
    param_1[0xfe] = 0;
    param_1[0xff] = 0;
    param_1[0x100] = 0;
    param_1[0x101] = 0;
    param_1[0x102] = 0;
    param_1[0x103] = 0;
    param_1[0x104] = 0;
    param_1[0x105] = 0;
    param_1[0x106] = 0;
    param_1[0x107] = 0;
    param_1[0x108] = 0;
    param_1[0x109] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x8c] = 0xff;
    param_1[0x8d] = 0xff;
    param_1[0x8e] = 0xff;
    param_1[0x8f] = 0xff;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
  }
  return 1;
}

// 00D4DF10  FUN_00d4df10  size=45  [run]
undefined4 __fastcall FUN_00d4df10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4c770(0xfffffffe);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a50280();
  *(undefined4 *)(param_1 + 4) = 0x15;
  return 1;
}

// 00D4DF40  FUN_00d4df40  size=35  [run]
undefined4 __fastcall FUN_00d4df40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4c810(0xfffffffe);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = 0x16;
  return 1;
}

// 00D4DF70  FUN_00d4df70  size=147  [run]
void __thiscall FUN_00d4df70(int param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  
  if (param_3 == (char *)0x0) {
    param_3 = (char *)FUN_00d45a20(param_2);
  }
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  *(undefined4 *)(param_1 + 0xb4) = 1;
  if (param_3 == (char *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  else {
    uVar1 = FUN_00e03ea0(param_3);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
    _strcpy_s((char *)(param_1 + 0x94),0x20,param_3);
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xb4);
  FID_conflict__memcpy((void *)(param_1 + 0x68),(void *)(param_1 + 0x94),0x20);
  return;
}

// 00D4E010  FUN_00d4e010  size=282  [run]
void __fastcall FUN_00d4e010(int param_1)

{
  char *_Src;
  
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x88);
  FID_conflict__memcpy((void *)(param_1 + 0xc0),(undefined4 *)(param_1 + 0x68),0x20);
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (*(int *)(param_1 + 0xb8) == -1) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x5c);
    FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x3c),0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xe0);
    FID_conflict__memcpy((void *)(param_1 + 0x3c),(void *)(param_1 + 0xc0),0x20);
    *(undefined4 *)(param_1 + 4) = 4;
    return;
  }
  if (param_1 == -0xc0) {
    _Src = (char *)FUN_00d45a20(*(int *)(param_1 + 0xb8));
    if (_Src != (char *)0x0) {
      uRamfffffffc = FUN_00e03ea0(_Src);
      _strcpy_s((char *)0x0,0x20,_Src);
      uRamffffff44 = 1;
      return;
    }
    uRamfffffffc = 0;
    DAT_00000000 = 0;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

// 00D4E130  FUN_00d4e130  size=11  [run]
void __fastcall FUN_00d4e130(uint *param_1)

{
  *param_1 = *param_1 & 0xfffffffd;
  param_1[1] = 10;
  return;
}

// 00D4E140  FUN_00d4e140  size=161  [run]
void __thiscall FUN_00d4e140(uint *param_1,uint param_2,char *param_3,uint param_4)

{
  uint uVar1;
  
  if ((DAT_01bea060 & 0x20000000) == 0) {
    param_1[0x2e] = param_2;
    param_1[0x38] = param_4;
    if (param_3 == (char *)0x0) {
      param_1[0x2f] = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    else {
      uVar1 = FUN_00e03ea0(param_3);
      param_1[0x2f] = uVar1;
      _strcpy_s((char *)(param_1 + 0x30),0x20,param_3);
    }
    *param_1 = *param_1 | 2;
    param_1[0x18] = param_1[0x2e];
    param_1[0x19] = param_1[0x2f];
    param_1[0x22] = param_1[0x38];
    FID_conflict__memcpy(param_1 + 0x1a,param_1 + 0x30,0x20);
    param_1[1] = 10;
  }
  return;
}

// 00D4E1F0  FUN_00d4e1f0  size=117  [run]
void __thiscall FUN_00d4e1f0(uint *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  
  if ((DAT_01bea060 & 0x20000000) == 0) {
    param_1[0x2e] = param_1[0xd];
    param_1[0x38] = param_3;
    if (param_2 != (char *)0x0) {
      uVar1 = FUN_00e03ea0(param_2);
      param_1[0x2f] = uVar1;
      _strcpy_s((char *)(param_1 + 0x30),0x20,param_2);
      *param_1 = *param_1 | 4;
      param_1[1] = 0x12;
      return;
    }
    param_1[0x2f] = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *param_1 = *param_1 | 4;
    param_1[1] = 0x12;
  }
  return;
}

// 00D4E290  FUN_00d4e290  size=6  [run]
void __fastcall FUN_00d4e290(uint *param_1)

{
  *param_1 = *param_1 | 0x20;
  return;
}

