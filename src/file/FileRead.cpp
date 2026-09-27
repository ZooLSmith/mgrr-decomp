// src/file/FileRead.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9C7B0..00E9F380, 50 functions

#include "mgrr.h"

// 00E9C7B0  FileRead::Manager  size=248  [class]
void __fastcall FileRead::Manager(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int local_8;
  
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar5 = 0;
  bVar4 = false;
  if (uVar2 != 0) {
    piVar6 = *(int **)(param_1 + 0x6c);
    do {
      iVar7 = *(int *)(*piVar6 + 0x4c);
      if (((iVar7 != 0) && (iVar7 == 1)) && ((*(byte *)(*piVar6 + 0x3c) & 4) != 0)) {
        bVar4 = true;
        break;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < uVar2);
  }
  iVar7 = 0;
  local_8 = 0;
  if (uVar2 != 0) {
    piVar6 = *(int **)(param_1 + 0x6c);
    uVar5 = uVar2;
    do {
      iVar3 = *piVar6;
      if ((*(int *)(iVar3 + 0x4c) != 0) && (iVar7 < *(int *)(iVar3 + 0x48))) {
        iVar7 = *(int *)(iVar3 + 0x48);
        local_8 = iVar3;
      }
      piVar6 = piVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = 0;
  if (bVar4) {
    if (local_8 == 0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (uVar2 != 0) {
      do {
        iVar7 = *(int *)(*(int *)(param_1 + 0x6c) + uVar5 * 4);
        if (*(int *)(iVar7 + 0x4c) != 0) {
          puVar1 = (uint *)(iVar7 + 0x3c);
          *puVar1 = *puVar1 & 0xfffffff7;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  if ((0x59 < *(int *)(param_1 + 0x84)) && (local_8 != 0)) {
    *(uint *)(local_8 + 0x3c) = *(uint *)(local_8 + 0x3c) | 8;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -0x1e;
    if (*(int *)(param_1 + 0x88) == 0) {
      FUN_00dd5650(&DAT_016d1cac);
      *(undefined4 *)(param_1 + 0x88) = 1;
    }
  }
  return;
}

// 00E9C8F0  FUN_00e9c8f0  size=67  [callgraph]
int __thiscall FUN_00e9c8f0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x74);
  uVar5 = 0;
  if (uVar1 != 0) {
    piVar4 = *(int **)(param_1 + 0x6c);
    do {
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x4c) != 0) {
        iVar3 = FUN_00e9c170(param_2);
        if (iVar3 != 0) {
          return iVar2;
        }
      }
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < uVar1);
  }
  return 0;
}

// 00E9C940  FUN_00e9c940  size=60  [callgraph]
int __thiscall FUN_00e9c940(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x74) != 0) {
    piVar2 = *(int **)(param_1 + 0x6c);
    do {
      iVar1 = *piVar2;
      if ((*(int *)(iVar1 + 0x4c) != 0) && (*(int *)(iVar1 + 0x28) == param_2)) {
        return iVar1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x74));
  }
  return 0;
}

// 00E9D660  FileRead::Manager_2  size=62  [class]
undefined4 FileRead::Manager_2(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00e9c940(param_1);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x4c) == 0) {
        *(undefined4 *)(iVar1 + 0x4c) = 1;
      }
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016d1e40,param_1);
  return 0;
}

// 00E9D6A0  FUN_00e9d6a0  size=111  [between]
void FUN_00e9d6a0(int param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 != 0) {
    iVar1 = FUN_00e9c940(param_1);
    if (iVar1 != 0) {
      if (0 < *(int *)(iVar1 + 0x40)) {
        *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + -1;
        __security_check_cookie(local_4 ^ (uint)local_24);
        return;
      }
      _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
      FUN_00dd5650(&DAT_016d1ce4,local_24);
    }
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9D710  FUN_00e9d710  size=131  [between]
void FUN_00e9d710(int param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 != 0) {
    iVar1 = FUN_00e9c940(param_1);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x40) < 1) {
        _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
        FUN_00dd5650(&DAT_016d1d14,local_24);
      }
      *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
  }
  FUN_00dd5650(&DAT_016d1e88,param_1);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9D7A0  FUN_00e9d7a0  size=146  [between]
