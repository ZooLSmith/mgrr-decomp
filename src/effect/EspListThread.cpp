// src/effect/EspListThread.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F42220..00F45680, 14 functions

#include "mgrr.h"
#include "EspListThread.h"

// 00F42220  EspListThread::preTrans  size=145  [class]
void __fastcall EspListThread::preTrans(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  FUN_00dd75d0(&LAB_00f41530,param_1,0xffffffff);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  for (puVar2 = *(undefined4 **)(param_1 + 0x18); puVar2 != puVar1; puVar2 = (undefined4 *)puVar2[2]
      ) {
    iVar4 = iVar5 % 5;
    iVar5 = iVar5 + 1;
    iVar3 = *(int *)(param_1 + 0x98 + iVar4 * 4);
    *(undefined4 *)(*(int *)(param_1 + 0xac + iVar4 * 4) + iVar3 * 4) = *puVar2;
    *(int *)(param_1 + 0x98 + iVar4 * 4) = iVar3 + 1;
  }
  FUN_00dd79a0(5);
  return;
}

// 00F43740  EspListThread::startup  size=332  [class]
undefined4 __thiscall EspListThread::startup(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00f452d0(param_2,param_3);
  if (iVar1 != 0) {
    FUN_00dd7240();
    puVar2 = (undefined4 *)(param_1 + 0x40);
    iVar1 = 0x12;
    do {
      *puVar2 = *(undefined4 *)(param_1 + 4);
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_2 * 4),param_3);
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(undefined4 *)(param_1 + 0xac) = uVar3;
    param_2 = param_2 / 5;
    *(uint *)(param_1 + 0xb0) = *(int *)(param_1 + 0x94) + param_2 * 4;
    *(uint *)(param_1 + 0xb4) = *(int *)(param_1 + 0x94) + param_2 * 8;
    *(uint *)(param_1 + 0xb8) = *(int *)(param_1 + 0x94) + param_2 * 0xc;
    *(uint *)(param_1 + 0xbc) = *(int *)(param_1 + 0x94) + param_2 * 0x10;
    *(undefined4 *)(param_1 + 0xc4) = 1;
    *(undefined4 *)(param_1 + 200) = 1;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0x1680) = 0;
    *(undefined4 *)(param_1 + 0x1684) = 0;
    *(undefined4 *)(param_1 + 0x1678) = 0;
    *(undefined4 *)(param_1 + 0x167c) = 0;
    *(code **)(param_1 + 0x1688) = espEmtEst::espEmtEst_2;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    iVar1 = FUN_00ec7550(param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_00ecb5e0(param_1 + 0xd0,param_3);
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_016df8a0);
        return 0;
      }
      return 1;
    }
    FUN_00dd5650(&DAT_016df864);
  }
  return 0;
}

// 00F43890  EspListThread::vf08  size=34  [class]
void __fastcall EspListThread::vf08(int param_1)

{
  FUN_00dd4940(*(undefined4 *)(param_1 + 0x94));
  FUN_00dd7270();
  cEspList::vf08();
  return;
}

// 00F438D0  EspListThread::vf0C  size=312  [class]
void __fastcall EspListThread::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_c;
  int local_4;
  
  local_c = *(int *)(param_1 + 4);
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  *(code **)(param_1 + 0x1688) = espEmtEst::espEmtEst;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_00dd75d0(FUN_00f41310,param_1,0xffffffff);
  piVar3 = (int *)(param_1 + 0x40);
  iVar6 = 1;
  local_4 = 0x11;
  do {
    puVar4 = *(undefined4 **)(param_1 + 4);
    puVar5 = puVar4;
    piVar1 = piVar3;
    iVar2 = iVar6;
    if ((undefined4 *)*piVar3 != puVar4) {
      for (; iVar2 < 0x11; iVar2 = iVar2 + 1) {
        if ((undefined4 *)piVar1[1] != puVar4) {
          puVar5 = *(undefined4 **)(param_1 + 0x40 + iVar2 * 4);
          goto LAB_00f4394a;
        }
        piVar1 = piVar1 + 1;
      }
      puVar5 = *(undefined4 **)(param_1 + 0x1c);
    }
LAB_00f4394a:
    if (puVar5 != puVar4) {
      iVar2 = FUN_00f98a40();
      *(undefined4 *)(param_1 + 0x90) = 0;
      if (local_c != *(int *)(param_1 + 4)) {
        puVar7 = *(undefined4 **)(local_c + 8);
      }
      puVar4 = *(undefined4 **)(param_1 + 0x94);
      for (; puVar7 != puVar5; puVar7 = (undefined4 *)puVar7[2]) {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
      }
      *(int *)(param_1 + 0x90) = (int)puVar4 - *(int *)(param_1 + 0x94) >> 2;
      if (puVar7 != *(undefined4 **)(param_1 + 0x18)) {
        local_c = puVar7[1];
      }
      *(int *)(param_1 + 0x88) = iVar6;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      if (0 < *(int *)(param_1 + 0x90)) {
        FUN_00dd79a0(5 - (uint)(iVar2 != 0));
      }
    }
    piVar3 = piVar3 + 1;
    iVar6 = iVar6 + 1;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(code **)(param_1 + 0x1688) = espEmtEst::espEmtEst_2;
      return;
    }
  } while( true );
}

