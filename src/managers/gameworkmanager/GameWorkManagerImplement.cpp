// src/managers/gameworkmanager/GameWorkManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1B060..00C50500, 58 functions

#include "types.h"

// 00C1B060  GameWorkManagerImplement::vf08  size=1  [class]
void GameWorkManagerImplement::vf08(void)

{
  return;
}

// 00C1B070  FUN_00c1b070  size=129  [between]
void __fastcall FUN_00c1b070(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x38);
  iVar2 = 0xc;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x94);
  iVar2 = 5;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return;
}

// 00C1B100  GameWorkManagerImplement::vf3C  size=98  [class]
undefined * __thiscall GameWorkManagerImplement::vf3C(int param_1,int param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  
  piVar1 = (int *)(param_1 + 0x70);
  while( true ) {
    puVar2 = (undefined *)*piVar1;
    puVar3 = (undefined *)(*piVar1 + param_2);
    if ((int)puVar3 < 1) {
      puVar3 = (undefined *)0x0;
    }
    else if (0x98967e < (int)puVar3) {
      puVar3 = &DAT_0098967f;
    }
    if (puVar2 == puVar3) break;
    LOCK();
    puVar4 = (undefined *)*piVar1;
    bVar5 = puVar2 == puVar4;
    if (bVar5) {
      *piVar1 = (int)puVar3;
      puVar4 = puVar2;
    }
    UNLOCK();
    if (bVar5) {
      return puVar4;
    }
  }
  return puVar3;
}

// 00C1B170  FUN_00c1b170  size=72  [between]
void __fastcall FUN_00c1b170(int param_1)

{
  if (0 < *(int *)(param_1 + 0xb4)) {
    DAT_01b73828 = DAT_01b73828 + *(int *)(param_1 + 0xb4);
    if (0xf423e < DAT_01b73828) {
      DAT_01b73828 = 999999;
      FUN_009c6540(0x37);
      return;
    }
    if (99 < DAT_01b73828) {
      FUN_009c6540(0x37);
    }
  }
  return;
}

// 00C1B1C0  FUN_00c1b1c0  size=72  [between]
void __fastcall FUN_00c1b1c0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x80)) {
    DAT_01b73840 = DAT_01b73840 + *(int *)(param_1 + 0x80);
    if (0xf423e < DAT_01b73840) {
      DAT_01b73840 = 999999;
      FUN_009c6540(0x3b);
      return;
    }
    if (0x1d < DAT_01b73840) {
      FUN_009c6540(0x3b);
    }
  }
  return;
}

// 00C1B210  FUN_00c1b210  size=431  [between]
void __thiscall FUN_00c1b210(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = &DAT_018aa7a4;
  piVar3 = &DAT_01b71964;
  piVar1 = (int *)(param_1 + 0x38);
  do {
    if (0 < *piVar1) {
      *piVar3 = *piVar3 + *piVar1;
      if (0xf423e < *piVar3) {
        *piVar3 = 999999;
      }
      if ((*piVar2 != -1) && (piVar2[-1] <= *piVar3)) {
        FUN_009c6540(*piVar2);
      }
    }
    piVar3 = piVar3 + 1;
    piVar1 = piVar1 + 1;
    piVar2 = piVar2 + 2;
  } while ((int)piVar3 < 0x1b71994);
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(int *)(param_1 + 0xb8) < 1) {
      *(undefined4 *)(param_1 + 0xbc) = 0x42700000;
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x8c);
    if (9 < *(int *)(param_1 + 0xb8)) {
      FUN_009c6540(0x22);
    }
  }
  param_2 = *(float *)(param_1 + 0xbc) - param_2;
  *(float *)(param_1 + 0xbc) = param_2;
  if ((param_2 <= 0.0) || (*(int *)(param_1 + 0x2c) != 0)) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x6c)) {
    DAT_01b71998 = DAT_01b71998 + *(int *)(param_1 + 0x6c);
    if (DAT_01b71998 < 999999) {
      if (DAT_01b71998 < 0x32) goto LAB_00c1b310;
    }
    else {
      DAT_01b71998 = 999999;
    }
    FUN_009c6540(0x21);
  }