void FUN_00e9d7a0(int param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (param_1 != 0) {
    iVar1 = FUN_00e9c940(param_1);
    if (iVar1 != 0) {
      if (0 < *(int *)(iVar1 + 0x44)) {
        *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
        __security_check_cookie(local_4 ^ (uint)local_24);
        return;
      }
      _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
      FUN_00dd5650(&DAT_016d1d48,local_24);
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
  }
  FUN_00dd5650(&DAT_016d1ec8,param_1);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9D860  FileRead::Work::setListener  size=53  [class]
void FileRead::Work::setListener(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00e9c940(param_1);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x58) != param_2) {
        FUN_00dd5650(&DAT_016d1b80);
        return;
      }
      *(undefined4 *)(iVar1 + 0x58) = 0;
    }
  }
  return;
}

// 00E9D8A0  FUN_00e9d8a0  size=55  [between]
undefined4 __fastcall FUN_00e9d8a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00dd2ba0(0x5c,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00e9f7a0();
    if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x70)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x74) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar3;
      }
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      return uVar3;
    }
  }
  return uVar3;
}

// 00E9D8E0  FUN_00e9d8e0  size=61  [between]
void FUN_00e9d8e0(undefined4 param_1)

{
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e9c120(param_1);
  FUN_00e9c8f0(local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9D920  FUN_00e9d920  size=127  [between]
void __fastcall FUN_00e9d920(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_18;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00e9cc50();
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x30),0);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    local_14 = *(undefined4 *)(param_1 + 0x34);
    local_10 = *(undefined4 *)(param_1 + 0x28);
    local_c = *(undefined4 *)(param_1 + 4);
    local_8 = param_1 + 8;
    local_18 = 0;
    (**(code **)(**(int **)(param_1 + 0x58) + 0xc))(&local_18);
  }
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}

// 00E9D9A0  FUN_00e9d9a0  size=128  [between]
void __fastcall FUN_00e9d9a0(int param_1)

{
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00e9cc50();
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x30),0);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (0 < *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x40)) {
    _strcpy_s(local_24,0x20,(char *)(param_1 + 8));
    FUN_00dd5650(&DAT_016d1e14,local_24);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9DA20  FileRead::Listener::Listener  size=126  [class]
void __fastcall FileRead::Listener::Listener(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = ObjReadSystem::Work::vftable;
  FUN_00e9c520();
  if (param_1[3] != 0) {
    iVar1 = FUN_00e9c940(param_1[3]);
    if (iVar1 != 0) {
      if (*(undefined4 **)(iVar1 + 0x58) == param_1) {
        *(undefined4 *)(iVar1 + 0x58) = 0;
      }
      else {
        FUN_00dd5650(&DAT_016d1b80);
      }
    }
  }
  if (param_1[4] != 0) {
    iVar1 = FUN_00e9c940(param_1[4]);
    if (iVar1 != 0) {
      if (*(undefined4 **)(iVar1 + 0x58) != param_1) {
        FUN_00dd5650(&DAT_016d1b80);
        *param_1 = vftable;
        return;
      }
      *(undefined4 *)(iVar1 + 0x58) = 0;
    }
  }
  *param_1 = vftable;
  return;
}

// 00E9DAA0  FUN_00e9daa0  size=122  [between]
void __fastcall FUN_00e9daa0(int param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00e9c940(*(int *)(param_1 + 0xc));
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x40) < 1) {
        _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
        FUN_00dd5650(&DAT_016d1ce4,local_24);
      }
      else {
        *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + -1;
      }
    }
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_00e9d6a0(*(undefined4 *)(param_1 + 0x10));
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9DB60  FUN_00e9db60  size=39  [between]
void __fastcall FUN_00e9db60(int param_1)

