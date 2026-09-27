// src/unsorted/unit_00F9E690.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9E690..00F9EF70, 14 functions

#include "types.h"

// 00F9E690  FUN_00f9e690  size=20  [run]
void __thiscall FUN_00f9e690(int param_1,undefined4 param_2)

{
  FUN_00f9ce80(param_1 + 4,param_2);
  return;
}

// 00F9E6B0  FUN_00f9e6b0  size=24  [run]
void __thiscall FUN_00f9e6b0(int param_1,undefined4 param_2)

{
  FUN_00f9cf40(param_1 + 0x14,param_2,*(undefined4 *)(param_1 + 0x24));
  return;
}

// 00F9E6D0  FUN_00f9e6d0  size=157  [run]
undefined4 FUN_00f9e6d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_c [4];
  int local_8;
  int local_4;
  
  iVar1 = FUN_00f9a480(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00f9a570(param_1,param_2);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016ebcd8,param_2);
      return 0;
    }
  }
  else {
    local_8 = -1;
    local_4 = -1;
    iVar1 = FUN_00f9a570(local_c,param_2);
    if (iVar1 != 0) {
      if ((param_1[1] != local_8) || (param_1[2] != local_4)) {
        FUN_00dd5650(&DAT_016ebcb0,param_2);
        return 0;
      }
      *param_1 = 2;
    }
  }
  return 1;
}

// 00F9E770  FUN_00f9e770  size=52  [run]
undefined4 FUN_00f9e770(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_00f9cd60(param_1 + 4);
  }
  if (param_2 != 0) {
    FUN_00f9ce10(param_2 + 0x14);
  }
  return 1;
}

// 00F9E7B0  FUN_00f9e7b0  size=182  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9e7b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_68 [8];
  undefined1 local_60 [68];
  uint uStack_1c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  D3DXMatrixTranspose(local_60,param_2);
  iVar1 = FUN_00f994a0(param_1,auStack_68,0x10);
  if (iVar1 != 0) {
    __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
    return;
  }
  FID_conflict__memcpy(&DAT_01f134d0 + param_1 * 4,auStack_68,0x40);
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x178))(DAT_01f206d4,param_1,&DAT_01f134d0 + param_1 * 4,4)
    ;
    if (-1 < iVar1) {
      _DAT_01f126bc = 1;
      __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
      return;
    }
  }
  __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
  return;
}

// 00F9E870  FUN_00f9e870  size=182  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9e870(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_68 [8];
  undefined1 local_60 [68];
  uint uStack_1c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  D3DXMatrixTranspose(local_60,param_2);
  iVar1 = FUN_00f99540(param_1,auStack_68,0x10);
  if (iVar1 != 0) {
    __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
    return;
  }
  FID_conflict__memcpy(&DAT_01f126d0 + param_1 * 4,auStack_68,0x40);
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x1b4))(DAT_01f206d4,param_1,&DAT_01f126d0 + param_1 * 4,4)
    ;
    if (-1 < iVar1) {
      _DAT_01f126b4 = 1;
      __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
      return;
    }
  }
  __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
  return;
}

// 00F9E930  FUN_00f9e930  size=140  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9e930(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_68 [8];
  undefined1 local_60 [68];
  uint uStack_1c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  D3DXMatrixTranspose(local_60,param_2);
  FID_conflict__memcpy(&DAT_01f134d0 + param_1 * 4,auStack_68,0x40);
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x178))(DAT_01f206d4,param_1,&DAT_01f134d0 + param_1 * 4,4)
    ;
    if (-1 < iVar1) {
      _DAT_01f126bc = 1;
      __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
      return;
    }
  }
  __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
  return;
}