LAB_00c1b310:
  if (0 < *(int *)(param_1 + 0x80)) {
    DAT_01b7199c = DAT_01b7199c + *(int *)(param_1 + 0x80);
    if (DAT_01b7199c < 999999) {
      if (DAT_01b7199c < 0x1e) goto LAB_00c1b347;
    }
    else {
      DAT_01b7199c = 999999;
    }
    FUN_009c6540(0x23);
  }
LAB_00c1b347:
  if (0 < *(int *)(param_1 + 0x34)) {
    DAT_01b71960 = DAT_01b71960 + *(int *)(param_1 + 0x34);
    if (DAT_01b71960 < 999999) {
      if (DAT_01b71960 < 0x32) goto LAB_00c1b378;
    }
    else {
      DAT_01b71960 = 999999;
    }
    FUN_009c6540(0x24);
  }
LAB_00c1b378:
  if (0 < *(int *)(param_1 + 0x78)) {
    DAT_01b71994 = DAT_01b71994 + *(int *)(param_1 + 0x78);
    if (0xf423e < DAT_01b71994) {
      DAT_01b71994 = 999999;
      FUN_009c6540(0x27);
      return;
    }
    if (99 < DAT_01b71994) {
      FUN_009c6540(0x27);
    }
  }
  return;
}

// 00C1B3C0  FUN_00c1b3c0  size=103  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c1b3c0(int param_1,float param_2)

{
  _DAT_01b737b0 = _DAT_01b737b0 + param_2;
  if (3599999.0 < _DAT_01b737b0 != (_DAT_01b737b0 == 3599999.0)) {
    _DAT_01b737b0 = 3599999.0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    DAT_01dc08a8 = DAT_01dc08a8 + *(int *)(param_1 + 0x70);
    (**(code **)(*DAT_01bea100 + 0xa4))(*(undefined4 *)(param_1 + 0x70));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_009c4b20();
  }
  return;
}

// 00C1B430  FUN_00c1b430  size=204  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c1b430(int param_1,float param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    *(undefined4 *)(param_1 + 0xc0) = DAT_01b77de0;
    return;
  }
  DAT_01b76204 = DAT_01b76204 + param_2;
  _DAT_01b76208 = _DAT_01b76208 + *(int *)(param_1 + 0x70);
  _DAT_01b7620c = _DAT_01b7620c + *(int *)(param_1 + 0x6c);
  if (DAT_01b76210 <= *(int *)(param_1 + 0x1c)) {
    DAT_01b76210 = *(int *)(param_1 + 0x1c);
  }
  _DAT_01b76214 = _DAT_01b76214 + *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x28) != 0) {
    _DAT_01b76218 = 1;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    _DAT_01b7621c = 1;
  }
  _DAT_01b76220 = _DAT_01b76220 + *(int *)(param_1 + 0x84);
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    DAT_01b76430 = DAT_01b76430 + *(int *)(param_1 + 0x80);
    DAT_01b7642c = DAT_01b7642c + *(int *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0xc0) = DAT_01b77de0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc0) = DAT_01b77de0;
  return;
}

// 00C1B540  GameWorkManagerImplement::vf18  size=10  [class]
void GameWorkManagerImplement::vf18(void)

{
  FUN_009c52e0();
  return;
}

// 00C1B550  GameWorkManagerImplement::vf1C  size=33  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GameWorkManagerImplement::vf1C(void)

{
  _DAT_01b76208 = 0;
  _DAT_01b7620c = 0;
  DAT_01b76210 = 0;
  _DAT_01b76214 = 0;
  _DAT_01b76220 = 0;
  DAT_01b77de0 = 0;
  return;
}

// 00C1B580  GameWorkManagerImplement::vf20  size=6  [class]
undefined4 GameWorkManagerImplement::vf20(void)

{
  return DAT_01b76200;
}

// 00C1B590  GameWorkManagerImplement::vf24  size=6  [class]
undefined4 GameWorkManagerImplement::vf24(void)

{
  return DAT_01b77de0;
}

// 00C1B5A0  GameWorkManagerImplement::vf28  size=33  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall GameWorkManagerImplement::vf28(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    DAT_01b76144 = 1;
    _DAT_01b76218 = 1;
    FUN_009c4b20();
    return;
  }
  return;
}