{
  FUN_00e9d710(*(undefined4 *)(param_1 + 0xc));
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_00e9d710(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}

// 00E9DB90  FUN_00e9db90  size=39  [between]
void __fastcall FUN_00e9db90(int param_1)

{
  FUN_00e9d7a0(*(undefined4 *)(param_1 + 0xc));
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_00e9d7a0(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}

// 00E9DBC0  FUN_00e9dbc0  size=127  [between]
void FUN_00e9dbc0(undefined4 param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e9c120(param_1);
  iVar1 = FUN_00e9c8f0(local_24);
  if (iVar1 != 0) {
    if (0 < *(int *)(iVar1 + 0x40)) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + -1;
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
    FUN_00dd5650(&DAT_016d1ce4,local_24);
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9DCE0  FUN_00e9dce0  size=164  [between]
void FUN_00e9dce0(undefined4 param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e9c120(param_1);
  iVar1 = FUN_00e9c8f0(local_24);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016d1f48,param_1);
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  if (0 < *(int *)(iVar1 + 0x44)) {
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
  FUN_00dd5650(&DAT_016d1d48,local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9DD90  FUN_00e9dd90  size=110  [between]
void FUN_00e9dd90(undefined4 param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e9c120(param_1);
  iVar1 = FUN_00e9c8f0(local_24);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x40) < 1) {
      _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
      FUN_00dd5650(&DAT_016d1d14,local_24);
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9DE00  FUN_00e9de00  size=127  [between]
void FUN_00e9de00(undefined4 param_1)

{
  int iVar1;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e9c120(param_1);
  iVar1 = FUN_00e9c8f0(local_24);
  if (iVar1 != 0) {
    if (0 < *(int *)(iVar1 + 0x44)) {
      *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
      __security_check_cookie(local_4 ^ (uint)local_24);
      return;
    }
    _strcpy_s(local_24,0x20,(char *)(iVar1 + 8));
    FUN_00dd5650(&DAT_016d1d48,local_24);
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9DEE0  FUN_00e9dee0  size=87  [between]
void FUN_00e9dee0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e9c120(param_1);
  iVar1 = FUN_00e9c8f0(local_24);
  if (iVar1 != 0) {
    __security_check_cookie(local_4 ^ (uint)local_24);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9DF40  FileRead::Manager_3  size=338  [class]
void __thiscall
FileRead::Manager_3(int param_1,int param_2,undefined4 param_3,int param_4,byte param_5,int param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_2c;
  int local_28;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  local_2c = param_4;
  local_28 = param_6;
  FUN_00e9c120(param_3);
  iVar3 = FUN_00e9c8f0(local_24);
  if (iVar3 != 0) {
    if (param_2 == 6) {
      param_2 = 7;
    }
    if (((*(int *)(iVar3 + 4) != param_2) || (*(int *)(iVar3 + 0x38) != local_2c)) ||
       ((param_6 != 0 && (*(int *)(iVar3 + 0x58) != param_6)))) {
      FUN_00dd5650(&DAT_016d1f88);
    }
LAB_00e9e07b:
    __security_check_cookie(local_4 ^ (uint)&local_2c);
    return;
  }
  uVar4 = 0;
  if (param_2 == 5) {
    uVar4 = 1;
  }
  else if (param_2 == 7) {
    uVar4 = 0xffffffff;
  }
  piVar1 = (int *)(param_1 + 0x7c);
  *piVar1 = *piVar1 + 1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  if (param_2 == 6) {
    param_2 = 7;
  }
  iVar3 = FUN_00dd2ba0(0x5c,1);
  if (iVar3 != 0) {
    iVar3 = FUN_00e9f7a0();
    if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x70)) {
      piVar1 = (int *)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x74) * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = iVar3;
      }
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    }
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      *(int *)(iVar3 + 0x38) = local_2c;
      *(int *)(iVar3 + 4) = param_2;
      *(undefined4 *)(iVar3 + 0x28) = uVar2;
      *(undefined4 *)(iVar3 + 0x54) = uVar4;
      *(int *)(iVar3 + 0x58) = local_28;
      FUN_00e9c120(param_3);
      if ((param_5 & 1) != 0) {
        *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 0x20;
      }
      goto LAB_00e9e07b;
    }
  }
  FUN_00dd5650(&DAT_016d1fc0);
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}

// 00E9E0A0  FUN_00e9e0a0  size=206  [callgraph]
undefined4 __fastcall FUN_00e9e0a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*(uint *)(param_1 + 0x3c) & 1) != 0) ||
     ((*(int *)(param_1 + 0x40) < 1 && (*(int *)(param_1 + 0x44) < 1)))) {
    uVar2 = FUN_00e9d9a0();
    return uVar2;
  }
  if (*(int *)(param_1 + 0x50) < 1) {
    if ((*(uint *)(param_1 + 0x3c) & 8) == 0) {
      iVar1 = param_1 + 8;
      iVar3 = FUN_00deb980(iVar1);
      *(int *)(param_1 + 0x34) = iVar3;
      if (iVar3 == 0) {
        FUN_00dd5650(&DAT_016d2018,iVar1);
        *(undefined4 *)(param_1 + 0x4c) = 7;
        *(undefined4 *)(param_1 + 0x50) = 0;
        return 0;
      }
      iVar3 = FUN_00dd29b0(iVar3,0x1000,((*(byte *)(param_1 + 0x3c) & 0x20) != 0) + '\x01',0);
      *(int *)(param_1 + 0x30) = iVar3;
      if (iVar3 == 0) {
        if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
          FUN_00dd5650(&DAT_016d1ff0,iVar1);
        }
        *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 4;
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(undefined4 *)(param_1 + 0x50) = 0x3c;
        return 0;
      }
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffb;
      *(undefined4 *)(param_1 + 0x4c) = 2;
      *(undefined4 *)(param_1 + 0x50) = 0;
      return 1;
    }
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  }
  return 0;
}

