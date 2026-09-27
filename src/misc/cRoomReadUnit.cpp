// src/misc/cRoomReadUnit.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A50090..00A50650, 8 functions

#include "mgrr.h"

// 00A50090  cRoomReadUnit::setRoomCleanup  size=249  [class]
void __thiscall cRoomReadUnit::setRoomCleanup(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int extraout_ECX;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 != 0) {
    if (param_2 == -2) {
      puVar2 = (uint *)(param_1 + 0x11);
      iVar4 = 8;
      while (puVar2[3] != 0xffffffff) {
        switch(puVar2[4]) {
        default:
          goto switchD_00a500c4_caseD_0;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
switchD_00a500c4_caseD_1:
          puVar2 = puVar2 + 0xf;
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) {
            return;
          }
        }
      }
switchD_00a500c4_caseD_0:
      if (param_3 == 0) {
        *puVar2 = *puVar2 & 0xfffffffb;
      }
      else {
        *puVar2 = *puVar2 | 4;
      }
      puVar1 = (uint *)(param_1 + 2);
      iVar3 = 8;
      do {
        if (*puVar1 == puVar2[1]) {
          *puVar1 = 0xffffffff;
        }
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      goto switchD_00a500c4_caseD_1;
    }
    iVar4 = FUN_00a4e380(param_2);
    if (iVar4 == 0) {
      FUN_00dd5650(&DAT_01662040);
      return;
    }
    if (param_3 == 0) {
      *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) & 0xfffffffb;
    }
    else {
      *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) | 4;
    }
    if (*(int *)(extraout_ECX + 8) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 8) = 0xffffffff;
    }
    if (*(int *)(extraout_ECX + 0xc) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 0xc) = 0xffffffff;
    }
    if (*(int *)(extraout_ECX + 0x10) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 0x10) = 0xffffffff;
    }
    if (*(int *)(extraout_ECX + 0x14) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 0x14) = 0xffffffff;
    }
    if (*(int *)(extraout_ECX + 0x18) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 0x18) = 0xffffffff;
    }
    if (*(int *)(extraout_ECX + 0x1c) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 0x1c) = 0xffffffff;
    }
    if (*(int *)(extraout_ECX + 0x20) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 0x20) = 0xffffffff;
    }
    if (*(int *)(extraout_ECX + 0x24) == *(int *)(iVar4 + 0x1c)) {
      *(undefined4 *)(extraout_ECX + 0x24) = 0xffffffff;
    }
  }
  return;
}

// 00A501B0  FUN_00a501b0  size=69  [callgraph]
undefined4 __fastcall FUN_00a501b0(int param_1)

{
  int *piVar1;
  
  if ((*(uint *)(param_1 + 0x18) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0x10;
    return 1;
  }
  if ((*(uint *)(param_1 + 0x18) & 2) != 0) {
    return 0;
  }
  piVar1 = (int *)FUN_0092c060();
  (**(code **)(*piVar1 + 4))();
  FUN_00a4e4b0(param_1);
  *(undefined4 *)(param_1 + 0x28) = 0xc;
  return 1;
}

// 00A50200  FUN_00a50200  size=26  [callgraph]
undefined4 __fastcall FUN_00a50200(int param_1)

{
  FUN_00a4e610(param_1);
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  return 1;
}

// 00A50220  FUN_00a50220  size=56  [callgraph]
undefined4 __fastcall FUN_00a50220(undefined4 *param_1)

{
  int *piVar1;
  
  FUN_00a4db00(*param_1);
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x10))(*param_1);
  FUN_00e51d60(param_1);
  param_1[10] = 0x11;
  return 1;
}

// 00A50260  FUN_00a50260  size=8  [callgraph]
void FUN_00a50260(void)

{
  FUN_00a4ff30();
  return;
}

// 00A50280  FUN_00a50280  size=262  [callgraph]
void __fastcall FUN_00a50280(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x14c) != 0) {
      *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x188) != 0) {
      *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x1c4) != 0) {
      *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1b4) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x200) != 0) {
      *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & 0xfffffffe;
    }
    if (*(int *)(param_1 + 8) != 0) {
      if (*(int *)(param_1 + 0x5c) != 0) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
      }
      if (*(int *)(param_1 + 0x98) != 0) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffd;
      }
      if (*(int *)(param_1 + 0xd4) != 0) {
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffd;
      }
      if (*(int *)(param_1 + 0x110) != 0) {
        *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & 0xfffffffd;
      }
      if (*(int *)(param_1 + 0x14c) != 0) {
        *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffd;
      }
      if (*(int *)(param_1 + 0x188) != 0) {
        *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfffffffd;
      }
      if (*(int *)(param_1 + 0x1c4) != 0) {
        *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1b4) & 0xfffffffd;
      }
      if (*(int *)(param_1 + 0x200) != 0) {
        *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & 0xfffffffd;
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

// 00A50390  FUN_00a50390  size=690  [callgraph]
void __fastcall FUN_00a50390(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 1;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x110) = 1;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1bc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x200) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 1;
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    *(uint *)(param_1 + 0x178) = *(uint *)(param_1 + 0x178) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x1c4) != 0) {
    *(uint *)(param_1 + 0x1b4) = *(uint *)(param_1 + 0x1b4) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x200) != 0) {
    *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & 0xfffffffd;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

// 00A50650  FUN_00a50650  size=13  [callgraph]
void FUN_00a50650(void)

{
  cRoomReadUnit::setRoomCleanup(0xfffffffe,1);
  return;
}