// 00C1B5D0  GameWorkManagerImplement::vf2C  size=53  [class]
int __fastcall GameWorkManagerImplement::vf2C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x28);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 1;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00C1B610  GameWorkManagerImplement::vf30  size=53  [class]
int __fastcall GameWorkManagerImplement::vf30(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x2c);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 1;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00C1B650  GameWorkManagerImplement::vf34  size=131  [class]
int __thiscall GameWorkManagerImplement::vf34(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if ((param_2 == 0) || (iVar3 = param_2, param_2 != *(int *)(param_1 + 0x18))) {
    InterlockedIncrement((LONG *)(param_1 + 0x10));
    piVar1 = (int *)(param_1 + 0xc);
    do {
      iVar2 = *piVar1;
      LOCK();
      iVar3 = *piVar1;
      if (iVar2 == iVar3) {
        *piVar1 = 1;
      }
      UNLOCK();
    } while (iVar2 != iVar3);
    piVar1 = (int *)(param_1 + 0x18);
    do {
      iVar2 = *piVar1;
      LOCK();
      iVar3 = *piVar1;
      bVar4 = iVar2 == iVar3;
      if (bVar4) {
        *piVar1 = param_2;
        iVar3 = iVar2;
      }
      UNLOCK();
    } while (!bVar4);
  }
  return iVar3;
}

// 00C1B6E0  GameWorkManagerImplement::vf38  size=72  [class]
int __fastcall GameWorkManagerImplement::vf38(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  InterlockedIncrement((LONG *)(param_1 + 0x14));
  piVar1 = (int *)(param_1 + 0xc);
  do {
    iVar2 = *piVar1;
    LOCK();
    iVar3 = *piVar1;
    bVar4 = iVar2 == iVar3;
    if (bVar4) {
      *piVar1 = 1;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar4);
  return iVar3;
}

// 00C1B730  GameWorkManagerImplement::vf48  size=11  [class]
void __fastcall GameWorkManagerImplement::vf48(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x6c));
  return;
}

// 00C1B740  GameWorkManagerImplement::vf50  size=14  [class]
void __fastcall GameWorkManagerImplement::vf50(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x90));
  return;
}

// 00C1B750  GameWorkManagerImplement::vf54  size=14  [class]
void __fastcall GameWorkManagerImplement::vf54(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0xb0));
  return;
}

// 00C1B760  GameWorkManagerImplement::vf58  size=14  [class]
void __fastcall GameWorkManagerImplement::vf58(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0xb4));
  return;
}

// 00C1B770  GameWorkManagerImplement::vf5C  size=11  [class]
void __fastcall GameWorkManagerImplement::vf5C(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x80));
  return;
}

// 00C1B780  GameWorkManagerImplement::vf4C  size=14  [class]
void __fastcall GameWorkManagerImplement::vf4C(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x84));
  return;
}

// 00C1B790  GameWorkManagerImplement::vf60  size=21  [class]
void __thiscall GameWorkManagerImplement::vf60(int param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c1b79f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InterlockedIncrement((LONG *)(param_1 + 0x94 + param_2 * 4));
  return;
}

// 00C1B7B0  GameWorkManagerImplement::vf64  size=11  [class]
void __fastcall GameWorkManagerImplement::vf64(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x34));
  return;
}

// 00C1B7C0  GameWorkManagerImplement::vf68  size=11  [class]
void __fastcall GameWorkManagerImplement::vf68(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x68));
  return;
}

// 00C1B7D0  GameWorkManagerImplement::vf6C  size=14  [class]
void __fastcall GameWorkManagerImplement::vf6C(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0xa8));
  return;
}

// 00C1B7E0  GameWorkManagerImplement::vf70  size=14  [class]
void __fastcall GameWorkManagerImplement::vf70(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0xac));
  return;
}

