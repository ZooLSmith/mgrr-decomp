// src/effect/cEspControler.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8C7B0..00EAA9B0, 31 functions

#include "mgrr.h"
#include "cEspControler.h"

// 00A8C7B0  cEspControler::vf00  size=100  [class]
int __thiscall cEspControler::vf00(int param_1,byte param_2)

{
  int iVar1;
  
  if ((param_2 & 2) == 0) {
    ~cEspControler();
    if ((param_2 & 1) != 0) {
      FUN_00dd4920(param_1);
    }
    return param_1;
  }
  iVar1 = *(int *)(param_1 + -0x10);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    ~cEspControler();
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4940(param_1 + -0x10);
  }
  return param_1 + -0x10;
}

// 00A8C820  FUN_00a8c820  size=109  [callgraph]
void __fastcall FUN_00a8c820(int param_1)

{
  undefined4 *puVar1;
  
  if (*(undefined4 **)(param_1 + 0x798) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x798))(1);
    *(undefined4 *)(param_1 + 0x798) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x79c);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-4] == 0) {
      FUN_00dd4940(puVar1 + -4);
    }
    else {
      (**(code **)*puVar1)(3);
    }
    *(undefined4 *)(param_1 + 0x79c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x7a0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7a0))(1);
    *(undefined4 *)(param_1 + 0x7a0) = 0;
  }
  return;
}

// 00A8C890  FUN_00a8c890  size=19  [callgraph]
int __thiscall FUN_00a8c890(int param_1,int param_2)

{
  return param_2 * 0xb0 + *(int *)(param_1 + 0x79c);
}

// 00A8C8B0  FUN_00a8c8b0  size=120  [callgraph]
void __thiscall FUN_00a8c8b0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_3 + 0x144) != -1) && (*(int *)(param_1 + 0x7a0) != 0)) {
    local_1c = *(undefined4 *)(param_3 + 0x140);
    local_8 = 0;
    local_4 = 0;
    local_10 = *(undefined4 *)(param_3 + 0x110);
    local_18 = param_2;
    local_c = *(int *)(param_3 + 0x144);
    (**(code **)(**(int **)(param_1 + 0x7a0) + 8))(&local_1c);
  }
  uVar1 = FUN_00e00260(param_2);
  FUN_00e00fb0(uVar1,*(undefined4 *)(param_3 + 0x110),param_3);
  return;
}

// 00A8C930  FUN_00a8c930  size=128  [callgraph]
void __thiscall FUN_00a8c930(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_3 + 0x144) != -1) && (*(int *)(param_1 + 0x7a0) != 0)) {
    local_1c[0] = *(undefined4 *)(param_3 + 0x140);
    local_8 = 0;
    local_4 = 0;
    local_10 = *(undefined4 *)(param_3 + 0x110);
    local_14 = param_2;
    local_c = *(int *)(param_3 + 0x144);
    (**(code **)(**(int **)(param_1 + 0x7a0) + 8))(local_1c);
  }
  FUN_00e010c0(param_2,*(undefined4 *)(param_3 + 0x110),param_3 + 0x120,param_3 + 0x130,param_3);
  return;
}

// 00A8C9B0  FUN_00a8c9b0  size=53  [callgraph]
void __thiscall
FUN_00a8c9b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  if (*(int *)(param_1 + 0x79c) != 0) {
    FUN_00eaa5b0(param_3,param_4,param_5);
  }
  return;
}

// 00A8C9F0  FUN_00a8c9f0  size=90  [callgraph]
void __thiscall FUN_00a8c9f0(int param_1,int *param_2)

{
  if (*param_2 == -1) {
    FUN_00dffd60(param_2[5],param_2[6],param_2[3]);
  }
  else if (*(int *)(param_1 + 0x79c) != 0) {
    FUN_00eaa5b0(param_2[3],param_2[5],param_2[6]);
    return;
  }
  return;
}

// 00A8CA50  FUN_00a8ca50  size=41  [callgraph]
void __thiscall FUN_00a8ca50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x79c) != 0) {
    FUN_00eaa5b0(param_2,param_3,param_4);
  }
  return;
}

// 00A8CA80  FUN_00a8ca80  size=48  [callgraph]
void __thiscall FUN_00a8ca80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x79c) != 0) {
    FUN_00eaa6e0(param_3,param_4);
  }
  return;
}

// 00EAA060  cEspControler::cEspControler  size=185  [class]
undefined4 * __fastcall cEspControler::cEspControler(undefined4 *param_1)

