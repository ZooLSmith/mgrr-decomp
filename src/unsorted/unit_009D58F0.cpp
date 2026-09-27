// src/unsorted/unit_009D58F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D58F0..009D5EA0, 8 functions

#include "mgrr.h"

// 009D58F0  FUN_009d58f0  size=174  [run]
bool FUN_009d58f0(void)

{
  int iVar1;
  float10 fVar2;
  float local_4;
  
  if (DAT_01beaa60 != 0) {
    return true;
  }
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if ((((iVar1 == 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
      (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && (*(int *)(iVar1 + 0x6c0) != 0)) {
    return true;
  }
  if ((DAT_01b78874 & 0x800000) == 0) {
    fVar2 = (float10)FUN_00e04a50();
    if ((float10)1.0 <= fVar2) goto LAB_009d5989;
  }
  else {
    local_4 = 1.0;
    iVar1 = FUN_00e04a60(&local_4);
    if ((iVar1 == 0) || (1.0 <= local_4)) {
LAB_009d5989:
      iVar1 = FUN_00f410c0();
      return iVar1 != 0;
    }
  }
  return true;
}

// 009D59A0  FUN_009d59a0  size=23  [run]
void FUN_009d59a0(int param_1)

{
  if ((*(byte *)(param_1 + 0x6c) & 0x10) != 0) {
    FUN_00e04a50();
    return;
  }
  FUN_00e049b0();
  return;
}

// 009D59C0  FUN_009d59c0  size=22  [run]
float10 FUN_009d59c0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x6c) & 0x10) != 0) {
    return (float10)1;
  }
  iVar1 = FUN_00e03960();
  return (float10)*(float *)(iVar1 + 0x7c);
}

// 009D59E0  FUN_009d59e0  size=182  [run]
int FUN_009d59e0(undefined4 param_1,int param_2)

{
  LONG *lpAddend;
  int iVar1;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  uint local_1c;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 == 0) {
    iVar1 = FUN_00a82090(0,param_1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    FUN_00a7ca40();
    local_c = *(undefined4 *)(param_2 + 0x14);
    local_8 = *(undefined4 *)(param_2 + 0x18);
    local_1c = local_1c | 0x40000000;
    local_2c = param_1;
    local_28 = param_1;
    local_14 = *(undefined4 *)(param_2 + 0x10);
    local_4 = *(undefined4 *)(param_2 + 0x1c);
    iVar1 = FUN_00a81b80(local_30);
    if (iVar1 == 0) {
      return 0;
    }
  }
  lpAddend = (LONG *)(DAT_01b78870 + 0x1f24);
  if (*(int *)(DAT_01b78870 + 0x1ee0) <= *(int *)(DAT_01b78870 + 0x1f24)) {
    FUN_00dd5650(&DAT_016594c4,*(int *)(DAT_01b78870 + 0x1ee0));
  }
  InterlockedIncrement(lpAddend);
  return iVar1;
}

// 009D5AA0  FUN_009d5aa0  size=85  [run]
void __thiscall FUN_009d5aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00a7c930(param_1);
  iVar2 = FUN_00a7c9b0(uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c800();
      *(undefined4 *)(iVar2 + 0x4b0) = param_3;
      FUN_00a805f0();
    }
    InterlockedDecrement((LONG *)(DAT_01b78870 + 0x1f24));
  }
  return;
}

