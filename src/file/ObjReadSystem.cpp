// src/file/ObjReadSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E9C120..00E9FBD0, 41 functions

#include "types.h"

// 00E9C120  FUN_00e9c120  size=77  [callgraph]
void __thiscall FUN_00e9c120(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *param_2;
  iVar2 = 0;
  if (cVar1 != '\0') {
    iVar3 = param_1 - (int)param_2;
    do {
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      param_2[iVar3] = cVar1;
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    if (0x1f < iVar2) {
      return;
    }
  }
  _memset((void *)(iVar2 + param_1),0,0x20 - iVar2);
  return;
}

// 00E9C170  FUN_00e9c170  size=114  [callgraph]
bool __thiscall FUN_00e9c170(byte *param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  do {
    if (*(int *)param_1 != *(int *)param_2) {
      iVar2 = (uint)*param_1 - (uint)*param_2;
      if (((iVar2 == 0) && (iVar2 = (uint)param_1[1] - (uint)param_2[1], iVar2 == 0)) &&
         (iVar2 = (uint)param_1[2] - (uint)param_2[2], iVar2 == 0)) {
        iVar2 = (uint)param_1[3] - (uint)param_2[3];
      }
      return (iVar2 >> 0x1f | 1U) == 0;
    }
    uVar1 = uVar1 - 4;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  } while (3 < uVar1);
  return true;
}

// 00E9C200  FUN_00e9c200  size=64  [callgraph]
void __thiscall FUN_00e9c200(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x54) = param_2[5];
  *(undefined4 *)(param_1 + 0x58) = param_2[6];
  FUN_00e9c120(param_2[1]);
  if ((*(byte *)(param_2 + 3) & 1) != 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x20;
  }
  return;
}

// 00E9C480  ObjReadSystem::Work::Work_2  size=59  [class]
undefined4 * __fastcall ObjReadSystem::Work::Work_2(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00de3530();
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_00de3540(0,0);
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}

// 00E9C520  FUN_00e9c520  size=182  [between]
void __fastcall FUN_00e9c520(int param_1)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_10;
  uVar1 = 4;
  if ((*(uint *)(param_1 + 4) & 1) == 0) {
    if ((*(uint *)(param_1 + 4) & 2) == 0) {
      FUN_00dd5650(&DAT_016d1c20);
    }
  }
  else {
    uVar1 = 0xc;
  }
  if ((*(uint *)(param_1 + 4) & uVar1) == uVar1) {
    if (-1 < (int)*(uint *)(param_1 + 4)) {
      FUN_00dd5650(&DAT_016d1bdc);
    }
    FUN_00de3530();
    local_10 = *(undefined4 *)(param_1 + 8);
    local_c = *(undefined4 *)(param_1 + 0x14);
    local_8 = *(undefined4 *)(param_1 + 0x18);
    FUN_00932820(&local_10);
    FUN_00e51db0(&local_c,1);
    thunk_FUN_00e00d60(local_10,&local_c);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0x7fffffff;
  }
  __security_check_cookie(local_4 ^ (uint)&local_10);
  return;
}

// 00E9C5E0  ObjReadSystem::Work::onFileReadEnd  size=77  [class]
void __thiscall ObjReadSystem::Work::onFileReadEnd(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 8) == param_1[3]) {
    param_1[3] = 0;
  }
  else if (*(int *)(param_2 + 8) == param_1[4]) {
    param_1[4] = 0;
  }
  else {
    FUN_00dd5650(&DAT_016d1c64);
  }
  if ((param_1[3] == 0) && (param_1[4] == 0)) {
    (**(code **)*param_1)(1);
  }
  return;
}

// 00E9CBC0  FUN_00e9cbc0  size=120  [callgraph]
void __fastcall FUN_00e9cbc0(int param_1)

{
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if ((*(uint *)(param_1 + 0x3c) & 2) == 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
    local_14 = *(int *)(param_1 + 0x30);
    if (local_14 != 0) {
      local_c = *(undefined4 *)(param_1 + 0x28);
      local_10 = *(undefined4 *)(param_1 + 0x34);
      local_8 = *(undefined4 *)(param_1 + 4);
      local_4 = param_1 + 8;
      switch(local_8) {
      case 1:
      case 2:
      case 3:
        FUN_00de4420(local_14,local_10,local_4);
      }
      if (*(int **)(param_1 + 0x58) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x58) + 4))(&local_14);
      }
      FUN_00932660(&local_14);
    }
  }
  return;
}