// 00C1B7F0  GameWorkManagerImplement::vf44  size=171  [class]
int __thiscall GameWorkManagerImplement::vf44(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *lpAddend;
  
  if (param_3 == 3) {
    (**(code **)(*param_1 + 0x34))(0);
  }
  InterlockedIncrement(param_1 + 0x22);
  InterlockedIncrement(param_1 + param_2 + 0xe);
  if (((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) {
    param_1[0xc] = 1;
  }
  switch(param_3) {
  case 0:
    lpAddend = param_1 + 0x1d;
    break;
  case 1:
    lpAddend = param_1 + 0x1e;
    break;
  case 2:
    lpAddend = param_1 + 0x1f;
    break;
  case 3:
    lpAddend = param_1 + 0x20;
    break;
  case 4:
    lpAddend = param_1 + 0x2d;
    break;
  default:
    goto switchD_00c1b83d_default;
  }
  InterlockedIncrement(lpAddend);
switchD_00c1b83d_default:
  param_1 = param_1 + 3;
  do {
    iVar1 = *param_1;
    LOCK();
    iVar2 = *param_1;
    bVar3 = iVar1 == iVar2;
    if (bVar3) {
      *param_1 = 1;
      iVar2 = iVar1;
    }
    UNLOCK();
  } while (!bVar3);
  return iVar2;
}

// 00C1B8B0  GameWorkManagerImplement::vf40  size=14  [class]
void __fastcall GameWorkManagerImplement::vf40(int param_1)

{
  InterlockedIncrement((LONG *)(param_1 + 0x8c));
  return;
}

// 00C1B8C0  GameWorkManagerImplement::vf7C  size=4  [class]
undefined4 __fastcall GameWorkManagerImplement::vf7C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}

// 00C1B8D0  GameWorkManagerImplement::vf84  size=6  [class]
undefined4 GameWorkManagerImplement::vf84(void)

{
  return DAT_01b7616c;
}

// 00C1B8E0  GameWorkManagerImplement::vf88  size=6  [class]
undefined4 GameWorkManagerImplement::vf88(void)

{
  return DAT_01b76154;
}

// 00C1B8F0  GameWorkManagerImplement::vf8C  size=6  [class]
undefined4 GameWorkManagerImplement::vf8C(void)

{
  return DAT_01b76164;
}

// 00C1B900  GameWorkManagerImplement::vf90  size=6  [class]
undefined4 GameWorkManagerImplement::vf90(void)

{
  return DAT_01b76174;
}

// 00C1B910  GameWorkManagerImplement::vf94  size=6  [class]
undefined4 GameWorkManagerImplement::vf94(void)

{
  return DAT_01b761ec;
}

// 00C1B920  GameWorkManagerImplement::vf98  size=7  [class]
float10 GameWorkManagerImplement::vf98(void)

{
  return (float10)DAT_01b76140;
}

// 00C1B930  GameWorkManagerImplement::vfB0  size=71  [class]
void __fastcall GameWorkManagerImplement::vfB0(int param_1)

{
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  return;
}

// 00C2C0C0  FUN_00c2c0c0  size=162  [callgraph]
void __fastcall FUN_00c2c0c0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x20)) {
    FUN_00fdbc60();
    return;
  }
  FUN_00fdbc60();
  return;
}

// 00C2C170  FUN_00c2c170  size=58  [callgraph]
void __fastcall FUN_00c2c170(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c2c0c0();
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x3c))(iVar1);
  }
  if (0 < param_1[4]) {
    param_1[7] = param_1[4];
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  return;
}

// 00C2C1B0  FUN_00c2c1b0  size=281  [callgraph]
void __fastcall FUN_00c2c1b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = DAT_01dc14c8;
  iVar3 = DAT_018b9174;
  if (DAT_01dc14c8 != (int *)0x0) {
    if ((DAT_01bea090 & 0x80000000) == 0) {
      if (((((((DAT_01bea060 & 0x4a000000) == 0) && (iVar2 = FUN_00416910(9), iVar2 == 0)) &&
            (iVar2 = FUN_00caad00(), iVar2 == 0)) &&
           ((iVar2 = FUN_00416d50(0x2b), iVar2 == 0 &&
            (iVar2 = FUN_00eb4300(DAT_01be8e4c), iVar2 == 0)))) &&
          ((iVar2 = FUN_00cc0bd0(), iVar2 == 0 &&
           ((iVar3 != 0xef1 && (iVar3 = FUN_00416d50(0x37), iVar3 == 0)))))) &&
         ((iVar3 = FUN_00416d50(0x24), iVar3 == 0 && (DAT_01dc1368 == 0)))) {
        if (piVar1[0x14fa] != 0) {
          DAT_01bea090 = DAT_01bea090 ^ 0x40;
        }
      }
      else {
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        DAT_01dc136c = 1;
      }
    }
    uVar4 = DAT_01bea090 >> 6 & 1;
    if (*(uint *)(param_1 + 4) != uVar4) {
      iVar3 = *piVar1;
      if (uVar4 != 0) {
        (**(code **)(iVar3 + 0x1e8))();
        *(uint *)(param_1 + 4) = DAT_01bea090 >> 6 & 1;
        return;
      }
      (**(code **)(iVar3 + 0x1ec))();
    }
    *(uint *)(param_1 + 4) = DAT_01bea090 >> 6 & 1;
  }
  return;
}

