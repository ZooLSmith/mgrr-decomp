// src/unsorted/unit_00D604D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D604D0..00D60590, 2 functions

#include "mgrr.h"

// 00D604D0  FUN_00d604d0  size=184  [run]
void FUN_00d604d0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 local_94;
  int *local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80 [32];
  
  local_90 = local_80;
  local_94 = 0;
  local_8c = 0x20;
  local_88 = 0;
  local_84 = 0;
  uVar1 = FUN_00e03ea0(&DAT_016bdc5c);
  FUN_00a18df0(&local_94,uVar1);
  piVar4 = local_90;
  if (local_90 != local_90 + local_88) {
    do {
      if ((*piVar4 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        if (param_1 == 1) {
          pcVar3 = *(code **)(*piVar2 + 0x1c);
        }
        else {
          pcVar3 = *(code **)(*piVar2 + 0x20);
        }
        (*pcVar3)();
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != local_90 + local_88);
  }
  if ((local_90 != (int *)0x0) && (local_88 = 0, local_84 != 0)) {
    FUN_00dd48d0(local_90,0);
  }
  return;
}

// 00D60590  FUN_00d60590  size=602  [run]
void FUN_00d60590(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  undefined4 uVar9;
  
  DAT_01bea094 = DAT_01bea094 | 0x200000;
  DAT_01bea090 = DAT_01bea090 | 0x80c000;
  DAT_01bea060 = DAT_01bea060 | 0x100000;
  FUN_00a7c950();
  uVar9 = 0xf0012;
  uVar3 = FUN_00e03ea0("TOWER",0xf0012);
  iVar4 = FUN_00a18d70(uVar3,uVar9);
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x20))();
  }
  uVar9 = 0xf0015;
  uVar3 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar4 = FUN_00a18d70(uVar3,uVar9);
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 0x1c))();
  }
  FUN_00d4cbb0(0x40000000);
  do {
    iVar4 = FUN_00a7f600(0x2020b);
    piVar5 = (int *)FUN_00c13920();
    iVar6 = (**(code **)(*piVar5 + 0x28))(0xffffffff);
    if (iVar4 == 0) {
LAB_00d6068e:
      if (iVar6 != 0) {
        uVar9 = 0x42200000;
        uVar3 = 0;
        FUN_00a7c8a0(0,0x42200000);
        iVar4 = FUN_00a952e0(uVar3,uVar9);
        if (iVar4 != 0) {
          uVar9 = 0xf0015;
          uVar3 = FUN_00e03ea0("NEWTOWER",0xf0015);
          iVar4 = FUN_00a18d70(uVar3,uVar9);
          if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
            iVar6 = 0;
            if (0 < *(short *)(iVar4 + 0x324)) {
              iVar8 = 0;
              do {
                iVar2 = *(int *)(iVar4 + 800);
                iVar7 = *(int *)(*(int *)(iVar2 + 0x60 + iVar8) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"_before"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar2 + 0x38 + iVar8);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                iVar6 = iVar6 + 1;
                iVar8 = iVar8 + 0x70;
              } while (iVar6 < *(short *)(iVar4 + 0x324));
            }
            iVar6 = 0;
            if (0 < *(short *)(iVar4 + 0x324)) {
              iVar8 = 0;
              do {
                iVar2 = *(int *)(iVar4 + 800);
                iVar7 = *(int *)(*(int *)(iVar2 + 0x60 + iVar8) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"_after"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar2 + 0x38 + iVar8);
                  *puVar1 = *puVar1 | 1;
                }
                iVar6 = iVar6 + 1;
                iVar8 = iVar8 + 0x70;
              } while (iVar6 < *(short *)(iVar4 + 0x324));
            }
          }
        }
      }
    }
    else if (iVar6 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      goto LAB_00d6068e;
    }
    unaff_EBX = unaff_EBX + 1;
    iVar4 = FUN_00a00f80(0x2020b,0);
    if ((0x78 < unaff_EBX) && (iVar4 != 0)) {
      FUN_00d5ea40("btl_ray02_3_start",1,0);
      piVar5 = (int *)FUN_00a6dd90();
      (**(code **)(*piVar5 + 0x54))();
      return;
    }
    piVar5 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar5 + 0x50))(1);
  } while( true );
}