// 00F43A10  EspListThread::vf18  size=5  [class]
void __fastcall EspListThread::vf18(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((DAT_01bea060 & 0x10000000) == 0) {
    uVar5 = FUN_00dd7ad0();
    piVar2 = *(int **)(param_1 + 0x1c);
    for (piVar1 = *(int **)(param_1 + 0x18); piVar1 != piVar2; piVar1 = (int *)piVar1[2]) {
      iVar3 = *piVar1;
      for (iVar4 = *(int *)(iVar3 + 0x2c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
        FUN_009327a0(iVar4,*(undefined1 *)(iVar4 + 0x10),*(undefined2 *)(iVar4 + 0xe),uVar5);
      }
      *(undefined4 *)(iVar3 + 0x2c) = 0;
    }
  }
  return;
}

// 00F43A20  EspListThread::vf10  size=157  [class]
void __fastcall EspListThread::vf10(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *local_c [2];
  undefined1 local_4 [4];
  
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  local_c[0] = (int *)param_1[6];
  piVar1 = (int *)param_1[7];
  do {
    while( true ) {
      if (local_c[0] == piVar1) {
        return;
      }
      iVar2 = *local_c[0];
      uVar3 = *(uint *)(iVar2 + 0x30);
      if ((uVar3 & 0xc0000000) != 0) break;
      if ((*(short *)(iVar2 + 0x4c) == 0) && (*(int *)(iVar2 + 0x50) == 0)) {
        *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 0x10000;
      }
LAB_00f43ab3:
      local_c[0] = (int *)local_c[0][2];
    }
    if (((uVar3 & 0x20000000) != 0) || ((uVar3 >> 0x1e & 1) == 0)) {
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 0x40000000;
      goto LAB_00f43ab3;
    }
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x20))(local_4,local_c);
    local_c[0] = (int *)*puVar4;
  } while( true );
}

// 00F44140  EspListThread::EspListThread  size=126  [class]
undefined4 * __fastcall EspListThread::EspListThread(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = vftable;
  param_1[0xe] = 0;
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
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_00ec9b00();
  param_1[0x59a] = 0;
  param_1[0x59b] = 0;
  param_1[0x59c] = 0;
  return param_1;
}

// 00F44230  FUN_00f44230  size=164  [callgraph]
int * __thiscall FUN_00f44230(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = param_4;
  }
  *(int *)(param_3 + 0x48) = iVar3;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if ((0x10 < iVar3) && (0x10 < iVar3)) {
    iVar3 = 0x10;
  }
  iVar1 = iVar3;
  if (iVar3 < 0x12) {
    piVar2 = (int *)(param_1 + 0x40 + iVar3 * 4);
    do {
      if (*piVar2 != *(int *)(param_1 + 4)) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x12);
  }
  *param_2 = 0;
  if (iVar1 < 0x12) {
    piVar2 = (int *)cFixedList::insert_29(&param_4,param_1 + 0x40 + iVar1 * 4,&param_3);
    iVar1 = *piVar2;
    *(int *)(param_1 + 0x40 + iVar3 * 4) = iVar1;
    *param_2 = iVar1;
    return param_2;
  }
  cFixedList::insert_29(&param_4,param_1 + 0x1c,&param_3);
  *(int *)(param_1 + 0x40 + iVar3 * 4) = param_4;
  *param_2 = param_4;
  return param_2;
}