// 00C2C2D0  FUN_00c2c2d0  size=184  [callgraph]
void __thiscall FUN_00c2c2d0(int *param_1,float param_2)

{
  int iVar1;
  
  if ((DAT_01bea094._3_1_ & 1) != 0) {
    param_1[4] = 0;
    param_1[3] = 0;
  }
  if (param_1[3] != 0) {
    param_1[9] = 0x40c00000;
    param_1[3] = 0;
  }
  if ((param_1[10] != 0) && (1.0 < (float)param_1[9])) {
    param_1[9] = 0x3f800000;
  }
  if (0.0 < (float)param_1[9]) {
    param_1[8] = param_1[8] + param_1[0x22];
    if ((DAT_01bea064._3_1_ & 1) == 0) {
      param_1[9] = (int)((float)param_1[9] - param_2);
    }
    else {
      param_1[9] = 0;
    }
    if ((float)param_1[9] <= 0.0) {
      iVar1 = FUN_00c2c0c0();
      if (0 < iVar1) {
        (**(code **)(*param_1 + 0x3c))(iVar1);
      }
      if (0 < param_1[4]) {
        param_1[7] = param_1[4];
      }
      param_1[8] = 0;
      param_1[4] = 0;
      param_1[9] = 0;
      param_1[5] = 0;
      param_1[3] = 0;
      return;
    }
  }
  return;
}

// 00C2C390  FUN_00c2c390  size=496  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c2c390(int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  DAT_01b76140 = DAT_01b76140 + param_2;
  DAT_01b7614c = (undefined *)((int)DAT_01b7614c + *(int *)(param_1 + 0x70));
  DAT_01b76154 = DAT_01b76154 + *(int *)(param_1 + 0x6c);
  DAT_01b76158 = DAT_01b76158 + *(int *)(param_1 + 0x74);
  DAT_01b7615c = DAT_01b7615c + *(int *)(param_1 + 0x78);
  DAT_01b76160 = DAT_01b76160 + *(int *)(param_1 + 0x7c);
  DAT_01b76164 = DAT_01b76164 + *(int *)(param_1 + 0x80);
  DAT_01b7616c = DAT_01b7616c + *(int *)(param_1 + 0x88);
  _DAT_01b76168 = _DAT_01b76168 + *(int *)(param_1 + 0x84);
  iVar1 = FUN_00d46780();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb0);
  }
  DAT_01b76174 = DAT_01b76174 + iVar1;
  DAT_01b761e8 = DAT_01b761e8 + *(int *)(param_1 + 0xb4);
  DAT_01b761ec = DAT_01b761ec + *(int *)(param_1 + 0x80);
  DAT_01b7618c = DAT_01b7618c + *(int *)(param_1 + 0xa8);
  DAT_01b76190 = DAT_01b76190 + *(int *)(param_1 + 0xac);
  piVar2 = &DAT_01b76178;
  piVar3 = (int *)(param_1 + 0x94);
  do {
    *piVar2 = *piVar2 + *piVar3;
    if (0xf423e < *piVar2) {
      *piVar2 = 999999;
    }
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)piVar2 < 0x1b7618c);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) < DAT_01b76150) {
    iVar1 = DAT_01b76150;
  }
  DAT_01b76150 = iVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    DAT_01b76144 = 1;
  }
  if (*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x3c) != 0) {
    DAT_01b76148 = 1;
  }
  if (3599999.0 < DAT_01b76140 != (DAT_01b76140 == 3599999.0)) {
    DAT_01b76140 = 3599999.0;
  }
  if (0x98967e < (int)DAT_01b7614c) {
    DAT_01b7614c = &DAT_0098967f;
  }
  if (0xf423e < DAT_01b76154) {
    DAT_01b76154 = 999999;
  }
  if (0xf423e < DAT_01b76158) {
    DAT_01b76158 = 999999;
  }
  if (0xf423e < DAT_01b7615c) {
    DAT_01b7615c = 999999;
  }
  if (0xf423e < DAT_01b76160) {
    DAT_01b76160 = 999999;
  }
  if (0xf423e < DAT_01b76164) {
    DAT_01b76164 = 999999;
  }
  if (0xf423e < DAT_01b7616c) {
    DAT_01b7616c = 999999;
  }
  if (0xf423e < DAT_01b76174) {
    DAT_01b76174 = 999999;
  }
  if (0xf423e < DAT_01b7618c) {
    DAT_01b7618c = 999999;
  }
  if (0xf423e < DAT_01b76190) {
    DAT_01b76190 = 999999;
  }
  if (0xf423e < DAT_01b761e8) {
    DAT_01b761e8 = 999999;
  }
  if (0xf423e < DAT_01b761ec) {
    DAT_01b761ec = 999999;
  }
  return;
}