// 009D5B00  FUN_009d5b00  size=759  [run]
undefined4 FUN_009d5b00(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (((*(uint *)(param_1 + 0x30) & 0x400000) != 0) ||
     (((*(uint *)(param_1 + 0x34) & 0x800000) != 0 &&
      (FUN_00f40f40(), (*(byte *)(param_1 + 0x37) & 1) != 0)))) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0x44) & 0x80000000) == 0) &&
     ((*(uint *)(param_1 + 0x40) & 0x400000) != 0)) {
    if ((DAT_01bea060 & 0x4000000) != 0) {
      *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x80000000;
      return 1;
    }
  }
  else {
    iVar2 = FUN_009d58f0(param_1);
    uVar4 = *(uint *)(param_1 + 0x38);
    if (iVar2 == 0) {
      if ((uVar4 & 8) != 0) {
        return 0;
      }
    }
    else if ((uVar4 & 4) != 0) {
      return 0;
    }
    if ((((uVar4 & 0x800) == 0) || ((*(byte *)(param_1 + 0x30) & 2) != 0)) &&
       ((iVar2 = FUN_00f41070(), iVar2 == 0 || ((*(uint *)(param_1 + 0x3c) & 0x4000) == 0)))) {
      uVar4 = *(uint *)(param_1 + 0x40);
      if ((DAT_01bea060 >> 0x1a & 1) == 0) {
        if ((uVar4 & 0x80000000) != 0) {
          return 0;
        }
      }
      else if ((uVar4 & 0x40000000) != 0) {
        return 0;
      }
      if (DAT_01b78874 < 0) {
        if ((uVar4 & 0x10000000) != 0) {
          return 0;
        }
      }
      else if ((uVar4 & 0x20000000) != 0) {
        return 0;
      }
      iVar2 = FUN_009d4800(1);
      if (iVar2 == 0) {
        if ((uVar4 & 0x4000000) != 0) {
          return 0;
        }
      }
      else if ((uVar4 & 0x2000000) != 0) {
        return 0;
      }
      iVar2 = FUN_00416d50(0x19);
      if (iVar2 == 0) {
        if ((uVar4 & 0x200000) != 0) {
          return 0;
        }
      }
      else if ((uVar4 & 0x100000) != 0) {
        return 0;
      }
      piVar3 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
      if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) ||
         (iVar2 = FUN_00b953a0(), iVar2 == 0)) {
        if ((*(byte *)(param_1 + 0x43) & 1) != 0) {
          return 0;
        }
      }
      else if ((*(uint *)(param_1 + 0x40) & 0x800000) != 0) {
        return 0;
      }
      piVar3 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
      if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) || (*(int *)(iVar2 + 0xb74) == 0))
      {
        uVar4 = *(uint *)(param_1 + 0x40);
        if ((uVar4 & 0x20000) != 0) {
          return 0;
        }
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x40);
        if ((uVar4 & 0x10000) != 0) {
          return 0;
        }
      }
      if ((((uVar4 & 0x40000) == 0) || (iVar2 = FUN_00a7c990(&DAT_01ee11f4), iVar2 != 0)) ||
         ((iVar2 = FUN_00a81330(), iVar2 == 0 ||
          ((iVar2 = FUN_00a7c800(), iVar2 == 0 || ((*(uint *)(iVar2 + 0x364) & 0x40000) == 0)))))) {
        iVar2 = FUN_009d4800(2);
        uVar4 = *(uint *)(param_1 + 0x40);
        if (iVar2 == 0) {
          if ((uVar4 & 0x8000) != 0) {
            return 0;
          }
        }
        else if ((uVar4 & 0x4000) != 0) {
          return 0;
        }
        iVar2 = FUN_009d4800(3);
        if (iVar2 == 0) {
          if ((uVar4 & 0x2000) != 0) {
            return 0;
          }
        }
        else if ((uVar4 & 0x1000) != 0) {
          return 0;
        }
        iVar2 = FUN_009d4800(4);
        if (iVar2 == 0) {
          if ((uVar4 & 0x800) != 0) {
            return 0;
          }
        }
        else if ((uVar4 & 0x400) != 0) {
          return 0;
        }
        iVar2 = FUN_009d4800(5);
        if (iVar2 == 0) {
          if ((uVar4 & 0x200) != 0) {
            return 0;
          }
        }
        else if ((uVar4 & 0x100) != 0) {
          return 0;
        }
        iVar2 = FUN_009d4800(6);
        if (iVar2 == 0) {
          if ((char)uVar4 < '\0') {
            return 0;
          }
        }
        else if ((uVar4 & 0x40) != 0) {
          return 0;
        }
        iVar2 = FUN_009d4800(7);
        if (iVar2 == 0) {
          uVar1 = uVar4 & 0x20;
        }
        else {
          uVar1 = uVar4 & 0x10;
        }
        if ((uVar1 == 0) && (((uVar4 & 8) == 0 || (DAT_01bea024 != 9)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 009D5E00  FUN_009d5e00  size=105  [run]
void FUN_009d5e00(undefined4 param_1,void *param_2,int param_3)

{
  void *_Src;
  
  if ((*(byte *)(param_3 + 8) & 2) != 0) {
    FUN_00a28070(param_2,0,0x477fff00);
    D3DXMatrixMultiply(param_1,param_3 + 0x40,param_2);
    return;
  }
  _Src = (void *)FUN_00fb2050();
  FID_conflict__memcpy(param_2,_Src,0x40);
  D3DXMatrixMultiply(param_1,param_3 + 0x40,param_2);
  return;
}

// 009D5EA0  FUN_009d5ea0  size=48  [run]
void FUN_009d5ea0(void)

{
  int *piVar1;
  int iVar2;
  
  cEspShaderShimmer_DAF::vf04();
  piVar1 = &DAT_01b7a9a0;
  do {
    iVar2 = 6;
    do {
      (**(code **)(*piVar1 + 0x10))();
      piVar1 = piVar1 + 0x1f;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while ((int)piVar1 < 0x1b7af70);
  return;
}

