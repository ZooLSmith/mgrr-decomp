// src/unsorted/unit_00C125B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C125B0..00C131C0, 14 functions

#include "types.h"

// 00C125B0  FUN_00c125b0  size=15  [run]
undefined4 __fastcall FUN_00c125b0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00C125D0  FUN_00c125d0  size=12  [run]
undefined4 __fastcall FUN_00c125d0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00C12640  FUN_00c12640  size=78  [run]
void __fastcall FUN_00c12640(int param_1)

{
  if (*(int *)(param_1 + 0x16e0) != 0) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x16e0) = 0;
  *(undefined4 *)(param_1 + 0x16f8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x16e4) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x1700) = 0;
  *(undefined4 *)(param_1 + 0x1704) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16f4) = 0xffffffff;
  return;
}

// 00C12690  FUN_00c12690  size=131  [run]
void __fastcall FUN_00c12690(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 8);
  param_1[0x5bc] = (int)param_1;
  (*pcVar1)();
  FUN_00da8390();
  FUN_00da8390();
  FUN_00da8390();
  param_1[0x404] = 0;
  param_1[0x4dc] = 0;
  FUN_00db1db0();
  param_1[0x5be] = -0x40800000;
  param_1[0x5b8] = 0;
  param_1[0x5b9] = 0;
  param_1[0x5bf] = 0;
  param_1[0x5c1] = 0x3f800000;
  param_1[0x5c0] = 0;
  param_1[0x5bd] = -1;
  return;
}

// 00C12740  FUN_00c12740  size=62  [run]
int __thiscall FUN_00c12740(int param_1,int param_2)

{
  if (param_2 != 0) {
    if (param_2 == 1) {
      return param_1 + 0x960;
    }
    if (param_2 == 2) {
      return param_1 + 0xcc0;
    }
    if (param_2 == 3) {
      return param_1 + 0x1020;
    }
    if (param_2 == 4) {
      param_1 = param_1 + 0x1380;
    }
  }
  return param_1;
}

// 00C127F0  FUN_00c127f0  size=233  [run]
void __fastcall FUN_00c127f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((*(int *)(param_1 + 0x16f4) != -1) && (*(float *)(param_1 + 0x16f8) != -1.0)) &&
     (*(int *)(param_1 + 0x16e4) != 0)) {
    iVar1 = FUN_00a92f90();
    if (iVar1 != 0) {
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      fVar2 = (float10)FUN_00a958c0(*(undefined4 *)(param_1 + 0x1700));
      if ((float10)*(float *)(param_1 + 0x16f8) <= fVar2) {
        FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),0);
        FUN_00a95e60(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x16f8));
        return;
      }
      if (fVar2 < (float10)*(float *)(param_1 + 0x16f8)) {
        FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x1704));
      }
    }
  }
  return;
}

// 00C12960  FUN_00c12960  size=185  [run]
int __thiscall FUN_00c12960(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x16e4) == 0) {
    FUN_00dd5650("not found CameraBehavior.");
    return -1;
  }
  iVar1 = FUN_00a9e290(param_2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x1700) = iVar1;
  FUN_00a96070(iVar1,0x8000000,1);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x16fc) = 1;
    iVar2 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x1700));
    if (iVar2 < *(int *)(param_1 + 0x16f4)) {
      FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x1704));
    }
  }
  return iVar1;
}

// 00C12A20  FUN_00c12a20  size=168  [run]
int __thiscall
FUN_00c12a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x16e4) == 0) {
    FUN_00dd5650("not found CameraBehavior.");
    return -1;
  }
  iVar1 = FUN_00a9e290(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(int *)(param_1 + 0x1700) = iVar1;
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x16fc) = 1;
    iVar2 = FUN_00a959f0(iVar1);
    if (iVar2 < *(int *)(param_1 + 0x16f4)) {
      FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x1704));
    }
  }
  return iVar1;
}

// 00C12AD0  FUN_00c12ad0  size=160  [run]
int __thiscall FUN_00c12ad0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x16e4) == 0) {
    FUN_00dd5650("not found CameraBehavior.");
    return -1;
  }
  iVar1 = FUN_00a9e290(param_2,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x1700) = iVar1;
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x16fc) = 1;
    iVar2 = FUN_00a959f0(iVar1);
    if (iVar2 < *(int *)(param_1 + 0x16f4)) {
      FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x1704));
    }
  }
  return iVar1;
}

// 00C12B70  FUN_00c12b70  size=147  [run]
int __thiscall FUN_00c12b70(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x16e4) == 0) {
    FUN_00dd5650("not found CameraBehavior.");
    return -1;
  }
  iVar1 = FUN_00aa3f60(param_2);
  *(int *)(param_1 + 0x1700) = iVar1;
  FUN_00a96070(iVar1,0x8000000,0);
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x16fc) = 1;
    iVar2 = FUN_00a959f0(*(undefined4 *)(param_1 + 0x1700));
    if (iVar2 < *(int *)(param_1 + 0x16f4)) {
      FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x1704));
    }
  }
  return iVar1;
}

// 00C12C10  FUN_00c12c10  size=122  [run]
int __thiscall FUN_00c12c10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x16e4) == 0) {
    FUN_00dd5650("not found CameraBehavior.");
    return -1;
  }
  iVar1 = FUN_00aa3f60(param_2);
  *(int *)(param_1 + 0x1700) = iVar1;
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x16fc) = 1;
    iVar2 = FUN_00a959f0(iVar1);
    if (iVar2 < *(int *)(param_1 + 0x16f4)) {
      FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x1704));
    }
  }
  return iVar1;
}

// 00C12C90  FUN_00c12c90  size=168  [run]
int __thiscall
FUN_00c12c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x16e4) == 0) {
    FUN_00dd5650("not found CameraBehavior.");
    return -1;
  }
  iVar1 = FUN_00aa4080(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(int *)(param_1 + 0x1700) = iVar1;
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 0x16fc) = 1;
    iVar2 = FUN_00a959f0(iVar1);
    if (iVar2 < *(int *)(param_1 + 0x16f4)) {
      FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),*(undefined4 *)(param_1 + 0x1704));
    }
  }
  return iVar1;
}

// 00C13030  FUN_00c13030  size=268  [run]
void __thiscall FUN_00c13030(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soFlag");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x6c))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016a31d8);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1 + 5);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soLinkId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1 + 6);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soModeNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1 + 7);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soActionNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soParentPartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x5c))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soDir");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x70))(iVar1,param_1 + 4);
  }
  return;
}

// 00C131C0  FUN_00c131c0  size=268  [run]
void __thiscall FUN_00c131c0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soWorkNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x6c))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,&DAT_016a31d8);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x6c))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soFlag0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soFlag1");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soFlag2");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soFlag3");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x68))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(*param_3,"soValue");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x58))(iVar1,param_1 + 0x14);
  }
  return;
}