// 00E9CC50  FUN_00e9cc50  size=139  [callgraph]
void __fastcall FUN_00e9cc50(int param_1)

{
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  if ((*(uint *)(param_1 + 0x3c) & 2) != 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffd;
    local_14 = *(int *)(param_1 + 0x30);
    if (local_14 != 0) {
      local_c = *(undefined4 *)(param_1 + 0x28);
      local_8 = *(undefined4 *)(param_1 + 4);
      local_10 = *(undefined4 *)(param_1 + 0x34);
      local_4 = param_1 + 8;
      FUN_009326b0(&local_14);
      if (*(int **)(param_1 + 0x58) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x58) + 8))(&local_14);
      }
      switch(local_8) {
      case 1:
      case 2:
      case 3:
        FUN_00de48a0(local_14);
        EffectResourceManager::OnDestroyResource(local_14,local_10);
      }
    }
  }
  return;
}

// 00E9CD00  FUN_00e9cd00  size=39  [callgraph]
void __fastcall FUN_00e9cd00(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00e9cc50();
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x30),0);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 00E9CD30  FUN_00e9cd30  size=41  [callgraph]
bool FUN_00e9cd30(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(DAT_01dda8e8 + 0x40))(0x24,0x200,4,&DAT_01b7bcf0,"ObjReadSystemWork");
  return iVar1 != 0;
}

// 00E9CDC0  ObjReadSystem::Work::callOnReadEnd  size=182  [class]
void __fastcall ObjReadSystem::Work::callOnReadEnd(int param_1)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_10;
  uVar1 = 4;
  if ((*(uint *)(param_1 + 4) & 1) == 0) {
    if ((*(uint *)(param_1 + 4) & 2) == 0) {
      FUN_00dd5650(&DAT_016d1dd0);
    }
  }
  else {
    uVar1 = 0xc;
  }
  if ((*(uint *)(param_1 + 4) & uVar1) == uVar1) {
    if ((int)*(uint *)(param_1 + 4) < 0) {
      FUN_00dd5650(&DAT_016d1d90);
    }
    FUN_00de3530();
    local_10 = *(undefined4 *)(param_1 + 8);
    local_c = *(undefined4 *)(param_1 + 0x14);
    local_8 = *(undefined4 *)(param_1 + 0x18);
    FUN_00e51d80(&local_c,1);
    thunk_FUN_00e00c50(local_10,&local_c);
    FUN_00932810(&local_10);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  }
  __security_check_cookie(local_4 ^ (uint)&local_10);
  return;
}

// 00E9CE80  ObjReadSystem::Work::onFileReadEnd_2  size=96  [class]
void __thiscall ObjReadSystem::Work::onFileReadEnd_2(int param_1,int param_2)

{
  FUN_00e9c520();
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
    FUN_00de3570(0,0);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 0x10)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffff7;
    FUN_00de3570(0,1);
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  FUN_00dd5650(&DAT_016d1c64);
  return;
}

// 00E9CEE0  FUN_00e9cee0  size=123  [between]
undefined4 __fastcall FUN_00e9cee0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x40))(0x5c,0x400,4,&DAT_01b7bcf0,"FileReadWork");
  if (iVar1 != 0) {
    iVar1 = FUN_00e9f4a0(0x400,&DAT_01b7bcf0);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      return 1;
    }
  }
  return 0;
}

// 00E9CF60  FUN_00e9cf60  size=75  [between]
undefined4 __thiscall FUN_00e9cf60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x74) != 0) {
      piVar2 = *(int **)(param_1 + 0x6c);
      do {
        iVar1 = *piVar2;
        if ((*(int *)(iVar1 + 0x4c) != 0) && (*(int *)(iVar1 + 0x28) == param_2)) {
          switch(*(undefined4 *)(iVar1 + 0x4c)) {
          default:
            return 1;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 8:
          case 9:
            return 0;
          }
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x74));
    }
  }
  return 1;
}

// 00E9CFE0  FUN_00e9cfe0  size=75  [between]
undefined4 __thiscall FUN_00e9cfe0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x74) != 0) {
      piVar2 = *(int **)(param_1 + 0x6c);
      do {
        iVar1 = *piVar2;
        if ((*(int *)(iVar1 + 0x4c) != 0) && (*(int *)(iVar1 + 0x28) == param_2)) {
          switch(*(undefined4 *)(iVar1 + 0x4c)) {
          default:
            return 0;
          case 6:
            return 1;
          }
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x74));
    }
  }
  return 0;
}