// 00F9E9C0  FUN_00f9e9c0  size=140  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f9e9c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_68 [8];
  undefined1 local_60 [68];
  uint uStack_1c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  D3DXMatrixTranspose(local_60,param_2);
  FID_conflict__memcpy(&DAT_01f126d0 + param_1 * 4,auStack_68,0x40);
  if (DAT_01f206d4 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01f206d4 + 0x1b4))(DAT_01f206d4,param_1,&DAT_01f126d0 + param_1 * 4,4)
    ;
    if (-1 < iVar1) {
      _DAT_01f126b4 = 1;
      __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
      return;
    }
  }
  __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff90);
  return;
}

// 00F9EA50  FUN_00f9ea50  size=512  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f9ea50(int *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = *param_1;
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = param_1[1];
    iVar2 = FUN_00f994a0(iVar3,param_2,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    FID_conflict__memcpy(&DAT_01f134d0 + iVar3 * 4,param_2,param_3 * 4);
    if ((DAT_01f206d4 != (int *)0x0) &&
       (iVar3 = (**(code **)(*DAT_01f206d4 + 0x178))
                          (DAT_01f206d4,iVar3,&DAT_01f134d0 + iVar3 * 4,param_3 + 3U >> 2),
       -1 < iVar3)) {
      _DAT_01f126bc = 1;
      return 1;
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        iVar3 = param_1[1];
        local_4 = 1;
        iVar2 = FUN_00f994a0(iVar3,param_2,param_3);
        if (iVar2 == 0) {
          FID_conflict__memcpy(&DAT_01f134d0 + iVar3 * 4,param_2,param_3 * 4);
          if ((DAT_01f206d4 == (int *)0x0) ||
             (iVar3 = (**(code **)(*DAT_01f206d4 + 0x178))
                                (DAT_01f206d4,iVar3,&DAT_01f134d0 + iVar3 * 4,param_3 + 3U >> 2),
             iVar3 < 0)) {
            local_4 = 0;
          }
          else {
            _DAT_01f126bc = 1;
          }
        }
        piVar1 = DAT_01f206d4;
        iVar3 = param_1[1];
        iVar2 = FUN_00f99540(iVar3,param_2,param_3);
        if (iVar2 == 0) {
          FID_conflict__memcpy(&DAT_01f126d0 + iVar3 * 4,param_2,param_3 * 4);
          if (piVar1 == (int *)0x0) {
            return 0;
          }
          iVar3 = (**(code **)(*piVar1 + 0x1b4))
                            (piVar1,iVar3,&DAT_01f126d0 + iVar3 * 4,param_3 + 3U >> 2);
          if (iVar3 < 0) {
            return 0;
          }
          _DAT_01f126b4 = 1;
        }
      }
      return local_4;
    }
    iVar3 = param_1[1];
    iVar2 = FUN_00f99540(iVar3,param_2,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    FID_conflict__memcpy(&DAT_01f126d0 + iVar3 * 4,param_2,param_3 * 4);
    if ((DAT_01f206d4 != (int *)0x0) &&
       (iVar3 = (**(code **)(*DAT_01f206d4 + 0x1b4))
                          (DAT_01f206d4,iVar3,&DAT_01f126d0 + iVar3 * 4,param_3 + 3U >> 2),
       -1 < iVar3)) {
      _DAT_01f126b4 = 1;
      return 1;
    }
  }
  return 0;
}