// 00E9E170  FUN_00e9e170  size=120  [callgraph]
undefined4 __fastcall FUN_00e9e170(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) && ((0 < param_1[0x10] || (0 < param_1[0x11])))) {
    if (0 < param_1[0x14]) {
      param_1[0x14] = param_1[0x14] + -1;
      return 0;
    }
    iVar2 = FUN_00de9e40();
    if (iVar2 != 0) {
      iVar2 = FUN_00dec420(param_1[0xc],param_1[0xd],param_1 + 2,param_1[0x15]);
      *param_1 = iVar2;
      if (iVar2 != 0) {
        param_1[0x13] = 3;
        param_1[0x14] = 0;
        return 1;
      }
    }
    param_1[0x13] = 2;
    param_1[0x14] = 0x3c;
    return 0;
  }
  uVar1 = FUN_00e9d9a0();
  return uVar1;
}

// 00E9E1F0  FUN_00e9e1f0  size=68  [callgraph]
undefined4 __fastcall FUN_00e9e1f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_00debc80(*param_1);
  if (iVar1 != 0) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) &&
     ((0 < (int)param_1[0x10] || (0 < (int)param_1[0x11])))) {
    param_1[0x13] = 2;
    param_1[0x14] = 0;
    return 1;
  }
  uVar2 = FUN_00e9d9a0();
  return uVar2;
}

// 00E9E260  FUN_00e9e260  size=114  [callgraph]
undefined4 __fastcall FUN_00e9e260(int param_1)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x3c) & 8) != 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00e9cc50();
      if (*(int *)(param_1 + 0x30) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 0x30),0);
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x50) = 0;
    return 0;
  }
  if (((*(uint *)(param_1 + 0x3c) & 1) == 0) &&
     ((0 < *(int *)(param_1 + 0x40) || (0 < *(int *)(param_1 + 0x44))))) {
    *(undefined4 *)(param_1 + 0x4c) = 6;
    *(undefined4 *)(param_1 + 0x50) = 0;
    return 1;
  }
  uVar1 = FUN_00e9d9a0();
  return uVar1;
}

