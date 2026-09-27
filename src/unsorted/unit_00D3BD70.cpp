// src/unsorted/unit_00D3BD70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D3BD70..00D3C080, 3 functions

#include "mgrr.h"

// 00D3BD70  FUN_00d3bd70  size=50  [run]
int FUN_00d3bd70(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xb8,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cEnemyTarget::cEnemyTarget();
    if (iVar1 != 0) {
      cEnemyTargetParts::cEnemyTargetParts_2();
    }
    return iVar1;
  }
  return 0;
}

// 00D3BDB0  FUN_00d3bdb0  size=713  [run]
void __fastcall FUN_00d3bdb0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint local_28;
  undefined1 local_20 [28];
  
  piVar5 = (int *)(param_1 + 4);
  local_28 = 0;
  piVar6 = piVar5;
  do {
    if ((&DAT_01dbf9dc)[local_28] == 0) {
      (&DAT_01dc03b8)[local_28] = 0;
    }
    if ((&DAT_01dc03b8)[local_28] == 0) {
      if ((local_28 != 0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
        (*(code *)**(undefined4 **)*piVar6)(1);
        *piVar6 = 0;
      }
    }
    else {
      FUN_00c15010(local_20);
      iVar4 = (&DAT_01dc03b8)[local_28];
      uVar2 = *(undefined4 *)(iVar4 + 0x44);
      iVar3 = *(int *)(iVar4 + 0x48);
      if (*(int *)(iVar4 + 0x50) == 0) {
        if ((*(int *)(iVar4 + 0x54) == 0) || (DAT_01dc08fc != 0)) {
          if ((*(int *)(iVar4 + 0x58) == 0) || ((DAT_01dc08fc != 0 || (DAT_01dc0900 != 0)))) {
            if (*(int *)(iVar4 + 0x5c) == 0) {
              if (*(char *)(iVar4 + 0x4c) == '\x01') {
                iVar4 = FUN_00d2e320(local_28);
                if (iVar4 != 0) {
                  if (iVar3 == 0) {
                    FUN_00cd2ea0(local_20);
                  }
                  else {
                    FUN_00cd2ed0(local_20,uVar2,iVar3);
                  }
                }
              }
            }
            else {
              iVar4 = FUN_00d2e320(local_28);
              if (iVar4 != 0) {
                if (iVar3 == 0) {
                  iVar4 = *piVar6;
                  *(undefined4 *)(iVar4 + 0x48) = 0;
                  *(undefined4 *)(iVar4 + 0x54) = 0;
                  *(undefined4 *)(iVar4 + 0x38) = 1;
                  FUN_00cb7fe0(local_20);
                  *(undefined4 *)(iVar4 + 0x54) = 0;
                }
                else {
                  iVar4 = *piVar6;
                  *(undefined4 *)(iVar4 + 0x38) = 1;
                  *(undefined4 *)(iVar4 + 0x48) = 0;
                  *(undefined4 *)(iVar4 + 0x54) = 0;
                  FUN_00cb7fe0(local_20);
                  *(undefined4 *)(iVar4 + 0x4c) = uVar2;
                  *(int *)(iVar4 + 0x50) = iVar3;
                  *(undefined4 *)(iVar4 + 0x54) = 1;
                }
              }
            }
          }
          else {
            iVar4 = FUN_00d2e320(local_28);
            if (iVar4 != 0) {
              if (iVar3 == 0) {
                FUN_00cd2fd0(local_20);
              }
              else {
                FUN_00cd2ff0(local_20,uVar2,iVar3);
              }
            }
          }
        }
        else {
          iVar4 = FUN_00d2e320(local_28);
          if (iVar4 != 0) {
            iVar4 = *piVar6;
            if (iVar3 == 0) {
              *(undefined4 *)(iVar4 + 0x38) = 1;
              *(undefined4 *)(iVar4 + 0x48) = 3;
              *(undefined4 *)(iVar4 + 0x54) = 0;
              FUN_00cb7fe0(local_20);
            }
            else {
              FUN_00cd2f90(local_20,uVar2,iVar3);
            }
          }
        }
      }
      else {
        iVar4 = FUN_00d2e320(local_28);
        if (iVar4 != 0) {
          if (iVar3 == 0) {
            iVar4 = *piVar6;
            *(undefined4 *)(iVar4 + 0x38) = 1;
            *(undefined4 *)(iVar4 + 0x48) = 2;
            *(undefined4 *)(iVar4 + 0x54) = 0;
            FUN_00cb7fe0(local_20);
          }
          else {
            iVar4 = *piVar6;
            *(undefined4 *)(iVar4 + 0x38) = 1;
            *(undefined4 *)(iVar4 + 0x48) = 2;
            *(undefined4 *)(iVar4 + 0x54) = 0;
            FUN_00cb7fe0(local_20);
            *(undefined4 *)(iVar4 + 0x4c) = uVar2;
            *(int *)(iVar4 + 0x50) = iVar3;
            *(undefined4 *)(iVar4 + 0x54) = 1;
          }
          iVar4 = FUN_00a81330();
          if (iVar4 != 0) {
            uVar1 = *(undefined2 *)((&DAT_01dc03b8)[local_28] + 4);
            iVar3 = *piVar6;
            *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar4 + 0x24);
            *(undefined2 *)(iVar3 + 100) = uVar1;
          }
        }
      }
    }
    local_28 = local_28 + 1;
    piVar6 = piVar6 + 1;
  } while (local_28 < 0xf);
  uVar7 = 0;
  do {
    if (*piVar5 != 0) {
      (**(code **)(*(int *)*piVar5 + 4))();
    }
    *(undefined4 *)((int)&DAT_01dbf9dc + uVar7) = 0;
    uVar7 = uVar7 + 4;
    piVar5 = piVar5 + 1;
  } while (uVar7 < 0x3c);
  DAT_01dc08fc = 0;
  DAT_01dc0900 = 0;
  return;
}