{
  int iVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = vftable;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
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
  param_1[0x24] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x27] = 0xdeedbeef;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (param_1[0x27] != -0x54325433) {
    param_1[0x27] = 0xabcdabcd;
    param_1[0x26] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      param_1[0x1a] = 0;
      return param_1;
    }
  }
  return param_1;
}

// 00EAA120  cEspControler::cEspControler_2  size=100  [class]
undefined4 * __thiscall cEspControler::cEspControler_2(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  param_1[9] = param_2;
  *param_1 = vftable;
  param_1[0x1a] = 0;
  param_1[0x24] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (param_1[0x27] != -0x54325433) {
    param_1[0x27] = 0xabcdabcd;
    param_1[0x26] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    iVar1 = FUN_00dd7240();
    if (iVar1 != 0) {
      param_1[0x1a] = 0;
      return param_1;
    }
  }
  return param_1;
}

// 00EAA190  FUN_00eaa190  size=71  [between]
void __thiscall FUN_00eaa190(int param_1,int param_2)

{
  EspReadWriteLock::enterWrite();
  if (*(int *)(param_1 + 0x98) != 0) {
    *(int *)(*(int *)(param_1 + 0x98) + 0x1c) = param_2;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x98);
  }
  *(int *)(param_1 + 0x98) = param_2;
  InterlockedIncrement((LONG *)(param_1 + 0xa4));
  FUN_00eaac50();
  return;
}

// 00EAA1E0  FUN_00eaa1e0  size=115  [between]
void __thiscall FUN_00eaa1e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  EspReadWriteLock::enterWrite();
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x98) != param_2) {
        FUN_00eaac50();
        return;
      }
      goto LAB_00eaa21e;
    }
  }
  else {
    *(int *)(iVar1 + 0x1c) = iVar2;
    if (iVar2 == 0) goto LAB_00eaa21e;
  }
  *(int *)(iVar2 + 0x20) = iVar1;
LAB_00eaa21e:
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (*(int *)(param_1 + 0x98) == param_2) {
    *(int *)(param_1 + 0x98) = iVar1;
  }
  InterlockedDecrement((LONG *)(param_1 + 0xa4));
  FUN_00eaac50();
  return;
}

// 00EAA260  FUN_00eaa260  size=76  [between]
void FUN_00eaa260(int param_1,int param_2)

{
  if (param_1 != 0) {
    EspReadWriteLock::enterWrite();
    if (*(int *)(param_1 + 0x98) != 0) {
      *(int *)(*(int *)(param_1 + 0x98) + 0x1c) = param_2;
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x98);
    }
    *(int *)(param_1 + 0x98) = param_2;
    InterlockedIncrement((LONG *)(param_1 + 0xa4));
    FUN_00eaac50();
    return;
  }
  return;
}

// 00EAA2B0  FUN_00eaa2b0  size=21  [between]
void FUN_00eaa2b0(int param_1)

{
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_00eaa1e0(param_1);
  }
  return;
}

// 00EAA2D0  FUN_00eaa2d0  size=144  [between]
void __thiscall FUN_00eaa2d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  EspReadWriteLock::enterWrite();
  iVar1 = *(int *)(param_1 + 0x98);
  do {
    do {
      iVar4 = iVar1;
      if (iVar4 == 0) {
        FUN_00eaac50();
        return;
      }
      iVar1 = *(int *)(iVar4 + 0x20);
    } while (*(int *)(iVar4 + 0x78) != param_2);
    EspReadWriteLock::enterWrite();
    iVar2 = *(int *)(iVar4 + 0x20);
    iVar3 = *(int *)(iVar4 + 0x1c);
    if (iVar2 == 0) {
      if (iVar3 != 0) {
LAB_00eaa325:
        *(int *)(iVar3 + 0x20) = iVar2;
        goto LAB_00eaa328;
      }
      if (*(int *)(param_1 + 0x98) == iVar4) goto LAB_00eaa328;
    }
    else {
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 != 0) goto LAB_00eaa325;
LAB_00eaa328:
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      if (*(int *)(param_1 + 0x98) == iVar4) {
        *(int *)(param_1 + 0x98) = iVar2;
      }
      InterlockedDecrement((LONG *)(param_1 + 0xa4));
    }
    FUN_00eaac50();
  } while( true );
}