// 00E9E570  FUN_00e9e570  size=60  [callgraph]
undefined4
FUN_00e9e570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FileRead::Manager_3(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x4c) == 0) {
    *(undefined4 *)(iVar1 + 0x4c) = 1;
  }
  *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
  return *(undefined4 *)(iVar1 + 0x28);
}

// 00E9E630  FUN_00e9e630  size=239  [callgraph]
void __fastcall FUN_00e9e630(undefined4 *param_1)

{
  int iVar1;
  
LAB_00e9e640:
  do {
    switch(param_1[0x13]) {
    default:
      goto switchD_00e9e64c_caseD_0;
    case 1:
      iVar1 = FUN_00e9e0a0();
      break;
    case 2:
      iVar1 = FUN_00e9e170();
      break;
    case 3:
      iVar1 = FUN_00e9d1e0();
      break;
    case 4:
      thunk_FUN_00debc30(*param_1);
      param_1[0x13] = 5;
      param_1[0x14] = 0;
      goto LAB_00e9e640;
    case 5:
      iVar1 = thunk_FUN_00debc80(*param_1);
      if (iVar1 != 0) {
        return;
      }
      if (((*(byte *)(param_1 + 0xf) & 1) != 0) ||
         (((int)param_1[0x10] < 1 && ((int)param_1[0x11] < 1)))) goto LAB_00e9e6f4;
      param_1[0x13] = 2;
      param_1[0x14] = 0;
      goto LAB_00e9e640;
    case 6:
      if ((param_1[0xf] & 8) == 0) {
        if (0 < (int)param_1[0x10]) {
          return;
        }
        if (0 < (int)param_1[0x11]) {
          return;
        }
        if ((param_1[0xf] & 0x10) != 0) {
          return;
        }
        param_1[0x13] = 8;
        param_1[0x14] = 0;
      }
      else {
        param_1[0x13] = 8;
        param_1[0x14] = 0;
      }
      goto LAB_00e9e640;
    case 7:
      if (0 < (int)param_1[0x10]) {
        return;
      }
      if (0 < (int)param_1[0x11]) {
        return;
      }
      if ((*(byte *)(param_1 + 0xf) & 0x10) != 0) {
        return;
      }
LAB_00e9e6f4:
      iVar1 = FUN_00e9d9a0();
      break;
    case 8:
      param_1[0x13] = 9;
      param_1[0x14] = 0;
      goto LAB_00e9e640;
    case 9:
      iVar1 = FUN_00e9e260();
    }
    if (iVar1 == 0) {
switchD_00e9e64c_caseD_0:
      return;
    }
  } while( true );
}