// 00C2C580  GameWorkManagerImplement::vf0C  size=346  [class]
void __thiscall GameWorkManagerImplement::vf0C(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_01bea030 == 2) {
    return;
  }
  iVar1 = FUN_00a4ae30();
  if ((iVar1 != 0) || (iVar1 = FUN_00a4ae70(), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (((DAT_01bea094 & 0x100000) != 0) ||
     ((iVar1 = FUN_00932720(), 0xf03 < iVar1 && ((iVar1 < 0xf0a || (iVar1 == 0xf30)))))) {
    param_2 = 0;
  }
  FUN_00c2c1b0();
  FUN_00c2c2d0(param_2);
  iVar1 = FUN_00a4ae60();
  if (iVar1 == 0) {
    if ((((DAT_018b9174 & 0xf00) == 0xc00) || (DAT_018b9174 == 0xf31)) || (DAT_018b9174 == 0xf32)) {
LAB_00c2c693:
      FUN_00c1b170(param_2);
      goto LAB_00c2c6a2;
    }
    if ((((DAT_018b9174 & 0xf00) != 0xd00) && (DAT_018b9174 != 0xf33)) && (DAT_018b9174 != 0xf34)) {
      FUN_00c1b210(param_2);
      goto LAB_00c2c6a2;
    }
  }
  else {
    if ((((DAT_018b9174 & 0xf00) == 0xc00) || (DAT_018b9174 == 0xf31)) || (DAT_018b9174 == 0xf32))
    goto LAB_00c2c693;
    if ((((DAT_018b9174 & 0xf00) != 0xd00) && (DAT_018b9174 != 0xf33)) && (DAT_018b9174 != 0xf34))
    goto LAB_00c2c6a2;
  }
  FUN_00c1b1c0(param_2);
LAB_00c2c6a2:
  FUN_00c2c390(param_2);
  FUN_00c1b3c0(param_2);
  FUN_00c1b430(param_2);
  FUN_00c1b070();
  return;
}

// 00C2C6E0  GameWorkManagerImplement::vf10  size=230  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall GameWorkManagerImplement::vf10(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  DAT_01b77de0 = 1;
  iVar1 = FUN_00e03ea0(param_2);
  if ((DAT_01b76200 != iVar1) || (DAT_01b76200 = iVar1, param_3 != 0)) {
    DAT_01b76204 = 0;
    _DAT_01b76208 = 0;
    _DAT_01b7620c = 0;
    DAT_01b76210 = 0;
    _DAT_01b76214 = 0;
    _DAT_01b76218 = 0;
    _DAT_01b7621c = 0;
    _DAT_01b76220 = 0;
    puVar3 = &DAT_01b76200;
    puVar4 = (undefined4 *)(param_1 + 0xd0);
    DAT_01b76200 = iVar1;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_01b7642c = 0;
    DAT_01b76430 = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = DAT_01b7642c;
  }
  iVar1 = FUN_00d467a0();
  if ((iVar1 != 0) && ((DAT_01d64254 == 2 || (DAT_01d64254 == 4)))) {
    DAT_01b7642c = 1;
    *(undefined4 *)(param_1 + 0x104) = 1;
  }
  if (DAT_01b762b8 != -1) {
    _DAT_01b76218 = DAT_01b762bc;
  }
  return;
}