// 00F442E0  EspListThread::vf20  size=340  [class]
void __thiscall EspListThread::vf20(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_retaddr;
  
  iVar4 = *(int *)(*(int *)*param_3 + 0x48);
  if ((iVar4 < 0) || (0x11 < iVar4)) {
    FUN_00dd5650(&DAT_016df940);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0x10 < iVar4) {
      iVar4 = 0x10;
    }
  }
  if (*(int *)(param_1 + 0x40 + iVar4 * 4) == *param_3) {
    piVar1 = *(int **)(*param_3 + 8);
    if (piVar1 == *(int **)(param_1 + 0x1c)) {
      *(undefined4 *)(param_1 + 0x40 + iVar4 * 4) = *(undefined4 *)(param_1 + 4);
    }
    else if (*(int *)(*piVar1 + 0x48) == iVar4) {
      *(int **)(param_1 + 0x40 + iVar4 * 4) = piVar1;
    }
    else {
      *(undefined4 *)(param_1 + 0x40 + iVar4 * 4) = *(undefined4 *)(param_1 + 4);
    }
  }
  piVar1 = *(int **)*param_3;
  (**(code **)(*piVar1 + 0x14))();
  uVar2 = (uint)*(ushort *)(piVar1 + 0x13);
  if (uVar2 < 0x100) {
    iVar4 = param_1 + 0xd8 + uVar2 * 0x14;
LAB_00f44385:
    if (iVar4 != 0) {
      InterlockedDecrement((LONG *)(iVar4 + 0xc));
      (**(code **)*piVar1)(0);
      FUN_00dd3d90(piVar1,0);
      goto LAB_00f443ce;
    }
  }
  else if (uVar2 - 0x8000 < 0x14) {
    iVar4 = param_1 + -0x9eb28 + uVar2 * 0x14;
    goto LAB_00f44385;
  }
  InterlockedDecrement((LONG *)(param_1 + 0xd0));
  (**(code **)*piVar1)(0);
  FUN_00dd3d90(piVar1,0);
  param_2 = param_3;
LAB_00f443ce:
  iVar4 = *(int *)(*param_2 + 4);
  iVar3 = *(int *)(*param_2 + 8);
  if (iVar4 != 0) {
    *(int *)(iVar4 + 8) = iVar3;
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 4) = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  *unaff_retaddr = iVar3;
  if (iVar4 == *param_2) {
    *(int *)(param_1 + 0x18) = iVar3;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar4 + 4);
  }
  *(int *)(*param_2 + 4) = iVar3;
  *(int *)(*param_2 + 8) = iVar4;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 8) = *param_2;
  }
  if (iVar4 != 0) {
    *(int *)(iVar4 + 4) = *param_2;
  }
  *(int *)(param_1 + 0x14) = *param_2;
  return;
}