// 00E9E750  FUN_00e9e750  size=45  [callgraph]
void FUN_00e9e750(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dda8e8 + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fa60();
                    /* WARNING: Could not recover jumptable at 0x00e9e77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_01dda8e8 + 8))();
    return;
  }
  return;
}

// 00E9E780  FUN_00e9e780  size=62  [callgraph]
void FUN_00e9e780(void)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 8) == unaff_retaddr) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  FUN_00e9daa0();
  return;
}

// 00E9E7C0  FUN_00e9e7c0  size=67  [callgraph]
undefined4 FUN_00e9e7c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 8) == unaff_retaddr) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  uVar2 = FUN_00e9d2c0();
  return uVar2;
}

// 00E9E810  FUN_00e9e810  size=78  [callgraph]
undefined4 FUN_00e9e810(void)

{
  uint uVar1;
  int iVar2;
  int unaff_retaddr;
  
  iVar2 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 8) == unaff_retaddr) break;
    iVar2 = (**(code **)(**(int **)(iVar2 + -4) + 0x1c))(iVar2);
  }
  uVar1 = *(uint *)(iVar2 + 4);
  if ((uVar1 & 4) == 0) {
    return 0;
  }
  if (((uVar1 & 1) != 0) && ((uVar1 & 8) == 0)) {
    return 0;
  }
  return 1;
}

// 00E9E860  FUN_00e9e860  size=65  [callgraph]
bool FUN_00e9e860(void)

{
  int iVar1;
  int unaff_retaddr;
  
  for (iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(int *)(iVar1 + 8) == unaff_retaddr) goto LAB_00e9e896;
  }
  iVar1 = 0;
LAB_00e9e896:
  return iVar1 == 0;
}

// 00E9E8B0  FUN_00e9e8b0  size=64  [callgraph]
undefined4 FUN_00e9e8b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 8) == unaff_retaddr) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  uVar2 = FUN_00e9d350();
  return uVar2;
}

// 00E9E8F0  FUN_00e9e8f0  size=109  [callgraph]
undefined4 FUN_00e9e8f0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_retaddr;
  
  iVar2 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar2 == 0) {
      FUN_00de3540(0,0);
      return 0;
    }
    if (*(int *)(iVar2 + 8) == param_1) break;
    iVar2 = (**(code **)(**(int **)(iVar2 + -4) + 0x1c))(iVar2);
  }
  uVar1 = *(uint *)(iVar2 + 4);
  if ((uVar1 & 4) == 0) {
    return 0;
  }
  if (((uVar1 & 1) != 0) && ((uVar1 & 8) == 0)) {
    return 0;
  }
  *unaff_retaddr = *(undefined4 *)(iVar2 + 0x14);
  unaff_retaddr[1] = *(undefined4 *)(iVar2 + 0x18);
  return 1;
}

// 00E9E960  FUN_00e9e960  size=100  [callgraph]
undefined4 FUN_00e9e960(int param_1)

{
  int iVar1;
  int unaff_retaddr;
  
  iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 8) == unaff_retaddr) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  if (param_1 == 0) {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00e9c940(iVar1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x40);
}

// 00E9E9D0  FUN_00e9e9d0  size=168  [callgraph]
void FUN_00e9e9d0(int param_1)

{
  int iVar1;
  undefined1 auStack_14 [12];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_14;
  iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      FUN_009f8ea0(&stack0xffffffe8,0x10,param_1,0);
      FUN_00dd5650(&DAT_016d208c,&stack0xffffffe8);
      __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe8);
      return;
    }
    if (*(int *)(iVar1 + 8) == param_1) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  FUN_00e9d710(*(undefined4 *)(iVar1 + 0xc));
  if ((*(byte *)(iVar1 + 4) & 1) != 0) {
    FUN_00e9d710(*(undefined4 *)(iVar1 + 0x10));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe8);
  return;
}

// 00E9EA80  FUN_00e9ea80  size=168  [callgraph]
void FUN_00e9ea80(int param_1)

{
  int iVar1;
  undefined1 auStack_14 [12];
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_14;
  iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0);
  while( true ) {
    if (iVar1 == 0) {
      FUN_009f8ea0(&stack0xffffffe8,0x10,param_1,0);
      FUN_00dd5650(&DAT_016d20c8,&stack0xffffffe8);
      __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe8);
      return;
    }
    if (*(int *)(iVar1 + 8) == param_1) break;
    iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  }
  FUN_00e9d7a0(*(undefined4 *)(iVar1 + 0xc));
  if ((*(byte *)(iVar1 + 4) & 1) != 0) {
    FUN_00e9d7a0(*(undefined4 *)(iVar1 + 0x10));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe8);
  return;
}

// 00E9EBB0  FUN_00e9ebb0  size=600  [callgraph]
void __fastcall FUN_00e9ebb0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [16];
  undefined1 local_18 [20];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_30;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_009fe180(local_18,0x14,*(undefined4 *)(param_1 + 8),0);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016d21ac,*(undefined4 *)(param_1 + 8));
      __security_check_cookie(local_4 ^ (uint)&local_30);
      return;
    }
    FUN_009327d0(&local_30,*(undefined4 *)(param_1 + 8),0);
    if (local_30 == 0) {
      FUN_009f8ea0(local_28,0x10,*(undefined4 *)(param_1 + 8),0);
      FUN_00dd5650(&DAT_016d216c,local_28);
      __security_check_cookie(local_4 ^ (uint)&local_30);
      return;
    }
    iVar2 = FileRead::Manager_3(3,local_18,local_30,local_2c,param_1);
    iVar1 = 0;
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x4c) == 0) {
        *(undefined4 *)(iVar2 + 0x4c) = 1;
      }
      *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
      iVar1 = *(int *)(iVar2 + 0x28);
    }
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      __security_check_cookie(local_4 ^ (uint)&local_30);
      return;
    }
  }
  else {
    iVar2 = FUN_00e9c940(iVar1);
    if (iVar2 == 0) {
      FUN_00dd5650(&DAT_016d1e40,iVar1);
    }
    else {
      if (*(int *)(iVar2 + 0x4c) == 0) {
        *(undefined4 *)(iVar2 + 0x4c) = 1;
      }
      *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
    }
  }
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      iVar1 = FUN_009fe180(local_18,0x14,*(undefined4 *)(param_1 + 8),1);
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_016d21ac,*(undefined4 *)(param_1 + 8));
        __security_check_cookie(local_4 ^ (uint)&local_30);
        return;
      }
      iVar1 = FUN_00dec390(local_18);
      if (iVar1 == 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
        __security_check_cookie(local_4 ^ (uint)&local_30);
        return;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      FUN_009327d0(&local_30,*(undefined4 *)(param_1 + 8),1);
      if (local_30 == 0) {
        FUN_009f8ea0(local_28,0x10,*(undefined4 *)(param_1 + 8),0);
        FUN_00dd5650(&DAT_016d212c,local_28);
      }
      else {
        iVar1 = FUN_00e9e570(3,local_18,local_30,local_2c,param_1);
        *(int *)(param_1 + 0x10) = iVar1;
        if (iVar1 != 0) goto LAB_00e9edf4;
      }
      FileRead::Work::setListener(*(undefined4 *)(param_1 + 0xc),param_1);
      FUN_00e9d6a0(*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
      __security_check_cookie(local_4 ^ (uint)&local_30);
      return;
    }
    FileRead::Manager_2(*(int *)(param_1 + 0x10));
  }
LAB_00e9edf4:
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}

// 00E9EE10  FUN_00e9ee10  size=56  [callgraph]
void __fastcall FUN_00e9ee10(int param_1)

{
  if (0 < *(int *)(param_1 + 0x44)) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffff7;
  }
  FUN_00e9e630();
  if ((((*(int *)(param_1 + 4) == 3) && (*(int *)(param_1 + 0x4c) == 6)) &&
      (*(int *)(param_1 + 0x44) < 1)) && (*(int *)(param_1 + 0x40) != 0)) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

// 00E9EE50  FUN_00e9ee50  size=82  [callgraph]
void __fastcall FUN_00e9ee50(int param_1)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffef;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  while (*(int *)(param_1 + 0x4c) != 0) {
    if (0 < *(int *)(param_1 + 0x44)) {
      *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffff7;
    }
    FUN_00e9e630();
    if ((((*(int *)(param_1 + 4) == 3) && (*(int *)(param_1 + 0x4c) == 6)) &&
        (*(int *)(param_1 + 0x44) < 1)) && (*(int *)(param_1 + 0x40) != 0)) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      thunk_FUN_00debcd0();
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = 0;
      thunk_FUN_00debcd0();
    }
  }
  return;
}

// 00E9EEB0  FUN_00e9eeb0  size=31  [callgraph]
undefined4 FUN_00e9eeb0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = ObjReadSystem::requestWork(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00e9ebb0();
  return 1;
}

// 00E9EED0  FUN_00e9eed0  size=72  [callgraph]
void __fastcall FUN_00e9eed0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x6c),0);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fbd0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E9EF20  FUN_00e9ef20  size=132  [callgraph]
void __thiscall FUN_00e9ef20(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x74);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + uVar3 * 4);
      if ((*(int *)(iVar2 + 0x4c) != 0) && (*(int *)(iVar2 + 0x38) == param_2)) {
        *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffef;
        *(undefined4 *)(iVar2 + 0x40) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        while (*(int *)(iVar2 + 0x4c) != 0) {
          if (0 < *(int *)(iVar2 + 0x44)) {
            *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffff7;
          }
          FUN_00e9e630();
          if ((((*(int *)(iVar2 + 4) == 3) && (*(int *)(iVar2 + 0x4c) == 6)) &&
              (*(int *)(iVar2 + 0x44) < 1)) && (*(int *)(iVar2 + 0x40) != 0)) {
            *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
            thunk_FUN_00debcd0();
          }
          else {
            *(undefined4 *)(iVar2 + 0x48) = 0;
            thunk_FUN_00debcd0();
          }
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

// 00E9EFB0  FUN_00e9efb0  size=269  [callgraph]
void __fastcall FUN_00e9efb0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_18;
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + uVar2 * 4);
      if (*(int *)(iVar1 + 0x4c) == 0) {
LAB_00e9f01e:
        if (*(int *)(iVar1 + 0x30) != 0) {
          FUN_00e9cc50();
          if (*(int *)(iVar1 + 0x30) != 0) {
            FUN_00dd48d0(*(int *)(iVar1 + 0x30),0);
            *(undefined4 *)(iVar1 + 0x30) = 0;
          }
        }
        *(undefined4 *)(iVar1 + 0x30) = 0;
        *(undefined4 *)(iVar1 + 0x40) = 0;
        *(undefined4 *)(iVar1 + 0x44) = 0;
        if (*(int **)(iVar1 + 0x58) != (int *)0x0) {
          local_14 = *(undefined4 *)(iVar1 + 0x34);
          local_18 = 0;
          local_10 = *(undefined4 *)(iVar1 + 0x28);
          local_c = *(undefined4 *)(iVar1 + 4);
          local_8 = iVar1 + 8;
          (**(code **)(**(int **)(iVar1 + 0x58) + 0xc))(&local_18);
        }
        FUN_00dd4920(iVar1);
        if ((int)uVar2 < *(int *)(param_1 + 0x74)) {
          *(undefined4 *)(*(int *)(param_1 + 0x6c) + uVar2 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x6c) + -4 + *(int *)(param_1 + 0x74) * 4);
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        uVar3 = *(uint *)(param_1 + 0x74);
      }
      else {
        if (0 < *(int *)(iVar1 + 0x44)) {
          *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffff7;
        }
        FUN_00e9e630();
        if ((((*(int *)(iVar1 + 4) == 3) && (*(int *)(iVar1 + 0x4c) == 6)) &&
            (*(int *)(iVar1 + 0x44) < 1)) && (*(int *)(iVar1 + 0x40) != 0)) {
          *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
        }
        else {
          *(undefined4 *)(iVar1 + 0x48) = 0;
        }
        if (*(int *)(iVar1 + 0x4c) == 0) goto LAB_00e9f01e;
        uVar2 = uVar2 + 1;
      }
    } while (uVar2 < uVar3);
  }
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}

// 00E9F0C0  FUN_00e9f0c0  size=78  [callgraph]
void __fastcall FUN_00e9f0c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x6c),0);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fbd0();
                    /* WARNING: Could not recover jumptable at 0x00e9f109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E9F110  FUN_00e9f110  size=36  [callgraph]
undefined4 * __fastcall FUN_00e9f110(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}

// 00E9F140  FUN_00e9f140  size=16  [callgraph]
void FUN_00e9f140(void)

{
  FUN_00e9efb0();
  FUN_00e9d120();
  return;
}

// 00E9F150  FUN_00e9f150  size=78  [callgraph]
void __fastcall FUN_00e9f150(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x6c),0);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fbd0();
                    /* WARNING: Could not recover jumptable at 0x00e9f199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E9F380  FileRead::Listener::vf00  size=31  [class]
undefined4 * __thiscall FileRead::Listener::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

