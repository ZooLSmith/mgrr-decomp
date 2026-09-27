// src/effect/cEspList.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F40B30..00F45620, 10 functions

#include "mgrr.h"
#include "cEspList.h"

// 00F40B30  cEspList::vf0C  size=12  [class]
void cEspList::vf0C(void)

{
  FUN_00dd5650(&DAT_016df7e8);
  return;
}

// 00F40B50  cEspList::preTrans  size=12  [class]
void cEspList::preTrans(void)

{
  FUN_00dd5650(&DAT_016df810);
  return;
}

// 00F435A0  cEspList::vf04  size=27  [class]
bool cEspList::vf04(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00f452d0(param_1,param_2);
  return iVar1 != 0;
}

// 00F435C0  cEspList::vf08  size=116  [class]
void __fastcall cEspList::vf08(int *param_1)

{
  int *piVar1;
  int local_8;
  undefined1 local_4 [4];
  
  local_8 = param_1[6];
  if (local_8 != param_1[7]) {
    do {
      piVar1 = (int *)(**(code **)(*param_1 + 0x20))(local_4,&local_8);
      local_8 = *piVar1;
    } while (local_8 != param_1[7]);
  }
  if (param_1[2] != 0) {
    if (param_1[2] != 0) {
      FUN_00dd48d0(param_1[2],0);
      param_1[2] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_1[1];
    param_1[6] = param_1[1];
    param_1[7] = param_1[1];
  }
  return;
}

// 00F43640  cEspList::vf10  size=123  [class]
void __fastcall cEspList::vf10(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *local_c [2];
  undefined1 local_4 [4];
  
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
LAB_00f436aa:
      local_c[0] = (int *)local_c[0][2];
    }
    if (((uVar3 & 0x20000000) != 0) || ((uVar3 >> 0x1e & 1) == 0)) {
      *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 0x40000000;
      goto LAB_00f436aa;
    }
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x20))(local_4,local_c);
    local_c[0] = (int *)*puVar4;
  } while( true );
}

// 00F436C0  cEspList::vf18  size=115  [class]
void __fastcall cEspList::vf18(int param_1)

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

// 00F440B0  cEspList::vf1C  size=29  [class]
undefined4 __thiscall cEspList::vf1C(int param_1,undefined4 param_2)

{
  cFixedList::insert_29(param_2,param_1 + 0x1c,&stack0x00000008);
  return param_2;
}

// 00F441C0  cEspList::cEspList_2  size=107  [class]
void __fastcall cEspList::cEspList_2(undefined4 *param_1)

{
  *param_1 = EspListThread::vftable;
  param_1[0x59a] = 0;
  param_1[0x59b] = 0;
  param_1[0x59c] = 0;
  FUN_00ec7540();
  FUN_00dd7270();
  *param_1 = vftable;
  if (param_1[2] != 0) {
    if (param_1[2] != 0) {
      FUN_00dd48d0(param_1[2],0);
      param_1[2] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_1[1];
    param_1[6] = param_1[1];
    param_1[7] = param_1[1];
  }
  return;
}

// 00F455D0  cEspList::cEspList  size=74  [class]
void __fastcall cEspList::cEspList(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[2] != 0) {
    if (param_1[2] != 0) {
      FUN_00dd48d0(param_1[2],0);
      param_1[2] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_1[1];
    param_1[6] = param_1[1];
    param_1[7] = param_1[1];
  }
  return;
}

// 00F45620  cEspList::vf00  size=94  [class]
undefined4 * __thiscall cEspList::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[2] != 0) {
    if (param_1[2] != 0) {
      FUN_00dd48d0(param_1[2],0);
      param_1[2] = 0;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = param_1[1];
    param_1[6] = param_1[1];
    param_1[7] = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