// 00EAA370  FUN_00eaa370  size=144  [between]
void __thiscall FUN_00eaa370(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  EspReadWriteLock::enterWrite();
  iVar1 = *(int *)(param_1 + 0x98);
  do {
    do {
      iVar4 = iVar1;
      if (iVar4 == 0) {
        FUN_00eaac50();
        return;
      }
      iVar1 = *(int *)(iVar4 + 0x20);
    } while (*(int *)(iVar4 + 0x74) != param_2);
    EspReadWriteLock::enterWrite();
    iVar2 = *(int *)(iVar4 + 0x20);
    iVar3 = *(int *)(iVar4 + 0x1c);
    if (iVar2 == 0) {
      if (iVar3 != 0) {
LAB_00eaa3c5:
        *(int *)(iVar3 + 0x20) = iVar2;
        goto LAB_00eaa3c8;
      }
      if (*(int *)(param_1 + 0x98) == iVar4) goto LAB_00eaa3c8;
    }
    else {
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 != 0) goto LAB_00eaa3c5;
LAB_00eaa3c8:
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      if (*(int *)(param_1 + 0x98) == iVar4) {
        *(int *)(param_1 + 0x98) = iVar2;
      }
      InterlockedDecrement((LONG *)(param_1 + 0xa4));
    }
    FUN_00eaac50();
  } while( true );
}

// 00EAA410  FUN_00eaa410  size=153  [between]
void __thiscall FUN_00eaa410(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  EspReadWriteLock::enterWrite();
  iVar1 = *(int *)(param_1 + 0x98);
  do {
    do {
      iVar4 = iVar1;
      if (iVar4 == 0) {
        FUN_00eaac50();
        return;
      }
      iVar1 = *(int *)(iVar4 + 0x20);
    } while ((*(int *)(iVar4 + 0x74) != param_2) || (*(int *)(iVar4 + 0x78) != param_3));
    EspReadWriteLock::enterWrite();
    iVar2 = *(int *)(iVar4 + 0x20);
    iVar3 = *(int *)(iVar4 + 0x1c);
    if (iVar2 == 0) {
      if (iVar3 != 0) {
LAB_00eaa46e:
        *(int *)(iVar3 + 0x20) = iVar2;
        goto LAB_00eaa471;
      }
      if (*(int *)(param_1 + 0x98) == iVar4) goto LAB_00eaa471;
    }
    else {
      *(int *)(iVar2 + 0x1c) = iVar3;
      if (iVar3 != 0) goto LAB_00eaa46e;
LAB_00eaa471:
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      if (*(int *)(param_1 + 0x98) == iVar4) {
        *(int *)(param_1 + 0x98) = iVar2;
      }
      InterlockedDecrement((LONG *)(param_1 + 0xa4));
    }
    FUN_00eaac50();
  } while( true );
}

// 00EAA4B0  FUN_00eaa4b0  size=80  [between]
void __thiscall FUN_00eaa4b0(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_009df6d0();
  for (piVar1 = *(int **)(param_1 + 0x98); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    if (piVar1[0x1e] == param_2) {
      piVar1[0xc] = piVar1[0xc] | 0x80000000;
      (**(code **)(*piVar1 + 0xc))();
      piVar1[0xc] = piVar1[0xc] | 0x8000000;
    }
  }
  FUN_009df740();
  return;
}

// 00EAA500  FUN_00eaa500  size=80  [between]
void __thiscall FUN_00eaa500(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_009df6d0();
  for (piVar1 = *(int **)(param_1 + 0x98); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    if (piVar1[0x1d] == param_2) {
      piVar1[0xc] = piVar1[0xc] | 0x80000000;
      (**(code **)(*piVar1 + 0xc))();
      piVar1[0xc] = piVar1[0xc] | 0x8000000;
    }
  }
  FUN_009df740();
  return;
}

// 00EAA550  FUN_00eaa550  size=88  [between]
void __thiscall FUN_00eaa550(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  FUN_009df6d0();
  for (piVar1 = *(int **)(param_1 + 0x98); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
    if ((piVar1[0x1d] == param_2) && (piVar1[0x1e] == param_3)) {
      piVar1[0xc] = piVar1[0xc] | 0x80000000;
      (**(code **)(*piVar1 + 0xc))();
      piVar1[0xc] = piVar1[0xc] | 0x8000000;
    }
  }
  FUN_009df740();
  return;
}

// 00EAA5B0  FUN_00eaa5b0  size=91  [between]
void __thiscall FUN_00eaa5b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_009df6d0();
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) && (*(int *)(iVar1 + 0x78) == param_2)) {
      FUN_00edbe30(param_4,param_3);
    }
  }
  FUN_009df740();
  return;
}

