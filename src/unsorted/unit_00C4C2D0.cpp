// src/unsorted/unit_00C4C2D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C4C2D0..00C4CBF0, 11 functions

#include "mgrr.h"

// 00C4C2D0  FUN_00c4c2d0  size=87  [run]
void __fastcall FUN_00c4c2d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x3c);
    do {
      *piVar1 = (int)(piVar1 + -0x20);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x11;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0x44) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x3c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C4C330  FUN_00c4c330  size=86  [run]
void __fastcall FUN_00c4c330(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x40);
    do {
      *piVar1 = (int)(piVar1 + -0x22);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 0x48) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C4C430  FUN_00c4c430  size=83  [run]
void __fastcall FUN_00c4c430(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x18);
    do {
      *piVar1 = (int)(piVar1 + -0xe);
      piVar1[1] = (int)(piVar1 + 2);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) * 0x20 + -4 + *(int *)(param_1 + 4)) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C4C4E0  FUN_00c4c4e0  size=797  [run]
void FUN_00c4c4e0(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_120 [4];
  undefined2 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_20;
  
  FUN_00405230();
  local_9c = 0;
  local_98 = 0;
  local_a0 = 0;
  local_20 = 0;
  FUN_00a7c950();
  local_8c = 0xffff;
  local_58 = 0;
  local_5c = 0;
  local_88 = 0;
  local_84 = 0;
  do {
    puVar5 = (undefined4 *)((param_2 + param_3 >> 1) * 0x90 + param_1);
    local_9c = puVar5[1];
    local_a0 = *puVar5;
    local_98 = puVar5[2];
    FUN_008a4f80(puVar5 + 4);
    local_20 = puVar5[0x20];
    iVar7 = param_3;
    iVar8 = param_2;
    do {
      iVar6 = iVar8 * 0x90 + param_1;
      cVar4 = (*param_4)(iVar6,&local_a0);
      while (cVar4 != '\0') {
        iVar6 = iVar6 + 0x90;
        iVar8 = iVar8 + 1;
        cVar4 = (*param_4)(iVar6,&local_a0);
      }
      iVar6 = iVar7 * 0x90 + param_1;
      cVar4 = (*param_4)(&local_a0,iVar6);
      while (cVar4 != '\0') {
        iVar6 = iVar6 + -0x90;
        iVar7 = iVar7 + -1;
        cVar4 = (*param_4)(&local_a0,iVar6);
      }
      if (iVar7 < iVar8) break;
      if (iVar7 != iVar8) {
        FUN_00a7c930();
        FUN_00a7c950();
        uStack_108 = 0x41400000;
        uStack_11c = 0xffff;
        uStack_110 = 0x3f000000;
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_fc = 0;
        uStack_d4 = 0;
        uStack_f8 = 0;
        uStack_e4 = 0;
        uStack_118 = 0;
        uStack_10c = 0;
        uStack_114 = 0;
        uStack_f0 = 0;
        uStack_ec = 0;
        uStack_d8 = 0;
        uStack_dc = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_bc = 1;
        uStack_c0 = 0xffffffff;
        uStack_b0 = 0;
        FUN_00a7c950();
        uStack_ec = 0;
        uStack_118 = 0;
        puVar5 = (undefined4 *)(iVar7 * 0x90 + param_1);
        uVar1 = puVar5[1];
        uStack_e8 = uStack_e8 & 0xffff0000;
        uVar3 = *puVar5;
        uVar2 = puVar5[2];
        uStack_11c = 0xffff;
        puVar9 = (undefined4 *)(iVar8 * 0x90 + param_1);
        uStack_114 = 0;
        FUN_008a4f80(puVar5 + 4);
        uStack_b0 = puVar5[0x20];
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar5[2] = puVar9[2];
        FUN_008a4f80(puVar9 + 4);
        puVar5[0x20] = puVar9[0x20];
        puVar9[1] = uVar1;
        *puVar9 = uVar3;
        puVar9[2] = uVar2;
        FUN_008a4f80(auStack_120);
        puVar9[0x20] = uStack_b0;
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar8 <= iVar7);
    if (param_2 < iVar7) {
      FUN_00c4c4e0(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}

// 00C4C870  FUN_00c4c870  size=88  [run]
void __fastcall FUN_00c4c870(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x40);
    do {
      *piVar1 = (int)(piVar1 + -0x24);
      piVar1[1] = (int)(piVar1 + 4);
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + -0xc + *(int *)(param_1 + 8) * 0x50) = 0;
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x40) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C4C940  FUN_00c4c940  size=74  [run]
void __fastcall FUN_00c4c940(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      if (*(undefined4 **)(iVar1 + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar1 + 8))(1);
      }
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00C4C990  FUN_00c4c990  size=44  [run]
void __fastcall FUN_00c4c990(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C4CB60  FUN_00c4cb60  size=44  [run]
void __fastcall FUN_00c4cb60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C4CB90  FUN_00c4cb90  size=44  [run]
void __fastcall FUN_00c4cb90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C4CBC0  FUN_00c4cbc0  size=44  [run]
void __fastcall FUN_00c4cbc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C4CBF0  FUN_00c4cbf0  size=44  [run]
void __fastcall FUN_00c4cbf0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