// 00E9D060  FUN_00e9d060  size=72  [between]
undefined4 __thiscall FUN_00e9d060(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x74) != 0) {
      piVar2 = *(int **)(param_1 + 0x6c);
      do {
        iVar1 = *piVar2;
        if ((*(int *)(iVar1 + 0x4c) != 0) && (*(int *)(iVar1 + 0x28) == param_2)) {
          if (*(int *)(iVar1 + 0x4c) != 1) {
            return 0;
          }
          if ((*(byte *)(iVar1 + 0x3c) & 4) == 0) {
            return 0;
          }
          return 1;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x74));
    }
  }
  return 0;
}

// 00E9D0B0  FUN_00e9d0b0  size=80  [between]
undefined4 __thiscall FUN_00e9d0b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x74) != 0) {
      piVar2 = *(int **)(param_1 + 0x6c);
      do {
        iVar1 = *piVar2;
        if ((*(int *)(iVar1 + 0x4c) != 0) && (*(int *)(iVar1 + 0x28) == param_2)) {
          switch(*(undefined4 *)(iVar1 + 0x4c)) {
          default:
            return 0;
          case 6:
            return *(undefined4 *)(iVar1 + 0x30);
          }
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x74));
    }
  }
  return 0;
}

// 00E9D120  FUN_00e9d120  size=67  [between]
void __fastcall FUN_00e9d120(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar2 = *(uint *)(param_1 + 0x74);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x6c) + uVar4 * 4);
        if (*(int *)(iVar3 + 0x4c) != 0) {
          puVar1 = (uint *)(iVar3 + 0x3c);
          *puVar1 = *puVar1 & 0xfffffff7;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    return;
  }
  FileRead::Manager();
  return;
}

// 00E9D170  FUN_00e9d170  size=61  [between]
void FUN_00e9d170(undefined4 param_1)

{
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_24;
  FUN_00e9c120(param_1);
  FUN_00e9c8f0(local_24);
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9D1E0  FUN_00e9d1e0  size=89  [between]
undefined4 __fastcall FUN_00e9d1e0(undefined4 *param_1)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0xf) & 1) == 0) &&
     ((0 < (int)param_1[0x10] || (0 < (int)param_1[0x11])))) {
    iVar1 = thunk_FUN_00debc80(*param_1);
    if (iVar1 != 0) {
      return 0;
    }
    FUN_00e9cbc0();
    param_1[0x13] = 6;
    param_1[0x14] = 0;
    return 1;
  }
  param_1[0x13] = 4;
  param_1[0x14] = 0;
  return 1;
}

// 00E9D240  FUN_00e9d240  size=128  [between]
void __thiscall FUN_00e9d240(int param_1,int param_2)

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
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x40))) {
    _strcpy_s(local_24,0x20,(char *)(param_1 + 8));
    FUN_00dd5650(&DAT_016d1e14,local_24);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  __security_check_cookie(local_4 ^ (uint)local_24);
  return;
}