// 00F44440  FUN_00f44440  size=789  [between]
undefined4 __thiscall FUN_00f44440(int param_1,undefined4 *param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00dd7240();
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016df9a4);
  }
  *(undefined4 *)(param_1 + 0x1ed8) = param_2[1];
  *(undefined4 *)(param_1 + 0x1edc) = param_2[2];
  *(undefined4 *)(param_1 + 0x1ee0) = param_2[4];
  *(undefined4 *)(param_1 + 0x1ee4) = param_2[5];
  *(undefined4 *)(param_1 + 0x1f24) = 0;
  if (param_2[3] != 0) {
    *(uint *)(param_1 + 0x1e78) = *(uint *)(param_1 + 0x1e78) | 4;
  }
  *(undefined4 *)(param_1 + 8000) = param_2[7];
  *(undefined4 *)(param_1 + 0x1f44) = param_2[8];
  *(undefined4 *)(param_1 + 0x1f48) = param_2[9];
  *(undefined4 *)(param_1 + 0x1f4c) = param_2[10];
  *(undefined4 *)(param_1 + 0x1f50) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x1f54) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x1f58) = param_2[0xd];
  *(uint *)(param_1 + 0x1e78) = *(uint *)(param_1 + 0x1e78) | 1;
  *(undefined4 *)(param_1 + 0x1f30) = 0;
  *(undefined4 *)(param_1 + 0x1f34) = 0;
  iVar2 = FUN_00dd3500(0x1690,*param_2);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)EspListThread::EspListThread();
  }
  *(int **)(param_1 + 0x1e70) = piVar3;
  if (piVar3 == (int *)0x0) {
    FUN_00dd5650(&DAT_016dfa10);
  }
  else {
    iVar2 = (**(code **)(*piVar3 + 4))(param_2[6],*param_2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1f5c) = 5;
      *(undefined4 *)(param_1 + 0x1f68) = 0;
      *(undefined4 *)(param_1 + 0x1f60) = 6;
      *(undefined4 *)(param_1 + 0x1f6c) = 0x3e4ccccd;
      *(undefined4 *)(param_1 + 0x1f64) = 1;
      *(undefined4 *)(param_1 + 0x1ecc) = 1;
      *(undefined4 *)(param_1 + 0x1f70) = 0x3e99999a;
      *(undefined4 *)(param_1 + 0x1ed0) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1e40) = 0;
      *(undefined4 *)(param_1 + 0x1e44) = 0;
      *(undefined4 *)(param_1 + 0x1e48) = 0;
      *(undefined4 *)(param_1 + 0x1e4c) = 0;
      FUN_00ec7480();
      *(undefined4 *)(param_1 + 0x1ec8) = 0;
      FUN_00a7c950();
      iVar2 = FUN_009d59e0(0x50000,0,0);
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c800(), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x20))();
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
      }
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        FUN_00ec4790(&DAT_016dfa88);
      }
      pfVar1 = (float *)(param_1 + 0xb0);
      *pfVar1 = 0.0;
      *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xb8) = 0xbf800000;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      if (*(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0xb8) +
          *pfVar1 * *pfVar1 + *(float *)(param_1 + 0xb4) * *(float *)(param_1 + 0xb4) <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        *pfVar1 = 0.0;
        *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
        *(undefined4 *)(param_1 + 0xb8) = 0;
      }
      else {
        FUN_00ddf460(pfVar1,pfVar1);
      }
      *(undefined4 *)(param_1 + 0x1ef0) = 0;
      *(undefined4 *)(param_1 + 0x1ef4) = 0;
      *(undefined4 *)(param_1 + 0x1f3c) = 0;
      FUN_00f5a940();
      *(undefined4 *)(param_1 + 0x1ed4) = 0;
      *(undefined4 *)(param_1 + 0x1f7c) = 0;
      *(undefined4 *)(param_1 + 0x1f84) = 0;
      *(undefined4 *)(param_1 + 0x1f80) = 0;
      *(undefined4 *)(param_1 + 0x1f8c) = 0;
      *(undefined4 *)(param_1 + 0x1f88) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x1f20) = 0;
      FUN_00ec45d0();
      FUN_00f449a0();
      *(undefined4 *)(param_1 + 0x1f94) = 0;
      *(undefined4 *)(param_1 + 0x1f74) = 0xfff;
      *(undefined4 *)(param_1 + 0x1fa4) = 0;
      *(undefined4 *)(param_1 + 0x1f78) = 0;
      *(undefined4 *)(param_1 + 0x1fa0) = 0;
      *(undefined4 *)(param_1 + 0x1f90) = 0;
      *(undefined4 *)(param_1 + 0x1f98) = 0;
      *(undefined4 *)(param_1 + 0x1f9c) = 0;
      *(undefined4 *)(param_1 + 0x1ee8) = 0;
      *(undefined4 *)(param_1 + 0x1eec) = 0;
      return 1;
    }
  }
  return 0;
}

// 00F44760  EspListThread::vf24  size=27  [class]
undefined4 EspListThread::vf24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00f44230(param_1,param_2,param_3);
  return param_1;
}

// 00F44790  FUN_00f44790  size=44  [callgraph]
void __thiscall FUN_00f44790(int param_1,undefined4 *param_2)

{
  InterlockedDecrement((LONG *)(param_1 + 0xc));
  (**(code **)*param_2)(0);
  FUN_00dd3d90(param_2,0);
  return;
}

// 00F449A0  FUN_00f449a0  size=140  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f449a0(void)

{
  _DAT_01ede0a8 = 0;
  _DAT_01ede0a4 = 0;
  _DAT_01ede0a0 = 0;
  _DAT_01ede09c = 0;
  _DAT_01ede094 = 0;
  _DAT_01ede090 = 0;
  _DAT_01ede08c = 0;
  _DAT_01ede088 = 0;
  _DAT_01ede080 = 0;
  _DAT_01ede07c = 0;
  _DAT_01ede078 = 0;
  _DAT_01ede074 = 0;
  _DAT_01ede0ac = 0x3f800000;
  _DAT_01ede098 = 0x3f800000;
  _DAT_01ede084 = 0x3f800000;
  _DAT_01ede070 = 0x3f800000;
  D3DXMatrixInverse(&DAT_01ede0b0,0,&DAT_01ede070);
  DAT_01eddb1c = 0;
  FUN_00dd7240();
  return 1;
}

// 00F45680  EspListThread::vf00  size=30  [class]
undefined4 __thiscall EspListThread::vf00(undefined4 param_1,byte param_2)

{
  cEspList::cEspList_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