// 00D3C080  FUN_00d3c080  size=369  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d3c080(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x40);
  do {
    if ((&DAT_01dc02c8)[uVar3] == 0) {
      (&DAT_01dc0340)[uVar3] = 0;
    }
    if ((&DAT_01dc0340)[uVar3] == 0) {
      if ((uVar3 != 0) && (iVar1 = *piVar4, iVar1 != 0)) {
        if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
          *(undefined4 *)(iVar1 + 4) = 0;
        }
        *piVar4 = 0;
      }
    }
    else if (*piVar4 == 0) {
      iVar1 = FUN_00d29960(0x17);
      *piVar4 = iVar1;
    }
    else if (*(int *)(*piVar4 + 0x18) != 0) {
      FUN_00c15010(local_20);
      iVar1 = *piVar4;
      *(undefined4 *)(iVar1 + 0x1e4) = 1;
      *(undefined4 *)(iVar1 + 0x1ec) = 1;
      iVar2 = FUN_00d9fa80(&local_30,local_20);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x1e4) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x80) = local_30;
        *(undefined4 *)(iVar1 + 0x84) = local_2c;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 0x1e);
  DAT_01dc02c8 = 0;
  DAT_01dc02cc = 0;
  _DAT_01dc02d0 = 0;
  _DAT_01dc02d4 = 0;
  _DAT_01dc02d8 = 0;
  _DAT_01dc02dc = 0;
  _DAT_01dc02e0 = 0;
  _DAT_01dc02e4 = 0;
  _DAT_01dc02e8 = 0;
  _DAT_01dc02ec = 0;
  _DAT_01dc02f0 = 0;
  _DAT_01dc02f4 = 0;
  _DAT_01dc02f8 = 0;
  _DAT_01dc02fc = 0;
  _DAT_01dc0300 = 0;
  _DAT_01dc0304 = 0;
  _DAT_01dc0308 = 0;
  _DAT_01dc030c = 0;
  _DAT_01dc0310 = 0;
  _DAT_01dc0314 = 0;
  _DAT_01dc0318 = 0;
  _DAT_01dc031c = 0;
  _DAT_01dc0320 = 0;
  _DAT_01dc0324 = 0;
  _DAT_01dc0328 = 0;
  _DAT_01dc032c = 0;
  _DAT_01dc0330 = 0;
  _DAT_01dc0334 = 0;
  _DAT_01dc0338 = 0;
  _DAT_01dc033c = 0;
  return;
}