// 00F9EC50  FUN_00f9ec50  size=512  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00f9ec50(int *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = *param_1;
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = param_1[1];
    iVar2 = FUN_00f994a0(iVar3,param_2,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    FID_conflict__memcpy(&DAT_01f134d0 + iVar3 * 4,param_2,param_3 * 4);
    if ((DAT_01f206d4 != (int *)0x0) &&
       (iVar3 = (**(code **)(*DAT_01f206d4 + 0x178))
                          (DAT_01f206d4,iVar3,&DAT_01f134d0 + iVar3 * 4,param_3 + 3U >> 2),
       -1 < iVar3)) {
      _DAT_01f126bc = 1;
      return 1;
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        iVar3 = param_1[1];
        local_4 = 1;
        iVar2 = FUN_00f994a0(iVar3,param_2,param_3);
        if (iVar2 == 0) {
          FID_conflict__memcpy(&DAT_01f134d0 + iVar3 * 4,param_2,param_3 * 4);
          if ((DAT_01f206d4 == (int *)0x0) ||
             (iVar3 = (**(code **)(*DAT_01f206d4 + 0x178))
                                (DAT_01f206d4,iVar3,&DAT_01f134d0 + iVar3 * 4,param_3 + 3U >> 2),
             iVar3 < 0)) {
            local_4 = 0;
          }
          else {
            _DAT_01f126bc = 1;
          }
        }
        piVar1 = DAT_01f206d4;
        iVar3 = param_1[1];
        iVar2 = FUN_00f99540(iVar3,param_2,param_3);
        if (iVar2 == 0) {
          FID_conflict__memcpy(&DAT_01f126d0 + iVar3 * 4,param_2,param_3 * 4);
          if (piVar1 == (int *)0x0) {
            return 0;
          }
          iVar3 = (**(code **)(*piVar1 + 0x1b4))
                            (piVar1,iVar3,&DAT_01f126d0 + iVar3 * 4,param_3 + 3U >> 2);
          if (iVar3 < 0) {
            return 0;
          }
          _DAT_01f126b4 = 1;
        }
      }
      return local_4;
    }
    iVar3 = param_1[1];
    iVar2 = FUN_00f99540(iVar3,param_2,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    FID_conflict__memcpy(&DAT_01f126d0 + iVar3 * 4,param_2,param_3 * 4);
    if ((DAT_01f206d4 != (int *)0x0) &&
       (iVar3 = (**(code **)(*DAT_01f206d4 + 0x1b4))
                          (DAT_01f206d4,iVar3,&DAT_01f126d0 + iVar3 * 4,param_3 + 3U >> 2),
       -1 < iVar3)) {
      _DAT_01f126b4 = 1;
      return 1;
    }
  }
  return 0;
}

// 00F9EE50  FUN_00f9ee50  size=112  [run]
uint FUN_00f9ee50(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_00f9e7b0(param_1[1],param_2);
    return uVar1;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      iVar2 = FUN_00f9e7b0(param_1[1],param_2);
      uVar1 = (uint)(iVar2 != 0);
      iVar2 = FUN_00f9e870(param_1[1],param_2);
      if (iVar2 == 0) {
        return 0;
      }
    }
    return uVar1;
  }
  uVar1 = FUN_00f9e870(param_1[1],param_2);
  return uVar1;
}

// 00F9EEC0  FUN_00f9eec0  size=112  [run]
uint FUN_00f9eec0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_00f9e930(param_1[1],param_2);
    return uVar1;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      iVar2 = FUN_00f9e930(param_1[1],param_2);
      uVar1 = (uint)(iVar2 != 0);
      iVar2 = FUN_00f9e9c0(param_1[1],param_2);
      if (iVar2 == 0) {
        return 0;
      }
    }
    return uVar1;
  }
  uVar1 = FUN_00f9e9c0(param_1[1],param_2);
  return uVar1;
}

// 00F9EF30  FUN_00f9ef30  size=63  [run]
bool FUN_00f9ef30(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_2 + 3) & 0x1f;
  if ((*(byte *)(param_2 + 3) & 0x1f) == 0) {
    bVar1 = 1;
  }
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  iVar2 = (**(code **)(*DAT_01f206d4 + 0x114))(DAT_01f206d4,param_1,10,bVar1);
  return -1 < iVar2;
}

// 00F9EF70  FUN_00f9ef70  size=69  [run]
bool __fastcall FUN_00f9ef70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f9e6d0(param_1 + 0x28,"g_ViewProjMatrix");
  if (iVar1 != 0) {
    iVar1 = FUN_00f9e6d0(param_1 + 0x34,"g_WorldMatrix");
    if (iVar1 != 0) {
      iVar1 = FUN_00f9e6d0(param_1 + 0x40,"g_MatrialColor");
      return iVar1 != 0;
    }
  }
  return false;
}

