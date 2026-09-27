// src/phase/app/p140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D47E70..00D70180, 7 functions

#include "mgrr.h"
#include "P140.h"

// 00D47E70  P140::vf18  size=1  [class]
void P140::vf18(void)

{
  return;
}

// 00D47E80  P140::vf1C  size=59  [class]
void P140::vf1C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00fdbbd0(param_2,"P140_IN");
  if ((iVar1 == 0) && (iVar1 = FUN_00fdbbd0(param_2,"P140_DOOR_CHECK"), iVar1 == 0)) {
    return;
  }
  uVar2 = 1;
  FUN_00c1cf50(1);
  FUN_00c1d3f0(uVar2);
  return;
}

// 00D47EC0  P140::vf10  size=1  [class]
void P140::vf10(void)

{
  return;
}

// 00D61770  P140::vf0C  size=162  [class]
void __fastcall P140::vf0C(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    iVar1 = FUN_00fdbbd0(DAT_018b925c,"P140_ADD_SET");
    if (iVar1 != 0) {
      iVar1 = FUN_00c18f70(1,0);
      if (iVar1 != 0) {
        iVar1 = FUN_00c18d20(1,0);
        if (iVar1 != 0) {
          iVar1 = FUN_00c81da0(0x3d);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x11c) = 1;
            FUN_00d5ea40("P140_DOGTAG_OUT",1,0);
          }
        }
      }
    }
  }
  piVar2 = (int *)FUN_00a6e640();
  iVar1 = (**(code **)(*piVar2 + 0x20))(0x50,1,2);
  if (iVar1 != 0) {
    DAT_01bea060 = DAT_01bea060 | 0x80000;
    return;
  }
  DAT_01bea060 = DAT_01bea060 & 0xfff7ffff;
  return;
}

// 00D67680  P140::vf14  size=596  [class]
void __thiscall P140::vf14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined **local_90;
  undefined1 *local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  iVar1 = FUN_00fdbbd0(param_3,"P140_START");
  if (iVar1 == 0) {
    iVar1 = FUN_00fdbbd0(param_3,"P140_ADD_SET");
    if (iVar1 == 0) {
      iVar1 = FUN_00fdbbd0(param_3,"P140_DOOR_CHECK");
      if (iVar1 == 0) {
        iVar1 = FUN_00fdbbd0(param_3,"P140_DOGTAG_OUT");
        if (iVar1 == 0) {
          iVar1 = FUN_00fdbbd0(param_3,"P140_HOTEL_BTL_END");
          if (iVar1 == 0) {
            iVar1 = FUN_00fdbbd0(param_3,"P140_HOTEL_IN");
            if (iVar1 == 0) goto LAB_00d678a2;
          }
          local_8c = local_80;
          local_88 = 0;
          local_84 = 0x20;
          local_90 = lib::StaticArray<EntityHandle,32>::vftable;
          FUN_00a7f520(0xe0052,0x11e,&local_90);
          puVar3 = local_8c;
          if (local_8c != local_8c + local_88 * 4) {
            do {
              iVar1 = FUN_00a81330();
              if (iVar1 != 0) {
                FUN_00a7c8a0();
                FUN_008f3c70();
              }
              puVar3 = puVar3 + 4;
            } while (puVar3 != local_8c + local_88 * 4);
          }
          if (local_8c != (undefined1 *)0x0) {
            local_88 = 0;
          }
          FUN_00a7f520(0xe0058,0x11e,&local_90);
          puVar3 = local_8c;
          if (local_8c != local_8c + local_88 * 4) {
            do {
              iVar1 = FUN_00a81330();
              if (iVar1 != 0) {
                FUN_00a7c8a0();
                FUN_008f3c70();
              }
              puVar3 = puVar3 + 4;
            } while (puVar3 != local_8c + local_88 * 4);
          }
        }
        else {
          iVar1 = FUN_00945560(1);
          piVar2 = (int *)FUN_00a6e640();
          (**(code **)(*piVar2 + 0x48))(*(undefined2 *)(iVar1 + 0x14),1);
          if (*(int *)(iVar1 + 0x1c) != 0) {
            uVar4 = FUN_00a7c8a0();
            piVar2 = (int *)FUN_009450b0(uVar4);
            (**(code **)(*piVar2 + 0x330))();
          }
        }
      }
      else {
        uVar4 = 1;
        FUN_00c1cf50(1);
        FUN_00c1d3f0(uVar4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
  }
  else {
    piVar2 = (int *)FUN_00c18350();
    (**(code **)(*piVar2 + 0x60))(0x11d);
    piVar2 = (int *)FUN_00c18350();
    (**(code **)(*piVar2 + 0x60))(0x11e);
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x58))(0x11d,1);
    piVar2 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar2 + 0x58))(0x11e,1);
  }
LAB_00d678a2:
  iVar1 = FUN_00a7f600(0xe0057);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x20))();
    }
  }
  return;
}

// 00D678E0  P140::vf08  size=263  [class]
void __fastcall P140::vf08(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined **local_90;
  undefined1 *local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  FUN_00c81e90(0x3d);
  local_8c = local_80;
  local_88 = 0;
  local_84 = 0x20;
  local_90 = lib::StaticArray<EntityHandle,32>::vftable;
  FUN_00a7f520(0xe0052,0x11e,&local_90);
  puVar2 = local_8c;
  if (local_8c != local_8c + local_88 * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
        FUN_008f3c80();
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != local_8c + local_88 * 4);
  }
  if (local_8c != (undefined1 *)0x0) {
    local_88 = 0;
  }
  FUN_00a7f520(0xe0058,0x11e,&local_90);
  puVar2 = local_8c;
  if (local_8c != local_8c + local_88 * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
        FUN_008f3c80();
      }
      puVar2 = puVar2 + 4;
    } while (puVar2 != local_8c + local_88 * 4);
  }
  return;
}

// 00D70180  P140::vf00  size=54  [class]
undefined4 * __thiscall P140::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cPhaseAbstract::vftable;
  param_1[3] = lib::Array<int>::vftable;
  if (param_1[4] != 0) {
    param_1[5] = 0;
  }
  param_1[4] = 0;
  param_1[6] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