// 00E9D2C0  FUN_00e9d2c0  size=112  [between]
undefined4 __fastcall FUN_00e9d2c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (uVar2 = 0, DAT_01dda8b4 != 0)) {
    do {
      iVar1 = *(int *)(DAT_01dda8ac + uVar2 * 4);
      if ((*(int *)(iVar1 + 0x4c) != 0) && (*(int *)(iVar1 + 0x28) == *(int *)(param_1 + 0xc))) {
        switch(*(undefined4 *)(iVar1 + 0x4c)) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 9:
          goto switchD_00e9d323_caseD_1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_01dda8b4);
  }
  if (((*(byte *)(param_1 + 4) & 1) == 0) ||
     (iVar1 = FUN_00e9cf60(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    return 1;
  }
switchD_00e9d323_caseD_1:
  return 0;
}

// 00E9D350  FUN_00e9d350  size=102  [between]
undefined4 __fastcall FUN_00e9d350(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (uVar2 = 0, DAT_01dda8b4 != 0)) {
    do {
      iVar1 = *(int *)(DAT_01dda8ac + uVar2 * 4);
      if ((*(int *)(iVar1 + 0x4c) != 0) && (*(int *)(iVar1 + 0x28) == *(int *)(param_1 + 0xc))) {
        if ((*(int *)(iVar1 + 0x4c) == 1) && ((*(byte *)(iVar1 + 0x3c) & 4) != 0)) {
          return 1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_01dda8b4);
  }
  if (((*(byte *)(param_1 + 4) & 1) != 0) &&
     (iVar1 = FUN_00e9d060(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

// 00E9D3C0  ObjReadSystem::Work::onFileReadEnd_3  size=116  [class]
void __thiscall ObjReadSystem::Work::onFileReadEnd_3(int param_1,undefined4 *param_2)

{
  if (param_2[2] == *(int *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    FUN_00de3570(*param_2,0);
    *(undefined4 *)(param_1 + 0x1c) = param_2[1];
    callOnReadEnd();
    return;
  }
  if (param_2[2] == *(int *)(param_1 + 0x10)) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 8;
    FUN_00de3570(*param_2,1);
    *(undefined4 *)(param_1 + 0x20) = param_2[1];
    callOnReadEnd();
    return;
  }
  FUN_00dd5650(&DAT_016d1c64);
  callOnReadEnd();
  return;
}

// 00E9EB50  ObjReadSystem::requestWork  size=88  [class]
int ObjReadSystem::requestWork(void)

{
  int iVar1;
  int unaff_retaddr;
  
  for (iVar1 = (**(code **)(DAT_01dda8e8 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(int *)(iVar1 + 8) == unaff_retaddr) {
      return iVar1;
    }
  }
  iVar1 = Work::Work();
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = unaff_retaddr;
    return iVar1;
  }
  FUN_00dd5650(&DAT_016d2104);
  return 0;
}

// 00E9F4A0  FUN_00e9f4a0  size=120  [callgraph]
undefined4 __thiscall FUN_00e9f4a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 00E9F5E0  ObjReadSystem::Work::Work  size=97  [class]
undefined4 * ObjReadSystem::Work::Work(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_00dd2bc0();
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *puVar1 = vftable;
    FUN_00de3530();
    puVar1[1] = 0;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0;
    puVar1[4] = 0;
    FUN_00de3540(0,0);
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}

// 00E9F7A0  FUN_00e9f7a0  size=104  [between]
undefined4 * FUN_00e9f7a0(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd2bc0();
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x5c);
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  *_Dst = 0;
  _Dst[1] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xc] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  _Dst[0x10] = 0;
  _Dst[0x11] = 0;
  _Dst[0x13] = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  return _Dst;
}

// 00E9F810  FUN_00e9f810  size=43  [between]
void __fastcall FUN_00e9f810(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E9F8E0  FUN_00e9f8e0  size=21  [between]
undefined4 * __fastcall FUN_00e9f8e0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E9F920  FUN_00e9f920  size=43  [between]
void __fastcall FUN_00e9f920(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E9F990  FUN_00e9f990  size=21  [between]
undefined4 * __fastcall FUN_00e9f990(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E9FA30  FUN_00e9fa30  size=38  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e9fa30(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00E9FA60  FUN_00e9fa60  size=60  [between]
void __fastcall FUN_00e9fa60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

// 00E9FAA0  FUN_00e9faa0  size=30  [between]
undefined4 __thiscall FUN_00e9faa0(undefined4 param_1,byte param_2)

{
  FUN_00e9d920();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E9FAC0  ObjReadSystem::Work::vf00  size=30  [class]
undefined4 __thiscall ObjReadSystem::Work::vf00(undefined4 param_1,byte param_2)

{
  FileRead::Listener::Listener();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E9FAE0  FUN_00e9fae0  size=36  [callgraph]
void __fastcall FUN_00e9fae0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fa60();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E9FB10  FUN_00e9fb10  size=42  [callgraph]
void __fastcall FUN_00e9fb10(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fa60();
                    /* WARNING: Could not recover jumptable at 0x00e9fb35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E9FB80  FUN_00e9fb80  size=21  [callgraph]
undefined4 * __fastcall FUN_00e9fb80(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E9FBA0  FUN_00e9fba0  size=36  [callgraph]
void __fastcall FUN_00e9fba0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e9fa60();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E9FBD0  FUN_00e9fbd0  size=182  [callgraph]
void __fastcall FUN_00e9fbd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&uStack_18;
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
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
        uStack_18 = *(undefined4 *)(iVar1 + 0x34);
        uStack_14 = *(undefined4 *)(iVar1 + 0x28);
        uStack_10 = *(undefined4 *)(iVar1 + 4);
        iStack_c = iVar1 + 8;
        (**(code **)(**(int **)(iVar1 + 0x58) + 0xc))(&stack0xffffffe4);
      }
      FUN_00dd4920(iVar1);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe4);
  return;
}