// 00EAA610  FUN_00eaa610  size=91  [between]
void __thiscall FUN_00eaa610(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_009df6d0();
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) && (*(int *)(iVar1 + 0x74) == param_2)) {
      FUN_00edbe30(param_4,param_3);
    }
  }
  FUN_009df740();
  return;
}

// 00EAA670  FUN_00eaa670  size=99  [between]
void __thiscall
FUN_00eaa670(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  FUN_009df6d0();
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if ((((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) && (*(int *)(iVar1 + 0x74) == param_2)) &&
       (*(int *)(iVar1 + 0x78) == param_3)) {
      FUN_00edbe30(param_5,param_4);
    }
  }
  FUN_009df740();
  return;
}

// 00EAA6E0  FUN_00eaa6e0  size=94  [between]
void __thiscall FUN_00eaa6e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_009df6d0();
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if (((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) &&
       ((*(uint **)(iVar1 + 0x24) == (uint *)0x0 || ((**(uint **)(iVar1 + 0x24) & 0x8000) == 0)))) {
      FUN_00edbe30(param_3,param_2);
    }
  }
  FUN_009df740();
  return;
}

// 00EAA750  FUN_00eaa750  size=79  [between]
void __thiscall FUN_00eaa750(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_009df6d0();
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if ((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) {
      FUN_00edbe30(param_3,param_2);
    }
  }
  FUN_009df740();
  return;
}

// 00EAA7B0  FUN_00eaa7b0  size=135  [between]
void __thiscall
FUN_00eaa7b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  FUN_009df6d0();
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_6;
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if ((*(uint *)(iVar1 + 0x30) & 0xc0000000) == 0) {
      FUN_00ed4ca0(param_2,param_3,param_4,param_5,param_6);
    }
  }
  FUN_009df740();
  return;
}

// 00EAA840  FUN_00eaa840  size=124  [between]
void __fastcall FUN_00eaa840(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  EspReadWriteLock::enterWrite();
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x20);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x3b8) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    iVar1 = iVar2;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  piVar3 = (int *)(param_1 + 0xa4);
  do {
    iVar2 = *piVar3;
    LOCK();
    iVar1 = *piVar3;
    if (iVar2 == iVar1) {
      *piVar3 = 0;
    }
    UNLOCK();
  } while (iVar2 != iVar1);
  FUN_00eaac50();
  return;
}

// 00EAA8C0  FUN_00eaa8c0  size=143  [between]
void __thiscall FUN_00eaa8c0(int param_1,int param_2)

{
  int *piVar1;
  
  FUN_009df6d0();
  piVar1 = *(int **)(param_1 + 0x98);
  if (param_2 == 0) {
    if (piVar1 != (int *)0x0) {
      do {
        if ((*(int *)(param_1 + 0x24) == 6) || ((piVar1[0xe] & 0x400000U) == 0)) {
          piVar1[0xc] = piVar1[0xc] | 0x80000000;
          (**(code **)(*piVar1 + 0xc))();
          piVar1[0xc] = piVar1[0xc] | 0x8000000;
        }
        piVar1 = (int *)piVar1[8];
      } while (piVar1 != (int *)0x0);
      FUN_009df740();
      return;
    }
  }
  else {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
      piVar1[0xc] = piVar1[0xc] | 0x80000000;
      (**(code **)(*piVar1 + 0xc))();
      piVar1[0xc] = piVar1[0xc] | 0x8000000;
    }
  }
  FUN_009df740();
  return;
}

// 00EAA950  FUN_00eaa950  size=81  [between]
void __fastcall FUN_00eaa950(int param_1)

{
  if (*(int *)(param_1 + 0x9c) != -0x21124111) {
    if (*(int *)(param_1 + 0x9c) != -0x54325433) {
      FUN_00dd5650(&DAT_0163eef4);
      return;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      FUN_00eaa8c0(0);
      FUN_00eaa840();
      FUN_00dd7270();
      *(undefined4 *)(param_1 + 0x9c) = 0xdeedbeef;
    }
  }
  return;
}

// 00EAA9B0  cEspControler::~cEspControler  size=117  [class]
void __fastcall cEspControler::~cEspControler(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0x27] != -0x21124111) {
    if (param_1[0x27] != -0x54325433) {
      FUN_00dd5650(&DAT_0163eef4);
      FUN_00dd7270();
      FUN_00dd7270();
      return;
    }
    if (param_1[0x24] != 0) {
      FUN_00eaa8c0(0);
      FUN_00eaa840();
      FUN_00dd7270();
      param_1[0x27] = 0xdeedbeef;
    }
  }
  FUN_00dd7270();
  FUN_00dd7270();
  return;
}