// 00C2C7D0  GameWorkManagerImplement::vf14  size=690  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall GameWorkManagerImplement::vf14(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  uint auStack_d4 [4];
  int iStack_c4;
  int iStack_c0;
  int iStack_a8;
  int iStack_a0;
  int iStack_80;
  undefined4 uStack_28;
  
  iVar2 = FUN_00c2c0c0();
  if (0 < iVar2) {
    (**(code **)(*param_1 + 0x3c))(iVar2);
  }
  if (0 < param_1[4]) {
    param_1[7] = param_1[4];
  }
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_00c1b430(0);
  DAT_01b77de0 = 0;
  piVar5 = &DAT_01b76200;
  piVar7 = param_1 + 0x34;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  param_1[0x40] = DAT_01b76430;
  param_1[0x41] = DAT_01b7642c;
  DAT_01b76204 = 0;
  DAT_01b76200 = 0;
  _DAT_01b76208 = 0;
  _DAT_01b7620c = 0;
  DAT_01b76210 = 0;
  _DAT_01b76214 = 0;
  _DAT_01b76218 = 0;
  _DAT_01b7621c = 0;
  _DAT_01b76220 = 0;
  DAT_01b76430 = 0;
  DAT_01b7642c = 0;
  if (((_DAT_01bea098 & 0x80000000) != 0) && (iStack_d8 = DAT_01b391c8 + -10, -1 < iStack_d8)) {
    iStack_dc = FUN_009c4bf0();
    auStack_d4[0] = (uint)(param_1[0x41] == 0);
    iStack_e0 = param_1[0x40];
    iStack_e8 = 0;
    iStack_100 = 0;
    iStack_ec = 0;
    uStack_e4 = 0;
    iStack_f4 = 0;
    iStack_f0 = 0;
    iStack_f8 = 0;
    iStack_fc = 0;
    cXmlBinary::cXmlBinary_64
              (param_1 + 0x34,iStack_e0,auStack_d4[0],&iStack_e8,&iStack_100,&iStack_ec,&uStack_e4,
               &iStack_f4,&iStack_f0,&iStack_f8,&iStack_fc);
    (**(code **)(*DAT_01bea100 + 0xa4))(iStack_100);
    uVar1 = param_1[0x35];
    puVar6 = &DAT_01b76140;
    puVar8 = auStack_d4;
    for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    auStack_d4[0] = uVar1;
    auStack_d4[3] = param_1[0x36];
    if (iStack_f0 == 0) {
      iStack_c4 = -1;
    }
    else {
      iStack_c4 = param_1[0x38];
    }
    if (iStack_f8 == 0) {
      iStack_a8 = -1;
    }
    else {
      iStack_a8 = param_1[0x39];
    }
    if (iStack_e8 == 0) {
      iStack_c0 = -1;
    }
    else {
      iStack_c0 = param_1[0x37];
    }
    uStack_28 = uStack_e4;
    iStack_80 = iStack_ec + 1;
    if (iStack_f4 == 0) {
      auStack_d4[1] = 1;
    }
    else {
      auStack_d4[1] = param_1[0x3a];
    }
    if (iStack_100 == 0) {
      auStack_d4[2] = 1;
    }
    else {
      auStack_d4[2] = (uint)(param_1[0x3c] == 0);
    }
    if (iStack_fc == 0) {
      iStack_a0 = 1;
    }
    else {
      iStack_a0 = iStack_d8;
    }
    iVar2 = iStack_e0 + iStack_dc * 5;
    iVar3 = iVar2 * 0xc0;
    if ((*(float *)(&DAT_01b719b0 + iVar3) == 0.0) || (*(int *)(&DAT_01b71a60 + iVar3) < iStack_104)
       ) {
      puVar6 = auStack_d4;
      puVar8 = (uint *)(&DAT_01b719b0 + iVar3);
      for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 *)(&DAT_01b7638c + iVar2 * 4) = 1;
    FUN_009c8c00(0,0xffffffff);
  }
  return;
}

// 00C42A90  GameWorkManagerImplement::vf74  size=4  [class]
undefined4 __fastcall GameWorkManagerImplement::vf74(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 00C42AA0  GameWorkManagerImplement::vf78  size=4  [class]
undefined4 __fastcall GameWorkManagerImplement::vf78(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C42AB0  GameWorkManagerImplement::vf80  size=21  [class]
undefined4 __fastcall GameWorkManagerImplement::vf80(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x24)) {
    return 1;
  }
  return 0;
}

// 00C42AD0  GameWorkManagerImplement::vf9C  size=10  [class]
void __thiscall GameWorkManagerImplement::vf9C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 00C42AE0  GameWorkManagerImplement::vfA0  size=4  [class]
undefined4 __fastcall GameWorkManagerImplement::vfA0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 00C42AF0  GameWorkManagerImplement::vfA4  size=7  [class]
undefined4 __fastcall GameWorkManagerImplement::vfA4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}

// 00C42B00  GameWorkManagerImplement::vfA8  size=7  [class]
undefined4 __fastcall GameWorkManagerImplement::vfA8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x104);
}

// 00C42B10  GameWorkManagerImplement::vfAC  size=7  [class]
int __fastcall GameWorkManagerImplement::vfAC(int param_1)

{
  return param_1 + 0xd0;
}

// 00C42B20  GameWorkManagerImplement::vf00  size=31  [class]
undefined4 * __thiscall GameWorkManagerImplement::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = GameWorkManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C42B40  GameWorkManagerImplement::vf04  size=52  [class]
void GameWorkManagerImplement::vf04(void)

{
  int extraout_ECX;
  
  FUN_00c1b070();
  *(undefined4 *)(extraout_ECX + 0xbc) = 0;
  *(undefined4 *)(extraout_ECX + 0x24) = 0;
  *(undefined4 *)(extraout_ECX + 0xb8) = 0;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  *(undefined4 *)(extraout_ECX + 0x20) = 0;
  *(undefined4 *)(extraout_ECX + 0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0x14) = 0;
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  *(undefined4 *)(extraout_ECX + 0xc0) = 0;
  return;
}

// 00C50480  GameWorkManagerImplement::GameWorkManagerImplement  size=114  [class]
bool GameWorkManagerImplement::GameWorkManagerImplement(undefined4 param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x110,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    FUN_00c1b070();
    *(undefined4 *)(extraout_ECX + 0xbc) = 0;
    *(undefined4 *)(extraout_ECX + 0xb8) = 0;
    *(undefined4 *)(extraout_ECX + 4) = 0;
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
    *(undefined4 *)(extraout_ECX + 8) = 0;
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
    *(undefined4 *)(extraout_ECX + 0x10) = 0;
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
    *(undefined4 *)(extraout_ECX + 0xc0) = 0;
    DAT_01bea184 = extraout_ECX;
    return extraout_ECX != 0;
  }
  DAT_01bea184 = 0;
  return false;
}

// 00C50500  GameWorkManagerImplement::GameWorkManagerImplement  size=5  [class]
bool GameWorkManagerImplement::GameWorkManagerImplement(undefined4 param_1)

{
  undefined4 *puVar1;
  int extraout_ECX;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x110,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    FUN_00c1b070();
    *(undefined4 *)(extraout_ECX + 0xbc) = 0;
    *(undefined4 *)(extraout_ECX + 0xb8) = 0;
    *(undefined4 *)(extraout_ECX + 4) = 0;
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
    *(undefined4 *)(extraout_ECX + 8) = 0;
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
    *(undefined4 *)(extraout_ECX + 0x10) = 0;
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
    *(undefined4 *)(extraout_ECX + 0x18) = 0;
    *(undefined4 *)(extraout_ECX + 0xc0) = 0;
    DAT_01bea184 = extraout_ECX;
    return extraout_ECX != 0;
  }
  DAT_01bea184 = 0;
  return false;
}

